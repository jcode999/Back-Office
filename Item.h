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
    int retailPrice;//price we charge to costumer
    int costPrice;//price charged by venders to business
    Item* nextPtr;//used for linked list
    public:
    //gets and sets
    Item();
    Item(int upc);
    Item* getNextItem();//used for liked_list
    int getUPC();
    void setUPC(int upc);
    void setNextItem(Item* item);
};