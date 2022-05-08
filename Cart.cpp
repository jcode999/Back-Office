#include"Cart.h"

Cart::Cart()
{
    totalDue = 0;
}
bool Cart::addToCart(Item* item)
{
     return cart.insertItem(item);
}
void Cart::removeFromCart(int upc)
{
    cart.deleteItem(upc);
}
void Cart::viewCart()
{
    cart.display();
}
void Cart::checkOut()
{
    cart.update();
}