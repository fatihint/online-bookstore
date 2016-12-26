//
// Created by fatih on 25.12.2016.
//

#ifndef ONLINE_BOOKSTORE_SHOPPINGCART_H
#define ONLINE_BOOKSTORE_SHOPPINGCART_H
#include <list>
#include "ProductToPurchase.h"
#include "Payment.h"
#include "Customer.h"
#include "Product.h"

class ShoppingCart {
private:
    list<ProductToPurchase*> productToPurchase;
    Payment* payment;
    Customer* customer;
    bool isBonusUsed;
public:
    ShoppingCart();
    ShoppingCart(Customer*, Payment*, list<ProductToPurchase*>);
    ~ShoppingCart();
    Payment* getPaymentMethod() const;
    void setPaymentMethod(Payment*);
    Customer* getCustomer() const;
    void setCustomer(Customer*);
    void setBonusUsed();
    void addProduct(Product*);
    void removeProduct(Product*);
    void placeOrder();
    void cancelOrder();
    void printProducts();
    void showInvoice();
};


#endif //ONLINE_BOOKSTORE_SHOPPINGCART_H
