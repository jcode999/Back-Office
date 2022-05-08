#include"Manager.h"
#include"Sale.h"
#include<iostream>
using namespace std;
int main()
{
   int who;
   bool continueLoop = true;
    //we wanted to read a file which contained all the items but could not due to time constrains
    //suppose we currently have following itesms in our store
    Item * item1 = new Item(1,"Olivia melanio",98.79,130.99);
    Item* item3 = new Item(3,"My Father Romeo Juiate",57.99,97.99);
    Item * item2 = new Item(2,"Perdomo Champgne 10th Anneversary",99.99,150.00);

   //we put these items into our inventory
   Inventory inventory(10);
   inventory.insert(item1);
   inventory.insert(item2);
   inventory.insert(item3);
   
   //for costumers
   //makeASale(inventory);
   //addNewItem(inventory);
   //inventory.displayInventory();
   //removeItem(inventory);
   while(continueLoop)
   {
   cout<<"Who are you? \n Enter 1. for Costumer \n Enter 2 for Manager \n Enter -1 to Exit"<<endl;
   cin>>who;
   switch(who)
   {
       case 1:
       {
           makeASale(inventory);
           break;
       }
       case 2:
       {
           int continueManager = true;
           while(continueManager)
           {
           int managerOption;
           cout<<"Enter 1 to view all our inventory"<<endl;
           cout<<"Enter 2 to add new items to inventory"<<endl;
           cout<<"Enter 3 to delete an Item in an Inventory"<<endl;
           cout<<"Enter 4 to enter purchase details"<<endl;
           cout<<"Enter -1 to exit out of manager option"<<endl;
           cin>>managerOption;
           switch(managerOption)
           {
               case 1:
               {
                  viewAllInventory(inventory); 
                  break;
               }
               case 2:
               {
                   addNewItem(inventory);
                   break;
               }
               case 3:
               {
                   removeItem(inventory);
                   break;
               }
               case 4:
               {
                   purchase(inventory);
                   break;
               }
               case -1:
               {
                   cout<<"Exiting form Manager Menu"<<endl;
                   continueManager = false;
                   break;
               }
            }
           }
           break;
       }
       case -1:
       {
           cout<<"Exiting Application"<<endl;
           continueLoop = false;
           break;
       }
   }
   }
 
  
  

   return 0;
   

}