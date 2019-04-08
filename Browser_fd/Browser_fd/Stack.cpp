#include "pch.h"
#include "Stack.h"

using namespace std;

template <class T>
Stack<T>::Stack(int n)
{
	maxSize = n;
	top = 0;
	items = new T[maxSize];
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] items;
}

template<class T>
bool Stack<T>::push(const T & x)
{
	if (isfull())
		return false;
	items[top++] = x;
	return true;
}

template<class T>
bool Stack<T>::pop(T & x)
{
	if (isempty())
		return false;
	x = items[--top];
	return true;
}

template<typename T>
T Stack<T>::topvalue()
{
	return items[top - 1];
}

template<typename T>
void Stack<T>::show()
{
	for (int i = 0; i < top; i++)
		cout << items[i] << " ";
	cout << endl;
}