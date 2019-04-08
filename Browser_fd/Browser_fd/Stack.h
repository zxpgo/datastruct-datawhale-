#ifndef STACK_H_
#define STACK_H_
#include <iostream>
template<class T>
class Stack
{
private:
	int top;  //ͷ��ָ��
	int maxSize; //ջ���������
	T * items;  //ջ������������������
public:
	Stack(int n);
	~Stack();
	bool isfull() { return (top == maxSize); }
	bool isempty() { return (top == 0); }
	bool push(const T & x);  //��ջ
	bool pop(T & x);  //��ջ
	T topvalue();  //��ȡջ����Ԫ��
	void clear() { top = 0; }
	void show();
};

#endif // !STACK_H