/**
 * @file ShoppingCart.cpp
 * @Author fatih (fatihint@gmail.com)
 * @date December, 2016
 * @brief This file implements ShoppingCart class functions
 */ 

#include "ShoppingCart.h"
#include "Check.h"
#include "Cash.h"
#include "CreditCard.h"

ShoppingCart::ShoppingCart() {

}

ShoppingCart::~ShoppingCart() {

}

ShoppingCart::ShoppingCart(Customer* customer) {
    this->customer = customer;
    this->payment = payment;
}
/*!
 
 \return payment a Payment argument.

*/ 
Payment* ShoppingCart::getPaymentMethod() const {
    return payment;
}
/*!
 \param payment an Payment argument.
 
 
*/
void ShoppingCart::setPaymentMethod(Payment* payment) {
    this->payment = payment;
}
/*!
 
 \return customer a Customer argument.

*/ 
Customer* ShoppingCart::getCustomer() const{
    return customer;
}
/*!
 \param customer an Customer argument.
 
 
*/
void ShoppingCart::setCustomer(Customer* customer) {
    this->customer = customer;
}
/*!
 \param BonusUsed an boolean argument.
 
 
*/
void ShoppingCart::setBonusUsed() {
    isBonusUsed = true;
}
/*!
 \param p an Product argument.
 \param n an integer argument.
 
*/
void ShoppingCart::addProduct(Product* p, int n) {
    ProductToPurchase *purchase = new ProductToPurchase(p,n);
    productToPurchase.push_back(purchase);
}
/*!
 \param p an Product argument.
 
 
*/
void ShoppingCart::removeProduct(Product *p) {
    list<ProductToPurchase*>::iterator it;
    for(it=productToPurchase.begin(); it!=productToPurchase.end(); it++){
        if(p->getId() == (*it)->getProduct()->getId()){
            productToPurchase.remove(*it);
            break;
        }
    }
}

void ShoppingCart::placeOrder() {
    payment->performPayment();
    customer->sendBill();
}

void ShoppingCart::cancelOrder() {
    this->~ShoppingCart();
}

void ShoppingCart::printProducts() {
    list<ProductToPurchase*>::iterator it;
    for(it=productToPurchase.begin(); it!=productToPurchase.end(); it++){
        cout << (*it)->getProduct()->getName() << " - #" << (*it)->getQuantity() << " - " <<(*it)->getProduct()->getPrice() * (*it)->getQuantity() << " TL" << endl;
    }
}

string ShoppingCart::showInvoice() {
    return "Name: " + getCustomer()->getName() + " - Adress: " + getCustomer()->getAdress() + " - Phone: " + getCustomer()->getPhone() + " - Email: " + getCustomer()->getEmail() + " - Payment: " + payment->paymentInfo();
}
/*!
 
 \return i a integer argument.

*/ 
int ShoppingCart::getProductCount() {
    int i = 0;
    list<ProductToPurchase*>::iterator it;
    for(it=productToPurchase.begin(); it!=productToPurchase.end(); it++){
        i++;
    }
    return i;
}
/*!
 
 \return total a integer argument.

*/ 
double ShoppingCart::getTotalAmount() {
    double total = 0;
    list<ProductToPurchase*>::iterator it;
    for(it=productToPurchase.begin(); it!=productToPurchase.end(); it++){
        total += (*it)->getQuantity() * (*it)->getProduct()->getPrice();
    }
    return total;
}

bool ShoppingCart::getBonusUsed() {
    return isBonusUsed;
}

