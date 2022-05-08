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

    cout<<"Enter the items upc ";
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
}
void removeItem(Inventory &inventory)
{
    string description;
    cout<<"Enter the exact description of the item you want to delete"<<endl;//hashed using description
    getline(cin,description);
    if(inventory.deleteItem(description))
    cout<<"Successfully Deleted"<<endl;

}