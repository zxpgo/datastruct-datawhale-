#ifndef BROSWER_H_
#define BROSWER_H_
#include "Stack.h" 
#include "Stack.cpp"  //由于使用类模板，如果只包含类的头文件而不包含类实现的文件，将出现编译错误

class Broswer
{
private:
	Stack<int> * x = new Stack<int>(10);
	Stack<int> * y = new Stack<int>(10);//创建两个栈
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