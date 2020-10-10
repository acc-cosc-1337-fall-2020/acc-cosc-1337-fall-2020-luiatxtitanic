//write include statements
#include <iostream>
#include"dna.h"

//write using statements


/*
Write code that prompts user to enter 1 for Get GC 
Content,

or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
using std::cout; using std::cin;

int main() 
{

  int choice;  
  string dna_string; 
  char again = 'y';          //menu choice
  
  

  do{  //display the menu and get the user's choice
      std::cout<<"\n DNA MENU OPTIOINS \n\n";
      std::cout<<"1. PERCENTAGE OF G AND C CONTENT IN A DNA.\n";
      std::cout<<"2. GET THE COMPLEMENT DNA OF A DNA.\n";
      std::cin >> choice; 

  
      cout<<"Enter dna string: ";
      cin>>dna_string;
      

       //process the  users choice
       if (choice == 1)
          
          {
          cout<<"The gc content is: "<< get_gc_content(dna_string)<< "\n"; 
          }
        else if (choice == 2)
          {
            cout<<"The complement dna of a dna is: "<< get_dna_complement(dna_string) << "\n";
          }

          cout<<" If you would like to continue press y to continue. \n";
          cout<<"Or any other character to quit.\n";
          cin>>again;
  
    }while ((again == 'y') || (again == 'Y'));
      
    
  




	return 0;
}