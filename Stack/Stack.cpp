#include "Stack.h"
#include <iostream>

Stack::Stack() {
	stack_array[MAX] = { 0 };
	SP = 0;
}

Stack::~Stack() {
}

void Stack::push(int a) {
	stack_array[SP] = a;
	SP++;
}

int Stack::pop() {
	stack_array[SP--] = 0;
	return SP;
}

void Stack::print() {
	std::cout << "Stack:" << std::endl;
	for (int i = 0; i < SP; i++) {
		std::cout << stack_array[i] << std::endl;
	}
}
