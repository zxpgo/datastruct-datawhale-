#include "pch.h"
#include "Broswer.h"

//初始化几个页面
Broswer::Broswer()
{
	x->push(1);
	x->push(2);
	x->push(3);
	x->push(4);
}

//调用两个栈的析构函数
Broswer::~Broswer()
{
	x->~Stack();
	y->~Stack();
}
//回退
bool Broswer::forward()
{
	if (x->isempty())
		return false;
	int a;
	x->pop(a);
	y->push(a);
	return true;
}
//前进
bool Broswer::back()
{
	if (y->isempty())
		return false;
	int a;
	y->pop(a);
	x->push(a);
}
//新打开一个页面，此时需要清空栈y
void Broswer::add_new(int a)
{
	clear(y);
	x->push(a);
}
//清空栈
void Broswer::clear(Stack<int> * s)
{
	s->clear();
}
//显示当前两个栈的内容
void Broswer::show_stack()
{
	cout << "x : ";
	x->show();
	cout << endl << "y: ";
	y->show();
	cout << endl;
}