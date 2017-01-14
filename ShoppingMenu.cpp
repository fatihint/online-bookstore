/**
 * @file ShoppingMenu.cpp
 * @Author fatih (fatihint@gmail.com)
 * @date December, 2016
 * @brief This file implements ShoppingMenu class functions
 */ 
#include "ShoppingMenu.h"

ShoppingMenu::~ShoppingMenu() {

}
/*!
 \param menuSwitch an integer argument.
 
 
*/
void ShoppingMenu::menuSwitch(int) {

}
/*!
 
 \return productList a Product argument.

*/
const vector<Product *> &ShoppingMenu::getProductList() const {
    return productList;
}
/*!
 \param productList an Product argument.
 
 
*/
void ShoppingMenu::setProductList(const vector<Product *> &productList) {
    ShoppingMenu::productList = productList;
}
/*!
 
 \return customerList a Customer argument.

*/ 
const vector<Customer> &ShoppingMenu::getCustomerList() const {
    return customerList;
}
/*!
 \param customerList an Customer argument.
 
 
*/
void ShoppingMenu::setCustomerList(const vector<Customer> &customerList) {
    ShoppingMenu::customerList = customerList;
}
