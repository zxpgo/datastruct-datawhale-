#pragma once
template<class T>
class SeqQueue
{
private:
	int front, rear;
	int maxSize;
	T * items;
public:
	SeqQueue(int n);
	~SeqQueue();
	bool Front(T & x);
	bool Dequeue();
	bool Enqueue(T x);
	bool IsEmpty() { return (front == rear); }
	bool IsFull() { return (front == (rear + 1) % maxSize); }
	void Clear() { rear = front = 0; }
};

