/**
 * @file ShoppingCart.h
 * @Author fatih (fatihint@gmail.com)
 * @date December, 2016
 * @brief This file declares ShoppingCart class.
 
 */ 

#ifndef ONLINE_BOOKSTORE_SHOPPINGCART_H
#define ONLINE_BOOKSTORE_SHOPPINGCART_H
#pragma once
#include <list>
#include "ProductToPurchase.h"
#include "Payment.h"
#include "Customer.h"
#include "Product.h"
//! ShoppingCart class.*/
class ShoppingCart {
private:
    list<ProductToPurchase*> productToPurchase;
    Payment* payment;
    Customer* customer;
    bool isBonusUsed;
public:
//!	*  Constructor
    ShoppingCart();
//!	*  Constructor function with two parameters.
    ShoppingCart(Customer*);
//!	*  Destructor .
    ~ShoppingCart();
//!	* gets PaymentMethod property of object.
    Payment* getPaymentMethod() const;
    void setPaymentMethod(Payment*);
//!	* gets Customer property of object.
    Customer* getCustomer() const;
//!	* Sets Customer property of object to given argument.
    void setCustomer(Customer*);
//!	* Sets BonusUsed property of object to given argument.
    void setBonusUsed();
    //!	* returns isBonusUsed property of object.
    bool getBonusUsed();
//!	* New purchase push into ProductToPurchase.
    void addProduct(Product*, int);
//!	*Only your choice  product is removed in order.
    void removeProduct(Product*);
//!	*you want products given order
    void placeOrder();
//!	*you want products Order to cancel
    void cancelOrder();
//!	* Display your purchase product information.
    void printProducts();
//!	* Show the customer information on invoice.
    string showInvoice();
//!	* gets ProductCount property of object.
    int getProductCount();
//!	* returns a total amount of products in the shoping cart
    double getTotalAmount();
};


#endif //ONLINE_BOOKSTORE_SHOPPINGCART_H
