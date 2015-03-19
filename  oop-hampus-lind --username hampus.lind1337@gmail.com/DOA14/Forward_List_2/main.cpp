#include <iostream>
#include <clocale>
#include <string>
#include "../Forward_List/Forward_List.h"
using namespace std;
int main(){

	Forward_List <int> flist1;
	Forward_List <int> flist2;


	flist1.push_front(10);
	flist1.push_front(20);

	flist2.push_front(30);
	flist1.swap(flist2);
	cout << "Swappat? " << "flist1:" << flist1.PrintList() << endl;
	cout << "Swappat?" << "flist2: " << flist2.PrintList() << endl;

	flist2.pop_front();
	flist2.pop_front();

	cout << "tom?" << flist2.is_empty() << endl;

	flist2.push_front(10);
	flist2.push_front(20);
	flist2.push_front(30);

	flist2.insert_after(1, 25);

	cout << "Insert after: " << flist2.PrintList() << endl;

	cout << "Front: " << flist2.front() << endl;

	cout << "tom? " << flist2.is_empty() << endl;

	flist2.clear();

	cout << "tom? " << flist2.is_empty() << endl;



	system("PAUSE");

	return 0;
}