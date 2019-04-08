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
	//清空栈
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
	//添加第一个元素时
	if (head == nullptr)
	{
		head = temp;
		top = temp;
	}
	else//入栈第二个元素及多个
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
	x = top->element; //获取栈顶元素的值
	//top指针向下移动
	top = head;
	for(int i =0; i < curSize-2; i++)
		top = top->link;
	//删除栈顶元素
	if (curSize != 1)
		delete top->link;
	else
		delete top;
	curSize--;
	return true;
}
