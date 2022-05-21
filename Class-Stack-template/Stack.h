#pragma once
#include <iostream>
template <typename T>
class Stack
{
private:
	T* arr;
	T max;
	T index; //текущий елемент
public:
	Stack(T);
	~Stack();
	bool push(T n);
	T pop();

	bool isEmpty();
	bool isFull();
};


template <typename T>
Stack<T>::Stack(T size) {
	max = 1000;
	index = 0;
	if (size > max) {
		std::cout << "size > maxSize" << std::endl;
	}
	else {
		this->max = size;
		this->arr = new int[size];
	}
}

template <typename T>
Stack<T>::~Stack() {
	delete[] arr;
}

template <typename T>
bool Stack<T>::push(T n)
{

	if (index >= max) {
		return false;
	}
	else {
		arr[index] = n;
		index++;

		return true;
	}
}


template <typename T>
T Stack<T>::pop()
{
	if (index < 0) {
		return -1;
	}
	else {

		return arr[--index];
	}
}


template <typename T>
bool Stack<T>::isEmpty()
{
	if (index <= 0) {
		return true;
	}
	return false;
}


template <typename T>
bool Stack<T>::isFull()
{
	if (index == max) {
		return true;
	}
	return false;
}


