#include "Stack.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
	Stack_OK<char*> stack;
	stack.push("hoi");
	stack.push("jemoeder");
	stack.print();
	std::cout << "removed index " << stack.pop() << std::endl;
	stack.print();
	std::cin.get();
	return 0;
}