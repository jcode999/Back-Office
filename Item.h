#pragma once
#include<string>
using namespace std;
class Item 
{
    private:
    int UPC;//unique product code, two products cannot have same upc
    string description;//name
    int current_quantity;
    int begining_quantity;
    int sold_quanity;
    float retailPrice;//price we charge to costumer
    float costPrice;//price charged by venders to business
    int minimumQuantity;
    int maximumQuantity;
    Item* nextPtr;//used for linked list
    bool emptySinceStart;//used for hash table
    bool emptyAfterRemoval;//used for hash table
    public:
    //gets and sets
    Item(int upc);
    Item(int upc, string des, float cost, float retail);
    Item();
    Item* getNextItem();//used for liked_list
    int getUPC();
    void setUPC(int upc);
    void setNextItem(Item* item);
    void setDescription(string des);
    void setEmptySinceStart(bool _tf);
    void setEmptyAfterRemovel(bool _tf);
    string getDescription();
    bool getEmptySinceStart();
    bool getEmptyAfterRemovel();
    void setMinimumQuantity(int minQuantity);
    int getMinimumQuanity();
    void setCurrentQuantity(int currQuantity);
    int getCurrentQuantity();
    void setRetailPrice(float retail);
    float getRetailPrice();
    void setBeginingQuantity(int begQuantity);
    int getBeginingQuantity();
    void setCostPrice(float cost);
    float getCostPrice();
    void setSoldQuantity(int x);
    int getSoldQuantity();
    void setMaximumQuantity(int max);
    int getMaximumQuantity();


};