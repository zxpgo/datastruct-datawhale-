#include "pch.h"
#include "CycleList.h"


template<class T>
CycleList<T>::CycleList()
{
	first = new Node<T>();
	first->next = first;
	n = 0;
}

template<class T>
CycleList<T>::~CycleList()
{
	
	Node<T> * temp;
	while (first->next != first)
	{
		temp = first->next;
		first->next = temp->next;
		delete temp;
	}
}

template <class T>
bool CycleList<T>::Insert(int i, T x)
{
	if (i < 0 || i >= n)
	{
		cout << "³¬³öË÷Òý·¶Î§£¡" << endl;
		return false;
	}
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->next;
	Node<T> * temp = new Node<T>(x);
	temp->next = head->next;
	head->next = temp;
	n++;
	return true;
}

template<class T>
bool CycleList<T>::Update(int i, T x)
{
	if (i < 0 || i >= n)
	{
		cout << "³¬³öË÷Òý·¶Î§£¡" << endl;
		return false;
	}
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->next;
	head->next->element = x;
	return true;
}

template<class T>
bool CycleList<T>::Delete(int i)
{
	if (!n)
	{
		cout << "Á´±íÎª¿Õ" << endl;
		return false;
	}
	if (i < 0 || i >= n)
	{
		cout << "³¬³öË÷Òý·¶Î§£¡" << endl;
		return false;
	}
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->next;
	Node<T> * temp = head->next;
	head->next = temp->next;
	delete temp;
	n--;
	return true;
}

template<class T>
int CycleList<T>::Search(T x) const
{
	Node<T> * head = first;
	for (int j = 0; j < n; j++)
	{
		head = head->next;
		if (head->element == x)
			return j;
	}
}

template<class T>
bool CycleList<T>::Find(int i, T & x) const
{
	if (i < 0 || i >= n)
	{
		cout << "³¬³öË÷Òý·¶Î§£¡" << endl;
		return false;
	}
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->next;
	x = head->next->element;
	return true;
}

template<class T>
int CycleList<T>::Length() const
{
	return n;
}

template<class T>
void CycleList<T>::Clear()
{
	Node<T> * head = first;
	Node<T> * temp;
	while (head->next != first)
	{
		temp = head->next;
		head->next = temp->next;
		delete temp;
	}
	n = 0;
}

template<class T>
void CycleList<T>::Output(ostream & out) const
{
	Node<T> * head = first;
	while (head->next != first)
	{
		head = head->next;
		out << head->element << " ";
	}
	out << endl;
}

