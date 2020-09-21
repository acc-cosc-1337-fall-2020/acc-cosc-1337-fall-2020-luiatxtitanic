#include "for.h"
#include<iostream>

//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_number
void display_numbers(int num)
{
  for(int i=0; 1 < num; ++i )

  {
    i = i +1;
    std::cout<<"i is: " <<i<<"\n";
  }

}
int sum_number(int num)
{
  int sum = 0;
  for(int i=0; i <= num; ++i)
  {
sum += i + i;
  }

  return sum;
}

