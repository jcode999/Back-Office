#include"LinkedList.h"
#include<iostream>
LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}
void LinkedList::insertItem(Item* item)
{
    if(head==nullptr){
    head = item;
    tail = item;
    }
    else
    {
        tail->setNextItem(item);
        tail = tail->getNextItem();
    }
}
bool LinkedList::deleteItem(int upc)
{
    cout<<"Deleting item with upc "<<upc<<endl;
     Item* toDelete = nullptr;
     Item* currNode = head;
    if(head->getUPC()==upc)
    {   cout<<"head item"<<endl;
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
{    int total = 0;
     Item* currNode = head;//start from head
    while(currNode!=nullptr)//iteration through linked list
    {
        cout<<currNode->getDescription()<<"      "<<currNode->getCostPrice()<<endl;
        total = total + currNode->getCostPrice();
        currNode = currNode->getNextItem();//update currnode

    }
    cout<<"Your Total is "<<total<<endl;
}