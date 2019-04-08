// QueueArray.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "Queue.h"
#include "Queue.cpp"
#include <iostream>

int main()
{
	Queue<int> q(5);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	int x;
	q.front(x);
	std::cout << x << std::endl;
	q.dequeue();

	q.front(x);
	std::cout << x << std::endl;
	q.dequeue();

	
	q.enqueue(5);
	q.front(x);
	std::cout << x << std::endl;
	q.dequeue();
	
	q.front(x);
	std::cout << x << std::endl;
	q.dequeue();

	q.front(x);
	std::cout << x << std::endl;
	q.dequeue();

	q.enqueue(10);
	
	//清空队列
	q.clear();
	std::cout << "当前队列是否已满：" << q.isfull() << std::endl;
	std::cout << "当前队列是否为空：" << q.isempty() << std::endl;
	q.enqueue(10);
	q.front(x);
	std::cout << x << std::endl;
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
