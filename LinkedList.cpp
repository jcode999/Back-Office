#include"LinkedList.h"
#include<iomanip>
#include<iostream>
LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}
bool LinkedList::insertItem(Item* item)
{
    if(searchItem(item->getUPC()))
    return false;
    if(head==nullptr){
    head = item;
    tail = item;
    return true;
    }
    else
    {
        tail->setNextItem(item);
        tail = tail->getNextItem();
    }
    return true;
}
bool LinkedList::deleteItem(int upc)
{
     
     Item* toDelete = nullptr;
     Item* currNode = head;
    if(head->getUPC()==upc)
    {   
        toDelete = head;
        head = head->getNextItem();
        return true;
    }
    while(currNode!=nullptr && currNode->getNextItem()!=nullptr)
    {
        if(currNode->getNextItem()->getUPC()==upc)
        {
           toDelete = currNode->getNextItem();
           currNode->setNextItem(toDelete->getNextItem());
           if(toDelete==tail)
           {
               tail = currNode;
           }
          // delete toDelete;
           return true;
        }
        currNode = currNode->getNextItem();
    }
    return false;
}
void LinkedList::display()
{   cout<<endl;
    cout<<"------------Your Receipt----------------------"<<endl;
    cout<<"Description"<<setw(40)<<"Price"<<endl;
     float total = 0.0;
     Item* currNode = head;//start from head
     while(currNode!=nullptr)//iteration through linked list
    {
        cout<<currNode->getDescription()<<setw(40)<<"$"<<currNode->getRetailPrice()<<endl;
        total = total + currNode->getRetailPrice();
        currNode = currNode->getNextItem();//update currnode

    }
    cout<<"Your Total is........ $"<<total<<endl;
    cout<<"---------------Thank You For Shopping With Us-------------"<<endl;
}
bool LinkedList::searchItem(int upc)
{
    Item* currNode = head;//start from head
    while(currNode!=nullptr)//iteration through linked list
    {
        if(currNode->getUPC()==upc)
        return true;

        currNode = currNode->getNextItem();//update currnode
    }
    return false;//item not found
}
void LinkedList::update()
{
    if(head==nullptr)
    return;
    Item* currNode = head;//start from head
    while(currNode!=nullptr)//iteration through linked list
    {
       currNode->setSoldQuantity(currNode->getSoldQuantity()+1);
       currNode->setCurrentQuantity(currNode->getCurrentQuantity()-1);
       currNode = currNode->getNextItem();//update currnode
       
    }
}