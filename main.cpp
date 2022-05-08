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
   item1->setRetailPrice(120.00);

   item2->setDescription("My Father Romeo Juiate");
   item2->setRetailPrice(110.00);

   item3->setDescription("Perdomo Champgne 10th Anneversary");
   item3->setRetailPrice(122.49);

  
   Inventory inventory(3);
   inventory.insert(item1);
   inventory.insert(item2);
   inventory.insert(item3);
   makeASale(inventory);
  
  
  

   return 0;
   

}