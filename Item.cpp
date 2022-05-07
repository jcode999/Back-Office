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
    emptySinceStart = true;
    emptyAfterRemoval = false;
}
void Item::setUPC(int upc)
{
    UPC = upc;
}
void Item::setDescription(string des)
{
    description = des;
}
string Item::getDescription()
{
    return description;
}
void Item::setEmptySinceStart(bool _tf)
{
    emptySinceStart = _tf;
}
void Item::setEmptyAfterRemovel(bool _tf)
{
    emptyAfterRemoval = _tf;
}
bool Item::getEmptySinceStart()
{
    return emptySinceStart;
}
bool Item::getEmptyAfterRemovel()
{
    return emptyAfterRemoval;
}
void Item::setBeginingQuantity(int begQuantity)
{
    begining_quantity = begQuantity;
}
int Item::getBeginingQuantity()
{
    return begining_quantity;
}
void Item::setCostPrice(float cost)
{
    costPrice = cost;
}
float Item::getCostPrice()
{
    return costPrice;
}
void Item::setRetailPrice(float retail)
{
    retailPrice = retail;
}
float Item::getRetailPrice()
{
    return retailPrice;
}
void Item::setCurrentQuantity(int currQuantity)
{
    current_quantity = currQuantity;
}
int Item::getCurrentQuantity()
{
    return current_quantity;
}
void Item::setMinimumQuantity(int min)
{
    minimumQuantity = min;
}
int Item::getMinimumQuanity()
{
    return minimumQuantity;
}
void Item::setMaximumQuantity(int max)
{
    maximumQuantity = max;
}
int Item::getMaximumQuantity()
{
    return maximumQuantity;
}