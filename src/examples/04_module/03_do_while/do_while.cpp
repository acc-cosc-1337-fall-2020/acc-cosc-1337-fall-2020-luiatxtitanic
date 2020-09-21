#include<iostream>
#include "do_while.h"
using std::cout;  using std::cin;
//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
  
  char choice;

	do
    {
    display_menu();
    cout<<"select a number \n\n";
    int menu_choice;
    cin>>menu_choice;

    int execute_menu_choice(menu_choice);

    cout<<"enter y to continue:";
    cin>>choice;

    }while(choice == 'y' || choice == 'y');
}

void display_menu()
    
    {
    cout<<"jhkjsdhjkds: \n";
    cout<<"jhkjsdhjkds: \n";
    cout<<"jhkjsdhjkds: \n";
    cout<<"jhkjsdhjkds: \n";
    cout<<"jhkjsdhjkds: \n";
    }


 int execute_menu_choice(int num)
    {
   switch (num)
      {
     case 1:
     cout<< "ksjdfjksdbfjksdfkjsdfbs";
     break;
    case 2:
     cout<< "ksjdfjksdbfjksdfkjsdfbs";
     break;          

      }
//return 0;
    {
return 0;
{