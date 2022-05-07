#include"Sale.h"
#include"Cart.h"
void makeASale(Inventory inventory)
{  
    Cart cart;
   int itemNum;
   int option;
   bool continueLoop = true;
  
   cout<<"Dear Valued Costumer, Welcome Back."<<endl;
   while(continueLoop){
   cout<<"Enter 1 to display products menu"<<endl;
   cout<<"Enter 2 to add products to cart"<<endl;
   cout<<"Enter 3 to delete item from cart"<<endl;
   cout<<"Enter -1 to check out and exit"<<endl;
   cin>>option;
   switch(option)
   {
       case 1:
       {
       inventory.display();
       break;
       }
       case 2:
       {
           cout<<"Enter -1 to stop adding to cart"<<endl;
           while(1)
           {cin>>itemNum;
           if(itemNum==-1) break;
           Item * item  = inventory.getItem(itemNum);
           cart.addToCart(item);}
           break;
       }
       case 3:
       {
           cout<<"Enter the item number to remove from cart"<<endl;
           cin>>itemNum;
           Item* temp = inventory.getItem(itemNum);
           cart.removeFromCart(temp->getUPC());
           break;
       }
       case -1:
       {
           cout<<"Checking out.."<<endl;
           cart.viewCart();
           continueLoop = false;
           break;
       }
     }

   }
}