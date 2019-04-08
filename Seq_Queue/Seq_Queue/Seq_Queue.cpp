// Seq_Queue.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "SeqQueue.h"
#include "seqQueue.cpp"
#include <iostream>
using namespace std;
int main()
{
	int x;
	SeqQueue<int> sq(5);
	sq.Enqueue(10);
	sq.Enqueue(11);
	sq.Enqueue(12);
	sq.Enqueue(13);
	sq.Enqueue(14);
	if (sq.IsFull())
		cout << "当前队列已满" << endl;
	sq.Front(x);
	cout << x << endl;
	sq.Dequeue();
	sq.Front(x);
	cout << x << endl;
	sq.Dequeue();
	sq.Enqueue(20);
	sq.Enqueue(21);
	for (int i = 0; i < 5; i++)
	{
		
		sq.Front(x);
		cout << x << endl;
		sq.Dequeue();
	}
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
