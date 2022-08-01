#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main()
{


Human Player1;
//Player1.makeMove();

Computer Player2;
//Player2.makeMove();
Referee chad;
std::cout << chad.refGame(Player1, Player2) <<std::endl;


}