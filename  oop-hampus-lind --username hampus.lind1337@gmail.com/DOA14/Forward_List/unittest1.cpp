#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "Forward_List.h"

namespace Forward_List_test
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestForwardList_is_empty)
		{
			Forward_List<int> flist;
			Assert::AreEqual(true, flist.is_empty());

		}
		TEST_METHOD(TestForwardList_push_front_and_front){
			Forward_List<int> flist;
			flist.push_front(10);
			Assert::AreEqual(10, flist.front());
			flist.push_front(20);
			Assert::AreEqual(20, flist.front());

		}

		TEST_METHOD(TestForwardList_swap){
			Forward_List <int> flist1;
			Forward_List <int> flist2;

			Assert::AreEqual(true, flist1.is_empty());

			flist1.push_front(10);
			flist1.push_front(20);

			flist2.push_front(30);
			flist1.swap(flist2);
			Assert::AreEqual(20, flist2.front());
		}

		TEST_METHOD(TestForwardList_iterator_begin_end){
			Forward_List <int> flist;

			flist.push_front(10);
			flist.push_front(20);
			flist.push_front(30);
			int i = 0;
			Assert::AreEqual(false, flist.is_empty());
		}

		TEST_METHOD(TestForwardList_pop_front){
			Forward_List<int> flist;
			int a = 10;
			int b = 20;
			int c = 30;
			flist.push_front(a);
			Assert::AreEqual(10, flist.front());
			flist.push_front(b);
			Assert::AreEqual(20, flist.front());
			flist.push_front(c);
			Assert::AreEqual(30, flist.front());

			flist.pop_front();
			Assert::AreEqual(20, flist.front());

		}

		
	};
};