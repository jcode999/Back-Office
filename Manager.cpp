#include"Manager.h"
void viewAllInventory(Inventory inventory)
{
    inventory.displayInventory();
}
void addNewItem(Inventory &inventory)
{
    int upc;
    string description;
    float retailPrice;
    float costPrice;
    char addOption;
    bool continueLoop = true;
    
    while(continueLoop)
    {
    cout<<endl;
    cout<<"Enter the items UPC (must be greater than 0) ";
    cin>>upc;
    cin.ignore();
    cout<<"Enter the items description: "<<endl;
    getline(cin,description);
    cout<<"Enter cost price: ";
    cin>>costPrice;
    cout<<"Enter retail price: ";
    cin>>retailPrice;
    cin.ignore();
    //add this item to 
    Item foo(upc,description,costPrice,retailPrice);
    if(inventory.insert(&foo))
    cout<<"Inserted Sucessfully"<<endl;
    cout<<"Would you like to add more Items? \n Enter y for yes and n for no"<<endl;
    cin>>addOption;
    cin.ignore();
    if(addOption=='y')
    continue;
    else
    continueLoop = false;
    }
}
void removeItem(Inventory &inventory)
{
    cout<<endl;
    cin.ignore();
    string description;
    cout<<"Enter the exact description of the item you want to delete"<<endl;//hashed using description
    getline(cin,description);
    if(inventory.deleteItem(description))
    cout<<"Successfully Deleted"<<endl;
    

}
void purchase(Inventory &inventory)
{
     cin.ignore();
     string description;
     int quantityPurchased;
     char addItemOption;
     int upc;
     float costPrice;
     float retailPrice;
     cout<<"Enter the exact description of the item you purchased"<<endl;//hashed using description
     getline(cin, description);
     cout<<"Enter the Quantity Purchased"<<endl;
     cin>>quantityPurchased;
     Item* item = inventory.searchItem(description);
     if(item!=nullptr)
     {
         item->setCurrentQuantity(item->getCurrentQuantity()+quantityPurchased);
     }
     else
     {
     cout<<"Looks Like Its a New Item. Would You Like to Add this Item to Your Inventory?"<<endl;
     cout<<"Enter y for yes or n or no"<<endl;    
     cin>>addItemOption;
          if(addItemOption=='y')
          {
              cout<<"Enter UPC: ";
              cin>>upc;
              cout<<"Enter cost price: ";
              cin>>costPrice;
              cout<<"Enter retail price: ";
              cin>>retailPrice;
              Item item(upc,description,costPrice,retailPrice);
              if(inventory.insert(&item))
              cout<<item.getDescription()<<" sucessfully added to your inventory"<<endl;
              Item* itemPtr = inventory.searchItem(description);
              itemPtr->setCurrentQuantity(itemPtr->getCurrentQuantity()+quantityPurchased);
              
          }
          else
          cout<<description<<" will not be added to your inventory"<<endl;
     }
}