#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;

Referee:: Referee()
{

}

char Referee:: refGame(Human Player1, Computer Player2)
{
	char P1 = Player1.makeMove(); 
	char P2 = Player2.makeMove();
	switch (P2){
			case 'R':
			if (P1 ==  'P'){
				 return 'W'; 

							}
			else if (P1 == 'R')
			{
				 return 'T'; 
				 	
			}
			else 
			{
				 return 'L'; 
				 	
			}
			break;
			case 'P':
			if (P1 ==  'S'){
				 return 'W'; 
							}
			else if (P1 ==  'P')
			{
				 return 'T';
				 	
			}
			else 
			{
				 return 'L'; 
					
			}

			break;
			case 'S':
			if (P1 ==  'R'){
							}
			else if (P1 ==  'S' )
			{
				 return 'D'; 
				 	
			}
			else 
			{
				 return 'L'; 

				 	
			}

			break;
		}

		

}