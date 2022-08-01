#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>


class Computer 
{
private: 
	char CMove; 
public:
	Computer();
	char makeMove();
	char getMove(); 


};
#endif