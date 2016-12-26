//
// Created by fatih on 25.12.2016.
//

#include "ShoppingCart.h"


ShoppingCart::ShoppingCart() {

}

ShoppingCart::~ShoppingCart() {

}

ShoppingCart::ShoppingCart(Customer* customer, Payment* payment, list <ProductToPurchase*> productToPurchase) {
    this->customer = customer;
    this->payment = payment;
    this->productToPurchase = productToPurchase;
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

void ShoppingCart::addProduct(Product* p) {
    ProductToPurchase *purchase = new ProductToPurchase(p,1);
    productToPurchase.push_back(purchase);
}

void ShoppingCart::removeProduct(Product *p) {
}

void ShoppingCart::placeOrder() {

}

void ShoppingCart::cancelOrder() {

}

void ShoppingCart::printProducts() {

}

void ShoppingCart::showInvoice() {
    // invoice message.
}
