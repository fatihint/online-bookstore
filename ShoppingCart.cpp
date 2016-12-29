//
// Created by fatih on 25.12.2016.
//

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

Payment* ShoppingCart::getPaymentMethod() const {
    return payment;
}

void ShoppingCart::setPaymentMethod(Payment* payment) {
    this->payment = payment;
}

Customer* ShoppingCart::getCustomer() const{
    return customer;
}

void ShoppingCart::setCustomer(Customer* customer) {
    this->customer = customer;
}

void ShoppingCart::setBonusUsed() {
    isBonusUsed = true;
}

void ShoppingCart::addProduct(Product* p, int n) {
    ProductToPurchase *purchase = new ProductToPurchase(p,n);
    productToPurchase.push_back(purchase);
}

void ShoppingCart::removeProduct(Product *p) {
    if(productToPurchase.size() == 0){
        cout << "Shopping Cart is empty !" << endl;
    }
    else{
        list<ProductToPurchase*>::iterator it;
        for(it=productToPurchase.begin(); it!=productToPurchase.end(); it++){
            if(p->getId() == (*it)->getProduct()->getId()){
                productToPurchase.remove(*it);
                break;
            }
        }
    }
}

void ShoppingCart::placeOrder() {
    if(payment != NULL){
        payment->performPayment();
    }
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

void ShoppingCart::showInvoice() {
    cout << "Invoice " << endl;
    cout << "Name: " << getCustomer()->getName();
    cout << "Adress: " << getCustomer()->getAdress();
    cout << "Phone: " << getCustomer()->getPhone();
    cout << "Email: " << getCustomer()->getEmail();
    cout << "Payment: ";
    payment->performPayment();
}

int ShoppingCart::getProductCount() {
    int i = 0;
    list<ProductToPurchase*>::iterator it;
    for(it=productToPurchase.begin(); it!=productToPurchase.end(); it++){
        i++;
    }
    return i;
}

int ShoppingCart::getTotalAmount() {
    double total = 0;
    list<ProductToPurchase*>::iterator it;
    for(it=productToPurchase.begin(); it!=productToPurchase.end(); it++){
        total += (*it)->getQuantity() * (*it)->getProduct()->getPrice();
    }
    return total;
}

