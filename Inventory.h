#pragma once
#include<iostream>
#include"Item.h"
class Inventory
{
    private: 
    Item* table;
    int size;
    int P;
    public:
    Inventory(int size);
    bool insert(Item* item);
    bool deleteItem(string key);
    int hash(string key);
    void display();
    Item* getItem(int index);
    

};