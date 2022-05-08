#include"Cart.h"
#include"Inventory.h"
#include"Sale.h"
#include<iostream>
using namespace std;
int main()
{
    //suppose we currently have following itesms in our store
    Item * item1 = new Item(1);
    Item* item3 = new Item(3);
    Item * item2 = new Item(2);
    //item1->setUPC(2);
   //create a cart
   item1->setDescription("Olivia melanio");
   item2->setDescription("My Father Romeo Juiate");
   item3->setDescription("Perdomo Champgne 10th Anneversary");

  
   Inventory inventory(3);
   inventory.insert(item1);
   inventory.insert(item2);
   inventory.insert(item3);
   makeASale(inventory);
   printf("here");
  
  

   return 0;
   

}