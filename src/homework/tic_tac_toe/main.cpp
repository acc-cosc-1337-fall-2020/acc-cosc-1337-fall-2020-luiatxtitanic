#include<iostream>
#include<string>
#include "tic_tac_toe.h"

int main() 
{
	TicTacToe game;

	std::string player;
	std::cout<<"Enter X or 0: ";
	std::cin>>player;

	do
	{
		int position;
		std::cout<<"Enter position 1 to 9: ";
		std::cin>>position;
		game.mark_board(position);
		game.display_board();

	}while(game.game_over() == false);

	return 0;
}