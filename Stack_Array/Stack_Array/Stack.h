#ifndef STACK_H_
#define STACK_H_

template<class T>
class Stack
{
private:
	int top;  //头部指针
	int maxSize; //栈的最大容量
	T * items;  //栈的容器，这里是数组
public:
	Stack(int n);
	~Stack();
	bool isfull() { return (top == maxSize); }
	bool isempty() { return (top == 0); }
	bool push(const T & x);  //入栈
	bool pop(T & x);  //出栈
	T topvalue();  //获取栈顶部元素
};

#endif // !STACK_H