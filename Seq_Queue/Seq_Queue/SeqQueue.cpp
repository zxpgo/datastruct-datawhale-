#include "pch.h"
#include "SeqQueue.h"
#include <iostream>
using namespace std;

template<class T>
SeqQueue<T>::SeqQueue(int n)
{
	maxSize = n;
	front = rear = 0;
	items = new T[maxSize];
}

template<class T>
SeqQueue<T>::~SeqQueue()
{
	delete [] items;
}

template<typename T>
bool SeqQueue<T>::Enqueue(T x)
{
	if (IsFull())
	{
		cout << "��ǰ����������" << endl;
		return false;
	}
	
	items[rear = (rear + 1) % maxSize] = x;
	return true;
}

template<typename T>
bool SeqQueue<T>::Dequeue()
{
	if (IsEmpty())
	{
		cout << "��ǰ����Ϊ�գ�" << endl;
		return false;
	}
	front = (front + 1) % maxSize;
	return true;
}

template<typename T>
bool SeqQueue<T>::Front(T & x)
{
	if (IsEmpty())
	{
		cout << "��ǰ����Ϊ�գ�" << endl;
		return false;
	}
	x = items[(front + 1) % maxSize];
	return true;
}