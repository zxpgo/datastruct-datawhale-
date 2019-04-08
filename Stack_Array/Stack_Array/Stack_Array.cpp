// Stack_Array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "Stack.h"
#include "Stack.cpp"  //由于使用类模板，如果只包含类的头文件而不包含类实现的文件，将出现编译错误
#include <iostream>
using namespace std;
int main()
{
	Stack<int> s(5);
	//入栈
	s.push(4);
	s.push(3);
	s.push(5);
	s.push(1);
	s.push(2);
	//判断栈是否为满栈
	cout << s.isfull() << endl;
	int x;
	//出栈
	s.pop(x);
	cout << x << endl;
	s.pop(x);
	cout << x << endl;
	//判断栈是否为空
	cout << s.isempty() << endl;

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
