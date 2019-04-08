#include "pch.h"
#include "DoubleList.h"

template<class T>
DoubleList<T>::DoubleList()
{
	n = 0;
	first = new Node<T>();
	first->rnext = first->lnext = first;
}

template<class T>
DoubleList<T>::~DoubleList()
{
	/*Node<T> * temp;
	while(first->rnext != first)
	{
		temp = first->rnext;
		first->rnext->lnext = first;
		first->rnext = temp->rnext;
		delete temp;
	}
	delete first;
	first = NULL;*/
	//删除所有节点
	Node<T> * temp;
	Node<T> * head = first->rnext;
	while (head != first)
	{
		temp = head;
		head = head->rnext;
		delete temp;
	}
	//删除表头节点
	delete first;
	first = NULL;
}

template<class T>
bool DoubleList<T>::Insert(int i, T x)
{
	if (i < 0 || i > n)
	{
		cout << "下标超出范围！" << endl;
		return false;
	}
	Node<T> * temp = new Node<T>(x);
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->rnext;
	//开始执行插入
	temp->rnext = head->rnext;
	temp->lnext = head;
	head->rnext->lnext = temp;
	head->rnext = temp;
	
	n++;
	return true;
}

template<class T>
bool DoubleList<T>::Update(int i, T x)
{
	if (i < 0 || i > n)
	{
		cout << "下标超出范围！" << endl;
		return false;
	}
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->rnext;
	head->rnext->element = x;
	return true;
}

template<class T>
bool DoubleList<T>::Delete(int i)
{
	if (i < 0 || i > n)
	{
		cout << "下标超出范围！" << endl;
		return false;
	}
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->rnext;
	Node<T> * temp = head->rnext;
	head->rnext = temp->rnext;
	temp->rnext->lnext = head;
	delete temp;
	n--;
	return true;
}

template<class T>
bool DoubleList<T>::Find(int i, T & x)const
{
	if (i < 0 || i > n)
	{
		cout << "下标超出范围！" << endl;
		return false;
	}
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->rnext;
	x = head->rnext->element;
	return true;
}

template<class T>
int DoubleList<T>::Search(T x) const
{
	Node<T> * head = first;
	for (int j = 0; j < n; j++)
	{
		head = head->rnext;
		if (head->element == x)
			return j + 1;
	}
}

template<class T>
int DoubleList<T>::Length() const
{
	return n;
}

template<class T>
void DoubleList<T>::Clear()
{
	Node<T> * head = first;
	Node<T> * temp;
	while (head->rnext != head)
	{
		temp = head->rnext;
		head->rnext = temp->rnext;
		temp->rnext->lnext = head;
		delete temp;
	}
	n = 0;
}

template<class T>
void DoubleList<T>::Output(ostream & out) const
{
	Node<T> * head = first;
	while (head->rnext != first)
	{
		head = head->rnext;
		out << head->element << " ";
	}
	out <<  endl;
}