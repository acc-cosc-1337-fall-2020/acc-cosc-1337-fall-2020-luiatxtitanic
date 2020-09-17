#include <iostream>
#include "while.h"
using std::cin; using std::cout;
int main() 
{
  int number;
  char choice = 'y';

  while(choice == 'y')
  {
    cout<<"enter a number: ";
    cin>>number;

    int sum = sum_of_squares(number);
    cout <<"sum is: " <<sum<<"\n";

    cout << " enter y to continue: ";
    cin>>choice;

  }

	return 0;
}