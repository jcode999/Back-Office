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
int Item::getUPC()
{
    return UPC;
}
Item::Item()
{
    UPC = 0;
    description = "";
    current_quantity = 0;
    sold_quanity = 0;
    begining_quantity = 0;
    retailPrice = 0;
    costPrice = 0;
    nextPtr = nullptr;
}
void Item::setUPC(int upc)
{
    UPC = upc;
}