#include"Item.h"
class LinkedList
{
   private:
   Item* head;
   Item* tail;
   public:
   void insertItem(Item* item);
   bool deleteItem(int item);
   void display();
   //Item* getItem(int key);
   LinkedList();
};