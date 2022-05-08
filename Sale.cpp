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
   cout<<endl;
   cout<<"Enter 1 to display products menu"<<endl;
   cout<<"Enter 2 to add products to cart"<<endl;
   cout<<"Enter 3 to delete item from cart"<<endl;
   cout<<"Enter 4 to view your cart"<<endl;
   cout<<"Enter -1 to check out and Exit"<<endl;
   cin>>option;
   
   switch(option)
   {
       case 1:
       {
       inventory.displayMenu();
       break;
       }
       case 2:
       {
           
           while(1)
           {
                cout<<"Enter the item number OR -1 to stop entering item: ";
                cin>>itemNum;
                if(itemNum==-1) break;
                Item * item  = inventory.getItem(itemNum);
                if(item->getUPC()!=0){//all upc will be greater than 1
                if(cart.addToCart(item))
                {
                  cout<<item->getDescription()<<" added to your cart"<<endl;
                }
                }
          
           }
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
       case 4:
       {
           cout<<"Current Items In Your Cart"<<endl;
           cart.viewCart();
           break;
       }
       case -1:
       {
           cout<<"Checking out.."<<endl;
           cart.viewCart();
           cart.checkOut();
           continueLoop = false;
           break;
       }
     }

   }
}