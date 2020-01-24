#include "LLStack.h"

LLStack::LLStack()
{
	size = 0;
	root = NULL;
}

LLStack::~LLStack()
{
}

void LLStack::push(int data)
{
	StackNode* node = new StackNode(data);
	size++;
	if (!root)
	{
		root = node;
		return;
	}
	else
	{
		StackNode* p = root;
		while (p->next)
		{
			p = p->next;
		}
		p->next = node;
		return;
	}
}

int LLStack::pop()
{
	return 0;
}

int LLStack::top()
{
	return 0;
}

bool LLStack::isEmpty()
{
	return false;
}

bool LLStack::isFull()
{
	return false;
}

int LLStack::Size()
{
	return 0;
}
