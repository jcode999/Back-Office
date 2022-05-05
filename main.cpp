#include"Cart.h"
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
   Cart cart;
   cart.addToCart(item1);
   cart.addToCart(item2);
   cart.addToCart(item3);
   cart.viewCart();
   cart.removeFromCart(item3);
   cart.viewCart();

   delete item2;
   delete item1;
   return 0;
   

}