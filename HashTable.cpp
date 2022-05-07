#include"HashTable.h"
#include<iostream>
#include<iostream>
using namespace std;
HashTable::HashTable(int _size)
{
    table = new Item[_size];
    size = _size;
    delete [] table;
}
int HashTable::hash(int key)
{
    return key % size;
}
void HashTable::insert(int key)
{
    
}
