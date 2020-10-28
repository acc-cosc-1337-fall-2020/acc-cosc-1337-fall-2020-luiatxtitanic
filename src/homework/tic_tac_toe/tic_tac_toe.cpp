#include "tic_tac_toe.h"
#include <iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;

bool TicTacToe::game_over()
{
  return check_board_full();

}
void TicTacToe::start_game(string x)
{
  player = x;
  clear_board();
}


void TicTacToe::set_next_player()
{
  if(player == "x")
  {
    player = "o";

  }
  else
  {
    player = "x";
  }
}

void TicTacToe::mark_board(int position)
{
  pegs[position -1] = player;
  set_next_player();
}

void TicTacToe::display_board() const
{
  for(size_t i = 0; (i < pegs.size()); i+=3)
  {
    cout<< pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] <<"\n";
  }
}

bool TicTacToe::check_board_full() const
{
  for (std::size_t i = 0; i < pegs.size(); i++)
  {
    if(pegs[i] == " ")
    {
      return false;
      break;
    }
  }
  return true;
}

void TicTacToe::clear_board() const
{
  for(std::size_t i = 0; i < pegs.size(); i++)
  {
    pegs[i] == " ";
  }
}

