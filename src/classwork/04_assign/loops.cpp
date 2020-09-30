#include <iostream>
#include "loops.h"

int cal_factorial(int num)
{
  int factorial = 1, count = 1;

  while (num >= count)
  {
    factorial = factorial*count;
    count++;
    
  }

  return factorial;
   
  
 
  
}