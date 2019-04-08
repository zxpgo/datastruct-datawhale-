#pragma once
template<class T>
class Node
{
public:
	T element;
	Node<T> * next;
	Node(T x = 0) : element(x), next(nullptr) {}
};
template<class T>
class Queue
{
private:
	Node<T> * r;
	Node<T> * f;

public:
	Queue();
	~Queue();
	bool enqueue(T x);
	bool dequeue();
	bool front(T & x);
	bool isempty() { return r == nullptr; }
};

