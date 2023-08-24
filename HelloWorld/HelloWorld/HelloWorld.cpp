// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "unit1.h"
#include "unit2.h"
#include "pointers.h"
#include "classes.h"
#define NUMBER 1

int main()
{
	/*
	int i1 = fun1();
	int i2 = unit2::fun1();

	int input;
	std::cin >> input;
	std::string str;
	std::cin >> str;

	std::cout << "Hello World!" << "\n" << i1 << ", " << i2 << "\n" << input << "\n" << str; // operator<<(cout, str)

	//int i3 = (i1++) + i2; // i3 = 100 + 101; i = 100 + 1
	int i3 = (++i1) + i2; // i = 100 + 1; i3 = 101 + 101; 
	i3 += 123;

	float f = 123.12;
	const char* cstr = "blah-blah-blah";
	*/

	//printf("int = %d, float = %.2f, str = %s, NUMBER = %d\n", i, f, cstr, NUMBER);

	//pointersTest();

	classes_test();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
