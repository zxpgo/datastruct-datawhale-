#include "pch.h"
#include "Queue.h"
#include <iostream>
using namespace std;

template<class T>
Queue<T>::Queue(int n)
{
	maxSize = n;
	f = r = -1;
	items = new T[maxSize];
}

template<class T>
Queue<T>::~Queue()
{
	delete[] items;
}

template<class T>
bool Queue<T>::isempty()
{
	return r == -1;
}

template<class T>
bool Queue<T>::isfull()
{
	return r == maxSize-1;
}

template<class T>
bool Queue<T>::front(T & x)
{
	if (r == -1 || f == maxSize-1)
	{
		cout << "��ǰ������û��ֵ��" << endl;
		return false;
	}
	x = items[f+1];
	return true;
}

template<class T>
bool Queue<T>::enqueue(T x)
{
	if (isfull())
	{
		cout << "��ǰ����������" << endl;
		return false;
	}
	items[++r] = x;
	return true;
}

template<class T>
bool Queue<T>::dequeue()
{
	if (isempty())
	{
		cout << "��ǰ����Ϊ�գ�" << endl;
		return false;
	}	
	f++;
	return true;
}

template<class T>
bool Queue<T>::clear()
{
	f = r = 0;
	return true;
}