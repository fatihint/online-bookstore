//
// Created by fatih on 29.12.2016.
//

#include "ShoppingMenu.h"

ShoppingMenu::~ShoppingMenu() {

}

void ShoppingMenu::menuSwitch(int) {

}

const vector<Product *> &ShoppingMenu::getProductList() const {
    return productList;
}

void ShoppingMenu::setProductList(const vector<Product *> &productList) {
    ShoppingMenu::productList = productList;
}

const vector<Customer> &ShoppingMenu::getCustomerList() const {
    return customerList;
}

void ShoppingMenu::setCustomerList(const vector<Customer> &customerList) {
    ShoppingMenu::customerList = customerList;
}
