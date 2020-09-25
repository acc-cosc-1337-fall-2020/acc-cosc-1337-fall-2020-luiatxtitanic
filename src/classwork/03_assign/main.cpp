#include<iostream>
#include"decision.h"
using namespace std;
using std::cout;
//Write the include statement for decisions.h here

//Write namespace using statements for cout and cin

int main() 
{
  int student_grade;
  cout << "Enter a grade between 0 and 100: ";
  cin >> student_grade;

  while (student_grade < 0 || student_grade > 100)
  {
    cout<<"Number is invalid \n";
    cout<<"Enter grade between 0 and 100: ";
    cin >> student_grade;
  }
  cout << "Your grade is: " << get_letter_grade_using_if(student_grade)<< "\n";
  cout << "your switch grade: " << get_letter_grade_using_switch(student_grade)<< "\n";
	return 0;
}

