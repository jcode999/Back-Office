#include"Cart.h"

Cart::Cart()
{
    totalDue = 0;
}
void Cart::addToCart(Item* item)
{
    cart.insertItem(item);
}
void Cart::removeFromCart(int upc)
{
    cart.deleteItem(upc);
}
void Cart::viewCart()
{
    cart.display();
}