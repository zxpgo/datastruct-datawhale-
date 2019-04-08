#pragma once

#include <iostream>
using namespace std;

template<class T>
class Node
{
public:
	Node<T> * next;
	T element;
	Node(T x = 0) : element(x), next(nullptr) {}
};
template<class T>
class CycleList
{
private:
	Node<T> * first;
	int n;
public:
	CycleList();
	~CycleList();
	bool Insert(int i, T x);
	bool Update(int i, T x);
	bool Delete(int i);
	bool Find(int i, T & x)const;
	int Search(T x) const;
	int Length() const;
	void Clear();
	void Output(ostream & out) const;
};

