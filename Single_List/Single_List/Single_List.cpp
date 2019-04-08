// 实现单链表，带有一个头节点，不存储任何值，用来方便插入和删除
//如果没有头节点，插入和删除的时候需要分情况，即头节点和非头节点
//注意，链表中第一个元素的下标为0
#include "pch.h"
#include "SingleList.h"
#include "SingleList.cpp"
#include <iostream>
using namespace std;


int main()
{
	SingleList<int> * p = new SingleList<int>();
	p->Insert(0, 10);
	p->Insert(1, 11);
	p->Insert(2, 12);
	p->Insert(3, 13);
	int x;
	p->Update(1,111); //更新第二个元素
	
	p->Find(2, x);   //查找第三个元素的值
	cout << x << endl; 
	cout << p->Search(13) << endl; //查找值13的下标
	p->Insert(2, 19); //插入一个值
	cout << p->Length() << endl; //链表长度
	p->Delete(1); //删除第2个值   链表：10 111 19 12 13
	p->Output(cout); //输出链表  
	cout << p->Length() << endl;
	p->Reverse();
	p->Output(cout);
	p->Clear();
	p->Output(cout); //输出链表  
	cout << p->Length() << endl;
	SingleList<int> * q = new SingleList<int>();
	q->Insert(0, 22);
	q->Insert(1, 33);
	q->Insert(2, 44);
	SingleList<int> * temp = p->Merge(q);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
