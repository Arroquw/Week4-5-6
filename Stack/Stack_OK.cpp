#include "Stack_OK.h"
#include <iostream>

Stack_OK::Stack_OK() {
	stack_array[MAX] = { 0 };
	SP = 0;
}

Stack_OK::~Stack_OK() {
}

void Stack_OK::push(int a) {
	if (SP != MAX-1) {
		stack_array[SP] = a;
		SP++;
	}
	else { std::cout << "stack full!"; return; }
}

int Stack_OK::pop() {
	if (SP != 0) {
		return SP--;
	}
	else {
		return -1;
	}
}

void Stack_OK::print() {
	std::cout << "Stack: " << std::endl;
	for (int i = 0; i < SP; i++) {
		std::cout << stack_array[i] << std::endl;
	}
}
