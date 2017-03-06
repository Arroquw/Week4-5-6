#include "Stack.h"
#include "Stack_OK.h"
#include <iostream>

int main(int argc, char *argv[]) {
	Stack_OK *stack = new Stack_OK();
	stack->push(5);
	stack->push(3);
	stack->print();
	std::cout << "removed place " << stack->pop() << std::endl;
	stack->print();
	std::cin.get();
	return 0;
}