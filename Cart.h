
#include"LinkedList.h"

class Cart
{
    private:
    LinkedList cart;
    int totalDue;
    public:
    void addToCart(Item* item);
    void removeFromCart(Item* item);
    bool checkOut(); 
    void viewCart();
    Cart();
};