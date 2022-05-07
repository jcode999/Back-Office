#include"LinkedList.h"

class Cart
{
    private:
    LinkedList cart;
    int totalDue;
    public:
    void addToCart(Item* item);
    void removeFromCart(int upc);
    bool checkOut(); 
    void viewCart();
    Cart();
};
