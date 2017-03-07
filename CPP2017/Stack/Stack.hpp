#pragma once
#define MAX 256
#include <iostream>

template <class A_Type> class Stack_OK {
private:
	A_Type stack_array[MAX];
	int SP;
public:
	Stack_OK();
	virtual ~Stack_OK();
	virtual void push(A_Type a);
	virtual int pop();
	virtual void print(); //print inhoud van de stack op het scherm
};

template<class A_Type>
Stack_OK<A_Type>::Stack_OK() {
	stack_array[MAX] = { 0 };
	SP = 0;
}

template<class A_Type>
Stack_OK<A_Type>::~Stack_OK() {

}

template<class A_Type>
void Stack_OK<A_Type>::push(A_Type a) {
	if (SP != MAX - 1) {
		stack_array[SP] = a;
		SP++;
	}
	else { std::cout << "stack full!"; return; }
}

template<class A_Type>
int Stack_OK<A_Type>::pop() {
	if (SP != 0) {
		return SP--;
	}
	else {
		return -1;
	}
}

template<class A_Type>
void Stack_OK<A_Type>::print() {
	std::cout << "Stack: " << std::endl;
	for (int i = 0; i < SP; i++) {
		std::cout << stack_array[i] << std::endl;
	}
}