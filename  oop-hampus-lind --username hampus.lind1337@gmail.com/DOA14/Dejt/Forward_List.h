#pragma once
#include<iterator>
#include <exception>
#include <string>
#include<sstream>
#include <iostream>
using namespace std;
template <class T>
struct Node{
	T value;
	Node<T>*next;

	Node(){
		next = nullptr;
	}

	Node(const T &t){
		value = t;
		next = nullptr;
	}
};
template <class T>
class Forward_List
{
private:
	Node <T> *head;
public:
	Forward_List(){
		head = nullptr;
	}

	bool is_empty(){ return head == nullptr; } 

	Forward_List(const Forward_List& obj){
		Forward_List<int>fl1;
		fl1.push_front(10);
		fl1.push_front(20);

		Forward_List<int>fl2(fl1);
	}

	void pop_front(){ 
		if (head != nullptr){
			Node<T> *temp = head;
			head = head->next;
			delete temp;
		}
	}

	T& front(){
		if (head != nullptr){
			return head->value;
		}
		else{
			throw exception("listan är tom");
		}
	}

	void push_front(T value){ 
		Node <T> *n = new Node<T>(value);
		if (head == nullptr){
			head = n;
		}
		else{
			n->next = head;
			head = n;
		}


	}

	void clear(){ 
		
		while (!is_empty()){
			pop_front();
		}


	}

	string PrintList(){ 
		ostringstream oss;
		Node<T> *n = head;
		if (n == nullptr)
			return "";
		while (n != nullptr){
			oss << n->value << endl;
			n = n->next;
		}
		return oss.str();
	}

	void insert_after(int index, T value){ 
		Node<T> *ptr = head;
		int i = 0;

		while (i != index){
			ptr = ptr->next;
			i++;
		}
		Node<T> *n = new Node <T>(value);
		n->next = ptr->next;
		ptr->next = n;
	}

	void erase_after(int index){ 
		Node<T> *ptr = head;
		Node<T> *temp;
		int i = 0;
		while (i != index){
			ptr = ptr->next;
			i++;
		}
		temp = ptr->next;
		ptr->next = temp->next;
		delete temp;
	}

	void swap(Forward_List &flist1){
		Node<T>*n = head;
		auto temp = head;
		head = flist1.head;
		flist1.head = temp;
	}



	Forward_List& operator = (Forward_List& right_object){
		Forward_List<int> flist1;
		Forward_List<int> flist2;

		flist1.push_front(10);
		flist1.push_front(20);

		flist2 = flist1;
	}

	

	virtual ~Forward_List(){}

	class iterator {
	public:
		typedef iterator self_type;
		typedef Node<T> value_type;
		typedef Node<T>& reference;
		typedef Node<T>* pointer;
		typedef std::forward_iterator_tag iterator_category;
		typedef int difference_type;

		iterator(pointer ptr) : ptr_(ptr){}
		self_type operator++(){
			self_type i = *this;
			ptr_ = ptr_->next;
			return i;
		}
		self_type operator++(int junk){ ptr_ = ptr_->next; return *this; }
		reference operator*(){ return *ptr_; }
		pointer operator->(){ return ptr_; }

		bool operator == (const self_type& rhs){ return ptr_ == rhs.ptr_; }
		bool operator!=(const self_type& rhs){ return ptr_ != rhs.ptr_; }
	private:
		pointer ptr_;
	};
	iterator begin(){ return iterator(head); }
	iterator end(){ return iterator(nullptr); }
};
