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

	Node(T t){
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
			throw exception("listan ar tom");
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

	void PrintList(){ 

		Node <T> *ptr = head;
		while (ptr != nullptr)
		{
			if (ptr == head){
				cout << "[";
			}
			cout << ptr->value;
			if (ptr->next == nullptr)
			{
				cout << "]";
			}
			else
				cout << ",";
			ptr = ptr->next;
		}

		
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

	T before(T val){
		Node<T>*ptr = head;
		while (!(ptr->next->value == val) || ptr != NULL){
			ptr->next;
		}
		return ptr;
	}

	void remove(T value)
	{
		Node<T> *prePtr = nullptr;
		Node<T> *ptr = head;
		while (ptr != nullptr)
		{
			if (ptr->value == value)
			{
				if (prePtr == nullptr)
					head = head->next;
				else
					prePtr->next = ptr->next;

				delete ptr;
				return;
			}
			prePtr = ptr;
			ptr = ptr->next;
		}
	}

	void swap(Forward_List &flist1){ 
		Node<T>*n = head;
		auto temp = head;
		head = flist1.head;
		flist1.head = temp;
	}

	T& operator[](int index){
		Node <T> *tempptr = this->head;
		for (int i = 0; i < index; i++)
		{
			tempptr = tempptr->next;
		}
		return tempptr->value;
	}

	int length(){
		int sum = 0;
		Node <T> *tempptr = this->head;
		while (tempptr != nullptr){
			tempptr = tempptr->next;
			sum++;
		}
		return sum;
	}


	Forward_List& operator = (Forward_List& right_object) 

	{
		this->clear();
		Node<T> *n = right_object.head;
		Node<T> *n2 = nullptr;
		while (n != nullptr)
		{
			if (head == nullptr)
			{
				head = new Node<T>(n->value);
				n2 = head;
			}
			else
			{
				n2->next = new Node<T>(n->value);
				n2 = n2->next;
			}
			n = n->next;
		}
		return *this;

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