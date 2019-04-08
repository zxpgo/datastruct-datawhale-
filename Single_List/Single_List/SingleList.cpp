#include "pch.h"
#include "SingleList.h"


template<class T>
SingleList<T>::~SingleList()
{
	Node<T>  * temp;
	while(first != NULL)
	{
		temp = first;
		first = temp->next;
		delete temp;
	}
}

template<class T>
int SingleList<T>::Length() const
{
	//�ڵ������0��ʼ�����Գ�����Ҫ��1
	return n;
}

template<class T>
bool SingleList<T>::Find(int i, T & x) const
{
	if (i >= n || i < 0)
	{
		cout << "����������Χ��" << endl;
		return false;
	}
	Node<T> * head = first;
	//headΪͷ�ڵ㣬ͷ�ڵ��һ���ڵ�ſ�ʼ�洢ֵ������Ϊ�˺��淽������ɾ������
	for (int j = 0; j < i + 1; j++)
	{
		head = head->next;
	}
	x = head->element;
	return true;
}


template<class T>
int SingleList<T>::Search(T x) const
{
	Node<T> * head = first;
	for (int i = 0; i <= n; i++)
	{
		head = head->next;
		if (head->element == x)
			return i;
	}
}

template<class T>
bool SingleList<T>::Insert(int i, T x)
{
	Node<T> * head = first;
	Node<T> * p = new Node<T>(x);
	for (int j = 0; j < i; j++)
		head = head->next;
	Node<T> * temp = head->next;
	head->next = p;
	p->next = temp;
	n++;
	return true;
}

template<class T>
bool SingleList<T>::Delete(int i)
{
	if (!n)
	{
		cout << "����Ϊ��" << endl;
	}
	if (i < -1 || i > n - 1)
	{
		cout << "������Χ��" << endl;
		return false;
	}
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->next;
	Node<T> * temp = head->next;
	head->next = temp->next;
	delete temp;
	n--;
	return true;
}

template<class T>
bool SingleList<T>::Update(int i, T x)
{
	if (i < -1 || i > n - 1)
	{
		cout << "������Χ��" << endl;
		return false;
	}
	Node<T> * head = first;
	for (int j = 0; j < i; j++)
		head = head->next;
	head->next->element = x;
	return true;
}

template<class T>
void SingleList<T>::Clear()
{
	Node<T> * head = first;
	Node<T> * temp;
	while (head->next != NULL)
	{
		temp = head->next;
		head->next = temp->next;
		delete temp;
	}
	n = 0;
}

template<class T>
void SingleList<T>::Output(ostream & out) const
{
	Node<T> * head = first->next;
	while(head != NULL)
	{
		out << head->element << " ";
		head = head->next;
	}
	out << endl;
}
//����ת
template<class T>
bool SingleList<T>::Reverse()
{
	//���������ڵ㣬�ֱ�ָ���һ�����ڶ������������ڵ�
	if (first->next == NULL)
		return 0;
	Node<T> * p1 = first->next;
	Node<T> * p2 = p1->next;
	p1->next = NULL; //��Ҫ�����һ���ڵ������ڵ�����ӣ�������������������޳���
	Node<T> * head;
 	while (p2 != NULL)
	{
		head = p2->next;
		p2->next = p1;
		p1 = p2;
		p2 = head;
	}
	first->next = NULL;
	first->next = p1;
	return 1;
}

template<class T>
SingleList<T> * SingleList<T>::Merge( const SingleList<T> * q)
{

	Node<T>  * head1, *head2;
	SingleList<T> * head = new SingleList<T>();
	Node<T> * temp = head->first->next;
	head1 = this->first->next;
	head2 = q->first->next;
	while (head1 && head2)
	{
		if (head1->element < head2->element)
		{
			temp->element = head1->element;
			head1 = head1->next;
			temp = temp->next;
		}
		else
		{
			temp->element = head2->element;
			head2 = head2->next;
		}
	}
	if (head1)
		temp = head1;
	if (head2)
	{
		temp = head2;
	}
	return head;
}
