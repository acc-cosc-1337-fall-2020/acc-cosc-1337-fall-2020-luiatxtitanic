#include<iostream>
#include "do_while.h"
using std::cout; using std::cin;
//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
  
  char choice;

	do
    {
    display_menu();
    std::cout<<"select a number \n\n";
    int menu_choice;
    std::cin>>menu_choice;

execute_menu_choice(menu_choice);

 
    }while(choice == 'y' || choice == 'y');
}

void display_menu()
    
    {
    std::cout<<"jhkjsdhjkds: \n";
    std::cout<<"jhkjsdhjkds: \n";
    std::cout<<"jhkjsdhjkds: \n";
    std::cout<<"jhkjsdhjkds: \n";
    std::cout<<"jhkjsdhjkds: \n";
    }


 int execute_menu_choice(int num)
    {
   switch (num)
    {  
     case 1:
     std::cout<< "ksjdfjksdbfjksdfkjsdfbs";
     break;
     case 2:
     std::cout<< "ksjdfjksdbfjksdfkjsdfbs";
     break;          

    }
    }