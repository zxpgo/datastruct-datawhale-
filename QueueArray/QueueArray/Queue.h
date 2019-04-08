#pragma once
#include "pch.h"
template<class T>
class Queue
{
	T * items;
	int maxSize;
	int f, r;
public:
	Queue(int n);
	~Queue();
	bool isempty();
	bool isfull();
	bool front(T & x);
	bool enqueue(T x);
	bool dequeue();
	bool clear();
};

