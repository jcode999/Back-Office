#include"Item.h"
Item::Item(int upc)
{
   UPC = upc;
   nextPtr = nullptr;
   
}
Item* Item::getNextItem()
{
    return nextPtr;
}
void Item::setNextItem(Item* item)
{
    nextPtr = item;
}