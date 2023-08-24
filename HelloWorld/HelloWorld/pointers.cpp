#include <iostream>
#include "pointers.h"

Pointer::Pointer(int value) {
	this->value = value;
	std::cout << "Pointer constructor\n";
}

Pointer::Pointer(const Pointer& ptr) {
	this->value = ptr.value;
	std::cout << "Pointer copy constructor\n";
}

Pointer::~Pointer() {
	std::cout << "Pointer destructor\n";
}

int Pointer::getValue() {
	return value;
}

void pointersTest() {
	int i1 = 100;

	// this is differnt variable, separate memory
	int i2 = i1;
	i2++;

	// will print i1=100, i2=101
	std::cout << i1 << ", " << i2 << std::endl;


	// this is reference, variable points to the same memory
	// any update on i1 or i3 will update both variables
	int& i3 = i1;
	i1++;
	i3--;

	// will print i1=100, i3=100
	std::cout << i1 << ", " << i3 << std::endl;


	// this is pointer to i1
	// pValue type is int* (pointer to int)
	// to take pointer (address) - use &, &i1 returns int* because i1 is int
	int* pValue = &i1;

	// now you can change value of i1 using pointer to it (pValue)
	*pValue = 200;

	// will print 200, 200
	std::cout << i1 << ", " << *pValue << std::endl;


	Pointer ptr(123);
	test2(ptr);
}

void test1(int& value) {
	value++;
}

void test2(const Pointer& ptr) {

}