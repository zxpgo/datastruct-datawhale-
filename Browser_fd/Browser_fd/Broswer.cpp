#include "pch.h"
#include "Broswer.h"

//��ʼ������ҳ��
Broswer::Broswer()
{
	x->push(1);
	x->push(2);
	x->push(3);
	x->push(4);
}

//��������ջ����������
Broswer::~Broswer()
{
	x->~Stack();
	y->~Stack();
}
//����
bool Broswer::forward()
{
	if (x->isempty())
		return false;
	int a;
	x->pop(a);
	y->push(a);
	return true;
}
//ǰ��
bool Broswer::back()
{
	if (y->isempty())
		return false;
	int a;
	y->pop(a);
	x->push(a);
}
//�´�һ��ҳ�棬��ʱ��Ҫ���ջy
void Broswer::add_new(int a)
{
	clear(y);
	x->push(a);
}
//���ջ
void Broswer::clear(Stack<int> * s)
{
	s->clear();
}
//��ʾ��ǰ����ջ������
void Broswer::show_stack()
{
	cout << "x : ";
	x->show();
	cout << endl << "y: ";
	y->show();
	cout << endl;
}