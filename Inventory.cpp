#include"Inventory.h"
#include<fstream>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
Inventory::Inventory(int _size)
{
    table = new Item[_size];
    size = _size;
    P =  16908799;
}
int Inventory::hash(string key)
{
    int hashVal = 0;
        for (int i = 0; i < key.length(); i++)
        {
            hashVal = (127 * hashVal + key[i]) % P;
        }
        return hashVal % size;

}
bool Inventory::insert(Item* item)
{    //cout<<"inserting "<<item->getDescription()<<endl;
     int bucket = hash(item->getDescription());
    // cout<<"bucket: "<<bucket<<endl;
         if((table+bucket)->getDescription()==item->getDescription())
         return false;
        
        int bucketsProved = 0;
        while (bucketsProved < size)
        {    
            if ((table + bucket)->getEmptySinceStart() || (table + bucket)->getEmptyAfterRemovel())
            {
                (table + bucket)->setDescription(item->getDescription());
                (table + bucket)->setUPC(item->getUPC());
                (table + bucket)->setCostPrice(item->getCostPrice());
                (table + bucket)->setRetailPrice(item->getRetailPrice());
                (table + bucket)->setCurrentQuantity(item->getCurrentQuantity());
                (table + bucket)->setBeginingQuantity(item->getBeginingQuantity());
                (table + bucket)->setSoldQuantity(item->getSoldQuantity());
                (table + bucket)->setEmptySinceStart(false);
                return true;
            }
            bucket = (bucket + 1) % size;
            ++bucketsProved;
        }
        
        return false;
    }
bool Inventory::deleteItem(string key)
{
    int bucket = hash(key);

        int bucketsProved = 0;
        while (bucketsProved < size && !(table + bucket)->getEmptySinceStart())
        {

            if ((table + bucket)->getDescription() == key)
            {
                (table + bucket)->setEmptyAfterRemovel(true);
                (table + bucket)->setDescription("");
                (table + bucket)->setUPC(-1);
                return true;
            }
            bucket = (bucket + 1) % size;
            ++bucketsProved;
        }
        return false;
}
void Inventory::displayMenu()
{
    cout << "---------Menu--------" << endl;
        for (int x = 0; x < size; x++)
        {
            cout << x <<" "<< (table + x)->getDescription()<<"  "<<(table + x)->getRetailPrice() << endl;
        }
}
void Inventory::displayInventory()
{
    cout << "---------Inventory--------" << endl;
        for (int x = 0; x < size; x++)
        {
            cout << x <<" "<<(table + x)->getUPC()<< (table + x)->getDescription()<<"  "<<(table + x)->getRetailPrice() << endl;
        }
}

Item* Inventory::getItem(int index)
{
    return table + index;
}


