#include "Test.h"

int sizeNo = 100;

Test::Test(){}

void Test::runTests()
{


	std::cout<< "Running Tests" << std::endl;

	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	test10();
	test12();
	test13();
	test14();
	test15();
//	test16();
	test17();
	test18();
	test19();
	test20();
	test21();


}


bool Test::test1()
{
	LinkedList<int> list;
	std::cout << "Test 1: size of empty list returns  zero: ";
	std::cout << std::endl
						<< "Size of list is: "
						<< list.size()
						<< std::endl;
	if(list.size() == 0)
		std::cout << "passed" << std::endl;
	else
		std::cout << "FAILED" << std::endl;

	return (list.size() == 0);
}


bool Test::test2()
{
	LinkedList<int> list;


	std::cout << "Test 2: size returns correct value after 1 add : ";

	std::cout << std::endl << "Size of list is: " << list.size() << std::endl;
	int s1 = list.size();
	std::cout << std::endl << "Size of list before addFront(): " << list.size() << std::endl;
	list.addFront(1);
	std::cout << std::endl << "Size of list after addFront(): " << list.size() << std::endl;
	int s2 = list.size();

	if(s2-s1 == 1)
		std::cout << "passed" << std::endl;
	else
		std::cout << "FAILED" << std::endl;

	return (list.size() == 1);
}




bool Test::test3()
{
	LinkedList<int> list;
	std::cout << "Test 3: size returns correct value after 1 addBack: ";

	int s1 = list.size();
	std::cout << std::endl << "Size of list before addBack(): " << list.size() << std::endl;
	list.addBack(5);
	std::cout << std::endl << "Size of list after addBack(): " << list.size() << std::endl;
	int s2 = list.size();


	if(s2-s1 == 1)
		std::cout << "passed" << std::endl;
	else
		std::cout << "FAILED" << std::endl;

	return(list.size() == 1);
}


bool Test::test4()
{
 	bool ispassed = false;
	LinkedList<int> list;

	std::cout << "Test 4: size returns correct value after multiple addFront:\n";


	for(int i=0; i<sizeNo; i++)
	{
		std::cout << '\r' << "\tAdding " << (i+1) << "/" << sizeNo << " nodes.  ";
		list.addFront(i);
		std::cout.flush();
	}

	if((list.size() == sizeNo))
	{
		ispassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		ispassed = false;
		std::cout << "FAILED" << std::endl;
	}

	return (ispassed);
}


bool Test::test5()
{
	bool isPassed = false;
	LinkedList<int> list;

	std::cout << "Test 5: size returns correct value after multiple addBack:\n";


	for(int i=0; i<sizeNo; i++)
	{
		std::cout << '\r' << "\tAdding " << (i+1) << "/" << sizeNo << " nodes.  ";
		list.addBack(i);
		std::cout.flush();
	}

	if( (list.size() == sizeNo))
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		isPassed = false;
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);

}


bool Test::test6()
{
	LinkedList<int> list;
	int tempSize = 0;
	bool isPassed=false;

	std::cout << "Test 6: size returns correct value after adds and removeFront: ";

	//Mix of adding to the front, back and removing back
	for(int i = 0; i < sizeNo; i++)
	{
		if(i%2 == 0)
		{
			list.addBack(i);
			tempSize++;
		}
		else if(i%3 == 0)
		{
			list.removeFront();
			tempSize--;
		}
		else
		{
			list.addFront(i);
			tempSize++;
		}
	}

	std::cout <<std::endl << "Actual size: " << list.size() << " Expected size: " << tempSize << std::endl;

	if(list.size() == tempSize)
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}

bool Test::test7()
{
	LinkedList<int> list;
	int tempSize = 0;
	bool isPassed=false;

	std::cout << "Test 7: size returns correct value after adds and removeBack: ";

	//Mix of adding to the front, back and removing back
	for(int i = 0; i < sizeNo; i++)
	{
		if(i%2 == 0)
		{
			list.addBack(i);
			tempSize++;
		}
		else if(i%3 == 0)
		{
			list.removeBack();
			tempSize--;
		}
		else
		{
			list.addFront(i);
			tempSize++;
		}
	}

	std::cout <<std::endl << "Actual size: " << list.size() << " Expected size: " << tempSize << std::endl;

	if(list.size() == tempSize)
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}

