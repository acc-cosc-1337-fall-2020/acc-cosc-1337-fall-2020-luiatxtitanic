//write include statement for switch header
#include "switch.h"

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise

std::string menu(char option)
{
  switch(option)
  {
    case 'a':
    return_val = "A";
    break;
    case 'b':
    return_val = "B";
    break:
    case 'c':
    return_val = "C";
    break:
   
    default;
    return_val = "invalid option";
   

  }
  return_val
}