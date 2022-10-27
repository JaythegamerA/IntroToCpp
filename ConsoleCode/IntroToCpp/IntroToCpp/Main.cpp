#include <iostream> //	std::cout -> reserve for part of standard library (ship with standard compiler)
// #include "iostream"	//	std::cout -> reserve for libraries you create yourself or are importing



int sum(int a, int b);


void main()
{

	std::cout << "Hello World!" << std::endl;
	printf("hello world!\n");
	int total = sum(2, 3);
	std::cout << total << std::endl;
	printf(" % d", total);
	return;
}

int sum(int a, int b)
{
	return a + b;
}