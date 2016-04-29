/**
*	@file: main.cpp
*	@author:  Justin Lee
*	@date: 2015.09.22
*	Purpose: Serves as a driver for the LinkedList class
*/
#include "Node.h"
#include "LinkedList.h"
#include "Test.h"
#include <iostream>
#include <stdexcept>


int main()
{
	Test myTester; //declares a Test instance
	myTester.runTests(); //runs a series of tests on your code
	return(0);
}
