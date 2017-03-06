#pragma once
#define MAX 256
#include "Stack.h"

class Stack_OK : public Stack {
private:
	int stack_array[MAX];
	int SP;
public:
	Stack_OK();
	virtual ~Stack_OK();
	virtual void push(int a);
	virtual int pop();
	virtual void print(); //print inhoud van de stack op het scherm
};