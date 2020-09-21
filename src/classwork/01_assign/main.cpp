//Write the include statement for types.h here
#include <iostream>
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
using std::cout;  using std::cin; using std::endl;

int main()

{
int num1, num2=4, result;
cout<<"This program multiplies two numbers. \n";

//Get numbers from user
cout<<"Enter a number: ";//text to display 
cin>>num1;//capture number from user
cout<<"You entered: "<< num1 << endl;



//Display product

result = multiply_numbers(num1);
cout<<"The product equals " << result << endl;

result = multiply_numbers(num2);
cout<<"The product equals " << result << endl;
return 0;
}

