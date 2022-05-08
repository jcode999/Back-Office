#include"Cart.h"
#include"Manager.h"
#include"Sale.h"
#include<iostream>
using namespace std;
int main()
{
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
   makeASale(inventory);
   //addNewItem(inventory);

   //inventory.displayInventory();

   //removeItem(inventory);

   inventory.displayInventory();
  
  
  

   return 0;
   

}