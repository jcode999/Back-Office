#include"LinkedList.h"

class Cart
{
    private:
    LinkedList cart;
    int totalDue;
    public:
    bool addToCart(Item* item);
    void removeFromCart(int upc);
    void checkOut(); 
    void viewCart();
    Cart();
};
