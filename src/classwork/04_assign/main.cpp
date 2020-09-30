//write includes statements
#include<iostream>
#include"loops.h"

//write using statements for cin and cout

using std::cin;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
  int num;
  char again;
  do 
 {
    std::cout<< "Enter a number a number ";
    std::cin>>num;
  
    while ( (num<1) || (num>10) )
    {
      std::cout<<"enters a number between 1 and 10: ";
      cin>>num;
    }
      std::cout<<"The factorial of  " << num <<" is "<< cal_factorial(num)  << std::endl;
      std::cout<<"Enter y to continue or press n to stop.: ";
      cin>>again;
  
  }while(again == 'Y' || again == 'y');
  
  
 


    return 0;
}