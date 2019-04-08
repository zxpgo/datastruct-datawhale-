#include "pch.h"
#include "Queue.h"
#include <iostream>
using namespace std;
template<class T>
Queue<T>::Queue()
{
	//创建两个节点，当做表头节点，方便在链表头部添加元素
	r = new Node<T>();
	f = r;
}

template<class T>
Queue<T>::~Queue()
{
	Node<T> * temp;
	while (f)
	{
		temp = f;
		f = f->next;
		delete temp;
	}
}

template<class T>
bool Queue<T>::enqueue(T x)
{
	Node<T> * temp = new Node<T>(x);
	r->next = temp;
	r = r->next;
	return true;
}

template<class T>
bool Queue<T>::dequeue()
{
	if (f->next == NULL)
	{
		cout << "当前栈为空！" << endl;
		return false;
	}

	Node<T> * temp;
	temp = f->next;
	f->next = temp->next;
	delete temp;
	return true;
}

template<class T>
bool Queue<T>::front(T & x)
{
	if (f->next == NULL)
	{
		cout << "当前栈为空！" << endl;
		return false;
	}
	x = f->next->element;
	return true;
}