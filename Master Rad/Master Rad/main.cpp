#include<iostream>

#include "BoolTree.h"

int main() {
	std::cout << "Nenad Jankovic";
	std::cout << "23" << std::endl;

	BoolTree tree;
	std::cout << tree.printExpresion() << std::endl;

	return 0;
}