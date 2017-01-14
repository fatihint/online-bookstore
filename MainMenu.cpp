/*
 * @file  MainMenu.cpp
 * @Author fatih
 * @time 29 Ara 2016
 * @brief this file implements MainMenu class functions.
 */
 //! MainMenu class.
#include "MainMenu.h"
//! \param title a string argument.
//! \param subs a string argument.
//! \param size an integer argument.
MainMenu::MainMenu(string title, string* subs, int size) : Menu(title, subs, size){

}
MainMenu::~MainMenu() {

}
//! \param menuInput an integer argument.
void MainMenu::menuSwitch(int menuInput) {
    switch (menuInput){
        case 1:
            customerMenu->show();
            this->show();
            break;
        case 2:
            productMenu->show();
            this->show();
            break;
        case 3:
            shoppingMenu->show();
            this->show();
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Please choose a valid option (1-4)..." << endl;
            this->show();
            break;
    }
}
//! \return customerList a customer argument.
const vector<Customer> &MainMenu::getCustomerList() const {
    return customerList;
}
//! \param customerList a customer argument.
void MainMenu::setCustomerList(const vector<Customer> &customerList) {
    this->customerList = customerList;
}
//! \return customerMenu a CustomerMenu argument.
CustomerMenu *MainMenu::getCustomerMenu() const {
    return customerMenu;
}
//! \param customerMenu a CustomerMenu argument.
void MainMenu::setCustomerMenu(CustomerMenu *customerMenu) {
    this->customerMenu = customerMenu;
}
//! \return productMenu a ProductMenu argument.
ProductMenu *MainMenu::getProductMenu() const {
    return productMenu;
}
//! \param productMenu a ProductMenu argument.
void MainMenu::setProductMenu(ProductMenu *productMenu) {
    this->productMenu = productMenu;
}
//! \return shoppingMenu a ShoppingMenu argument.
ShoppingMenu *MainMenu::getShoppingMenu() const {
    return shoppingMenu;
}
//! \param shoppingMenu a ShoppingMenu argument.
void MainMenu::setShoppingMenu(ShoppingMenu *shoppingMenu) {
    this->shoppingMenu = shoppingMenu;
}
//! \return productList a Product argument.
const vector<Product *> &MainMenu::getProductList() const {
    return productList;
}
//! \param productList a Product argument.
void MainMenu::setProductList(const vector<Product *> &productList) {
    MainMenu::productList = productList;
}
