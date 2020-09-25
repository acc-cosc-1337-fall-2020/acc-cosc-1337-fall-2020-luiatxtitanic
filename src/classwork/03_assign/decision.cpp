#include <iostream>
#include "decision.h"
#include <string>
using std::string;

using std::cout; using std::cin;

// max scores
const int MIN_POSSIBLE_GRADE = 90,
                 MIN_B_GRADE = 80,
                 MIN_C_GRADE = 70,
                 MIN_D_GRADE = 60,
                 MIN_F_GRADE = 0;

const int MAX_POSSIBLE_GRADE = 100,
                  MAX_B_GRADE = 89,
                  MAX_C_GRADE = 79,
                  MAX_D_GRADE = 69,
                  MAX_F_GRADE = 59;


//DEFINE GET_LETTER_GRADE_USING_IF()
string get_letter_grade_using_if(int grade)
{
  string result;

  if(grade >= MIN_POSSIBLE_GRADE && grade <= MAX_POSSIBLE_GRADE)
  {
    return result = "A";
  }
  else if(grade >= MIN_B_GRADE && grade <= MAX_B_GRADE)
  {
  return result = "B";
  }
  else if(grade >= MIN_C_GRADE && grade <= MAX_C_GRADE)
  {
  return result = "C";
  }
  else if(grade >= MIN_D_GRADE && grade <= MAX_D_GRADE)
  {
  return result = "D";
  }
  else if(grade >= MIN_F_GRADE && grade <= MAX_F_GRADE)
  {
  return result = "F";
  }
  return result;
}

string get_letter_grade_using_switch(int grade)
{
  int quotient = grade/10;
  string result;

  switch(quotient)
  {
    case 10:
      result = "A";
      break;
    case 9:
      result = "A";
      break;
    case 8:
      result = "B";
      break;
    case 7:
      result = "C";
      break;
    case 6:
      result = "D";
      break;
    case 5:
      result = "F";
      break;    
    default: 
      return result = 'F';
      //return_val = "Invalid Grade";
      
  }
  return result;
}