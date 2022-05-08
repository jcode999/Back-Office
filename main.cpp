#include"Cart.h"
#include"Inventory.h"
#include"Sale.h"
#include<iostream>
using namespace std;
int main()
{
    //suppose we currently have following itesms in our store
    Item * item1 = new Item(1,"Olivia melanio",10,19,9,98.79,130.99);
    Item* item3 = new Item(3,"My Father Romeo Juiate",12,20,8,57.99,97.99);
    Item * item2 = new Item(2,"Perdomo Champgne 10th Anneversary",11,20,9,99.99,150.00);

   //we put these items into our inventory
   Inventory inventory(3);
   inventory.insert(item1);
   inventory.insert(item2);
   inventory.insert(item3);
   
   //for costumers
   makeASale(inventory);
  
  
  

   return 0;
   

}