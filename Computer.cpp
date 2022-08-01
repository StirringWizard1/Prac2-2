#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"


Computer::Computer()
{}
char Computer::makeMove()
{
	CMove = 'R';
	return CMove; 
}
char Computer::getMove()
{
	return CMove; 
}
