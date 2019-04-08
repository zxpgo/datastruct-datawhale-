#pragma once
#include <iostream>
using namespace std;

template<class T>
class Node
{
public:
	Node<T> * lnext;
	Node<T> * rnext;
	T element;
	Node(T x = 0) :element(x), lnext(nullptr), rnext(nullptr) {}
};
template <class T>
class DoubleList
{
private:
	Node<T> * first;
	int n;
public:
	DoubleList();
	~DoubleList();
	bool Insert(int i, T x);
	bool Update(int i, T x);
	bool Delete(int i);
	int Search(T x) const;
	bool Find(int i, T & x) const;
	int Length() const;
	void Clear();
	void Output(ostream & out) const;
};

