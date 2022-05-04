#include"Cart.h"

Cart::Cart()
{
    totalDue = 0;
}
void Cart::addToCart(Item* item)
{
    cart.insertItem(item);
}
void Cart::removeFromCart(Item* item)
{
    cart.deleteItem(item);
}
void Cart::viewCart()
{
    cart.display();
}