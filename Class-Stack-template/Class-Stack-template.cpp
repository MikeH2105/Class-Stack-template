//1. Доопрацюйте клас Stack. Зборіть так, щоб клас Stack був шаблонним. 

#include <iostream>
#include "Stack.h"
using namespace std;


int main()
{
	Stack <int>A(3);
	A.push(-51);
	A.push(5);
	A.push(2);


	for (int i = 0; i < 3; i++)
	{
		std::cout << A.pop() << "\t";
	}

	cout << endl << "Stack is ampty=" << A.isEmpty() << endl;
	cout << endl << "Stack is isFull=" << A.isFull() << endl;
}
