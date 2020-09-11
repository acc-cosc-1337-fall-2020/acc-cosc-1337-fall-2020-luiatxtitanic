//Write the include statement for types.h here
#include <iostream>
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
using std::cout;  using std::cin; using std::endl;

int main()

{
int num1, num2, result;
cout<<"This program multiplies two numbers. \n";

//Get numbers from user
cout<<"Enter a number: ";//text to display 
cin>>num1;//capture number from user
cout<<"You entered: "<< num1 << endl;

cout<<"Enter a second number to multiply: ";
cin>>num2;
cout<<"You entered: " << num2 << endl;
//Display product

result = num1 * num2;
cout<<"The product equals " << result << endl;
return 0;
}

