#include <iostream>
#include "Human.h"
#include "Computer.h"



Human::Human()
{}

char Human:: makeMove()
{
	std::cout << "Enter move: ";
	std::cin >> PMove;
	return PMove;
}
char Human::getMove()
{
	return PMove; 
}
