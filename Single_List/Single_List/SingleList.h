//#ifndef SingleList_H_
//#define SingleList_H_
#pragma once
#include <iostream>
using namespace std;
//�ڵ���
template<class T>
class Node
{
public:
	T element;
	Node<T> * next;
	Node(T x = 0) : element(x), next(nullptr) {}
};
//������
template<class T>
class SingleList
{
private:
	Node<T> * first;
	int n;
public:
	SingleList() { first = new Node<T>();  n = 0; }
	~SingleList();
	int Length() const;
	bool Find(int i, T & x) const; //const��ʾ��Find���Ա���������޸����е����ݳ�Ա
	bool Insert(int i, T x);
	int Search(T x) const;
	bool Delete(int i);
	bool Update(int i, T x);
	void Clear();  //�������
	void Output(ostream & out)const;
	bool Reverse();//����ת
	SingleList<T> * Merge(const SingleList<T> * q);
};

//#endif