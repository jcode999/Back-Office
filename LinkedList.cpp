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
void LinkedList::deleteItem(Item* item)
{
    if(head==nullptr)
    return;
    Item* toDelete = nullptr;
    Item* foo = head;//temporary var
    if(item->getUPC()==head->getUPC())
    {
        
        head = head->getNextItem();
        delete foo;
    }
    else
    {
     while(foo!=nullptr && foo->getNextItem()!=nullptr)
    {
        if(foo->getNextItem()->getUPC()==item->getUPC())
        {
           toDelete = foo->getNextItem();
           foo->setNextItem(toDelete->getNextItem());
           if(toDelete==tail)
           {
               tail = foo;
           }
           delete toDelete;
         
        }
        foo = foo->getNextItem();
    }
    }
}
void LinkedList::display()
{
     Item* currNode = head;//start from head
    while(currNode!=nullptr)//iteration through linked list
    {
        cout<<"("<<currNode->getUPC()<<endl;
        currNode = currNode->getNextItem();//update currnode
    }
}