#pragma once



class Pointer {
private:
	int value;

public:
	//Pointer(int value) : value(value) {};
	Pointer(int value);
	Pointer(const Pointer& ptr);

	~Pointer();

	int getValue();
};

void pointersTest();
void test1(int& value);
void test2(const Pointer& ptr);