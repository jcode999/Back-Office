#include"Item.h"
class LinkedList
{
   private:
   Item* head;
   Item* tail;
   public:
   void insertItem(Item* item);
   void deleteItem(Item* item);
   void display();
   LinkedList();
};