bool Test::test8()
{
	LinkedList<int> list;
	bool isPassed = false;

	std::cout << "Test 8: search returns nullptr on empty list:  ";

	if(list.search(42) == false)
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}

bool Test::test9()
{
	LinkedList<int> list;
	bool isPassed = false;

	std::cout << "Test 9: search returns false when value not in list:  ";

	//add values from 0 to sizeNo-1 inclusively
	for(int i=0; i<sizeNo; i++)
	{
		list.addFront(i);
	}

	//search value not in list
	if(list.search(-1) == false)
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}


bool Test::test10()
{
	LinkedList<int> list;
	bool isPassed = true;

	std::cout << "Test 10: search returns true when value is in large list:  \n";

	//Add values 0-(sizeNo-1)
	for(int i=0; i<sizeNo; i++)
	{
		std::cout << '\r' << "\tAdding " << (i+1) << "/" << sizeNo << " nodes.  ";

		//Add every other node using addBack
		if( i%2 == 0)
		{
			list.addBack(i);
		}
		else
		{
			list.addFront(i);
		}
	}

	//search for all added values. Set flag if any value is not found
	for(int i=0; i<sizeNo; i++)
	{
		std::cout << '\r' << "\tsearching " << (i+1) << "/" << sizeNo << " nodes.  ";
		bool temp = list.search(i);

		if( temp == false)
		{
			isPassed = false;
		}
	}

	if(isPassed)
	{
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}

bool Test::test11()
{
	LinkedList<int> list;
	bool isPassed = false;

	std::cout << "Test 13: removeFront returns false on empty list:  ";

	if( !list.removeFront() )
	{
		isPassed = true;
	}

	if(isPassed)
		std::cout << "passed" << std::endl;
	else
		std::cout << "FAILED" << std::endl;

	return (isPassed);

}


bool Test::test12()
{
	LinkedList<int> list;
	bool isPassed = false;

	std::cout << "Test 14: removeBack returns false on empty list:  ";

	if( !list.removeBack() )
		isPassed = true;

	if(isPassed)
		std::cout << "passed" << std::endl;
	else
		std::cout << "FAILED" << std::endl;

	return (isPassed);
}

bool Test::test13()
{
	LinkedList<int> list;
	bool isPassed = false;
	int tempSize = 0;

	std::cout << "Test 15: size preserved by removeFront on populated list: ";

	//Remove front on every 3rd iteration, add otherwise.
	for(int i=0; i<sizeNo; i++)
	{
		if( i>0 && i%3 == 0)
		{

			list.removeFront();
			tempSize--;
		}
		else
		{

			list.addFront(i);
			tempSize++;
		}
	}

	std::cout <<std::endl << "Actual size: " << list.size() << " Expected size: " << tempSize << std::endl;

	if(tempSize == list.size())
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}


bool Test::test14()
{
	LinkedList<int> list;
	bool isPassed = false;
	int tempSize = 0;

	std::cout << "Test 16: size preserved by removeBack on populated list: ";
	for(int i=0; i<sizeNo; i++)
	{
			list.removeBack();
			tempSize--;

	}
	std::cout <<std::endl << "Actual size: " << list.size() << " Expected size: " << tempSize << std::endl;

	if(tempSize == list.size())
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}

bool Test::test15()
{
	LinkedList<int> list;
	bool isPassed = true;
	int num=0;
	int tempSize = 0;

	std::cout << "Test 15: order preserved by removeFront on populated list\n ";

	for(int i=0; i<sizeNo; i++)
	{
		list.addBack(i);
		tempSize++;
	}
		list.removeFront();


		if(list.size() == tempSize)
		{
			isPassed = true;
		}

	if(isPassed)
	{
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}

bool Test::test16()
{
	return(false);
}

bool Test::test17() // to vector on empty list
{
	LinkedList<int> list;
	bool isPassed = false;

	std::cout << "Test 17: to vector on empty list returns empty vector ";

	std::vector<int> myvec = list.toVector();
	std::cout << std::endl << "Printing Vector: [";
	for(std::vector<int>::iterator it = myvec.begin(); it != myvec.end(); ++it)
	{
		std::cout<<*it;
	}
	std::cout<< "]" << std::endl << "Size of vector should be: 0" << std::endl << "Actual Size of Vector is: "
						<< myvec.size() << std::endl;


	if(myvec.size() == 0)
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}

bool Test::test18() // toVector on populated list using add front returns correct vector
{
	LinkedList<int> list;
	bool isPassed = false;

	std::cout << "Test 18: to vector on populated list (using add front) returns correct vector ";

	//add a few values to the list;
	list.addFront(1);
	list.addFront(2);
	list.addFront(3);

	std::vector<int> expvec = {3,2,1};


	std::vector<int> myvec = list.toVector();
	std::cout << std::endl << "Printing Vector: [";
	for(std::vector<int>::iterator it = myvec.begin(); it != myvec.end(); ++it)
	{
		std::cout<<*it <<",";
	}
	std::cout<< "]" << std::endl << "Expected vector: [3,2,1]" << std::endl;

	if(myvec == expvec)
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}

bool Test::test19() // to vector populated list using addback returns correct vector
{
	LinkedList<int> list;
	bool isPassed = false;

	std::cout << "Test 19: to vector on populated list (using add back) returns correct vector ";

	//add a few values to the list;
	list.addBack(1);
	list.addBack(2);
	list.addBack(3);

	std::vector<int> expvec = {1,2,3};


	std::vector<int> myvec = list.toVector();
	std::cout << std::endl << "Printing Vector: [";
	for(std::vector<int>::iterator it = myvec.begin(); it != myvec.end(); ++it)
	{
		std::cout<<*it <<",";
	}
	std::cout<< "]" << std::endl << "Expected vector: [1,2,3]" << std::endl;

	if(myvec == expvec)
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}


bool Test::test20() // to vector on populated list (using add front) and then remove a value (using remove front) returns correct vector
{
	LinkedList<int> list;
	bool isPassed = false;

	std::cout << "Test 20: to vector on populated list (using add front) and then remove a value (using remove front) returns correct vector ";

	//add a few values to the list;
	list.addFront(1);
	list.addFront(2);
	list.addFront(3);
	list.removeFront();

	std::vector<int> expvec = {2,1};


	std::vector<int> myvec = list.toVector();
	std::cout << std::endl << "Printing Vector: [";
	for(std::vector<int>::iterator it = myvec.begin(); it != myvec.end(); ++it)
	{
		std::cout<<*it <<",";
	}
	std::cout<< "]" << std::endl << "Expected vector: [2,1]" << std::endl;

	if(myvec == expvec)
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}

bool Test::test21() //to vector on populated list (using add front) and then remove a value (using remove back) returns correct vector
{
	LinkedList<int> list;
	bool isPassed = false;

	std::cout << "Test 22: to vector on populated list (using add front) and then remove a value (using remove back) returns correct vector ";

	//add a few values to the list;
	list.addFront(1);
	list.addFront(2);
	list.addFront(3);
	list.removeBack();

	std::vector<int> expvec = {3,2};


	std::vector<int> myvec = list.toVector();
	std::cout << std::endl << "Printing Vector: [";
	for(std::vector<int>::iterator it = myvec.begin(); it != myvec.end(); ++it)
	{
		std::cout<<*it <<",";
	}
	std::cout<< "]" << std::endl << "Expected vector: [3,2]" << std::endl;

	if(myvec == expvec)
	{
		isPassed = true;
		std::cout << "passed" << std::endl;
	}
	else
	{
		std::cout << "FAILED" << std::endl;
	}

	return (isPassed);
}
