#ifndef  STACKNode_H_
#define STACKNode_H_
template <typename T>
class Node {
private:
	
public:
	T element;
	Node<T> * link;
	Node() : element(0), link(nullptr) {}
};
template <typename T>
class StackList
{
private:
	Node<T> * top;
	Node<T> * head;
	int curSize;
	
public:
	StackList();
	~StackList();
	void push(T x);
	bool pop(T & x);
	bool isempty() { return (curSize == 0); }

};
#endif // ! STACKNode_H_



