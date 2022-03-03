#include "StackType.h"
#include "ItemType.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	StackType newStack;
	ItemType item1;
	ItemType item2;
	item1.Initialize(7);
	item2.Initialize(14);

	newStack.Push(item1.value);
	newStack.Push(item2.value);
	cout << newStack.Top();
	return -1;
}