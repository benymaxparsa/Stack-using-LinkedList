#pragma once
#ifndef LLStack_h
#define LLStack_h

#include "StackNode.h"


class LLStack
{
private:
	int size;
	StackNode* root;
public:
	LLStack();
	~LLStack();

	void push(int data);
	int pop();
	int top();
	bool isEmpty();
	bool isFull();
	int Size();

};

#endif // !LLStack_h