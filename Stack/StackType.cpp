#include "StackType.h"
#include <iostream>
using namespace std;

StackType::StackType() {
	nextUpPtr = NULL;
}

bool StackType::IsEmpty() {
	if (nextUpPtr == NULL) {
		return true;
	}
	else{
		return false;
	}
}
bool StackType::IsFull() {
	NodeType* location;
	try {
		location = new NodeType;
		delete location;
		return false;
	}
	catch (std::bad_alloc exception) {
		return true;
	}
}

int StackType::Top() {
	return nextUpPtr->data;


	/*
	ItemType theTopItem;
	if (nextUpPtr != NULL) {

		theTopItem.Initialize(nextUpPtr->data);
		return theTopItem;
	}
	else
		throw EmptyStack();*/
}

void StackType::Push(int newItem){
	//pre: stack is initialized
	//post: If stack is full exit, else the new item is at the top
	NodeType* temp = new NodeType;
	if (!temp) {
		throw FullStack();
	}
	else{
		temp->data = newItem; //temporary value gets the data from the new item
		temp->nextNode = nextUpPtr; //
		nextUpPtr = temp;
	}
}
void StackType::Pop() {
	//pre:stack is initialized
	//post: if stack is empty exit, else the top item is removed
	if (nextUpPtr==NULL) {
		cout << "Stack Is empty";
	}
	else {
		NodeType* temp;
		temp = nextUpPtr;// temp points to the top node
		nextUpPtr = nextUpPtr->nextNode; //and the top pointer points to the node after the top one 
		delete temp;
	}
}