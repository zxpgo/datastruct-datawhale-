//#ifndef SingleList_H_
//#define SingleList_H_
#pragma once
#include <iostream>
using namespace std;
//节点类
template<class T>
class Node
{
public:
	T element;
	Node<T> * next;
	Node(T x = 0) : element(x), next(nullptr) {}
};
//链表类
template<class T>
class SingleList
{
private:
	Node<T> * first;
	int n;
public:
	SingleList() { first = new Node<T>();  n = 0; }
	~SingleList();
	int Length() const;
	bool Find(int i, T & x) const; //const表示：Find类成员函数不能修改类中的数据成员
	bool Insert(int i, T x);
	int Search(T x) const;
	bool Delete(int i);
	bool Update(int i, T x);
	void Clear();  //清空链表
	void Output(ostream & out)const;
	bool Reverse();//链表反转
	SingleList<T> * Merge(const SingleList<T> * q);
};

//#endif