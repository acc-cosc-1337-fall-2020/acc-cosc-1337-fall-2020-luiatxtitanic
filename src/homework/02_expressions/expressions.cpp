#include <iostream>
#include "expressions.h"

//example
void variable_expressions()

{
  
  int num1 = 2, num2 = 5;
  int sum = num1 + num2;
  
  std::cout << "Sum is:" << sum << ".\n";

  int product = num1 * num2;

  std::cout << "product is:" << product << ".\n";

  int total = num1 + num1 * num2;
  std::cout << "total is:" << total << ".\n"; 
  
  total = (num1 * num2) * num2;
  std::cout << "total is: " << total << ".\n";

}

//write code for multiply_numbers function here
//function returns product of num1 and num2




