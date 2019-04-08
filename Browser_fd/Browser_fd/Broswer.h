#ifndef BROSWER_H_
#define BROSWER_H_
#include "Stack.h" 
#include "Stack.cpp"  //����ʹ����ģ�壬���ֻ�������ͷ�ļ�����������ʵ�ֵ��ļ��������ֱ������

class Broswer
{
private:
	Stack<int> * x = new Stack<int>(10);
	Stack<int> * y = new Stack<int>(10);//��������ջ
public:
	Broswer();
	~Broswer();
	bool forward();
	bool back();
	void add_new(int a);
	void clear(Stack<int> * s);
	void show_stack();
};

#endif