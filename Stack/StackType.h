#pragma once
#include "ItemType.h"
using namespace std;
struct NodeType {
	NodeType* nextNode;
	int data;
};
class EmptyStack{};
class FullStack{};

class StackType {

public:
	StackType();
	//~StackType();
	int Top();
	bool IsFull();
	bool IsEmpty();
	void Push(int newItem);
	void Pop();

private:
	NodeType* nextUpPtr;
};