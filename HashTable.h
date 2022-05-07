#include"Item.h"
class HashTable
{
    private: 
    Item* table;
    int size;
    public:
    HashTable(int size);
    void insert(int key);
   // void deleteItem(Item* item);
    int hash(int key);//use mid square hash function
   // void display();

};