#include"Item.h"
class LinkedList
{
   private:
   Item* head;
   Item* tail;
   public:
   bool insertItem(Item* item);
   bool deleteItem(int itemNum);
   void display();
   bool searchItem(int itemNum);
   void update();
   LinkedList();
};