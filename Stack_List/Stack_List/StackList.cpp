#include "pch.h"
#include "StackList.h"
#include <iostream>
using namespace std;
template<class T>
StackList<T>::StackList()
{
	head = nullptr;
	curSize = 0;
	top = nullptr;
}

template<class T>
StackList<T>::~StackList()
{
	//���ջ
	Node<T> * temp;
	if (head != nullptr)
	{
		temp = head;
		head = head->link;
		delete temp;
	}
}
template <class T>
void StackList<T>::push(T x)
{
	Node<T> * temp = new Node<T>();
	temp->element = x;
	temp->link = nullptr;
	//��ӵ�һ��Ԫ��ʱ
	if (head == nullptr)
	{
		head = temp;
		top = temp;
	}
	else//��ջ�ڶ���Ԫ�ؼ����
	{
		top->link = temp;
		top = top->link;
	}
	curSize++;
}

template<class T>
bool StackList<T>::pop(T & x)
{
	if (isempty())
		return false;
	x = top->element; //��ȡջ��Ԫ�ص�ֵ
	//topָ�������ƶ�
	top = head;
	for(int i =0; i < curSize-2; i++)
		top = top->link;
	//ɾ��ջ��Ԫ��
	if (curSize != 1)
		delete top->link;
	else
		delete top;
	curSize--;
	return true;
}
