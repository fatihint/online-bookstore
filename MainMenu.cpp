//
// Created by fatih on 29.12.2016.
//

#include "MainMenu.h"

MainMenu::~MainMenu() {

}

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

const vector<Customer> &MainMenu::getCustomerList() const {
    return customerList;
}

void MainMenu::setCustomerList(const vector<Customer> &customerList) {
    this->customerList = customerList;
}

CustomerMenu *MainMenu::getCustomerMenu() const {
    return customerMenu;
}

void MainMenu::setCustomerMenu(CustomerMenu *customerMenu) {
    this->customerMenu = customerMenu;
}

ProductMenu *MainMenu::getProductMenu() const {
    return productMenu;
}

void MainMenu::setProductMenu(ProductMenu *productMenu) {
    this->productMenu = productMenu;
}

ShoppingMenu *MainMenu::getShoppingMenu() const {
    return shoppingMenu;
}

void MainMenu::setShoppingMenu(ShoppingMenu *shoppingMenu) {
    this->shoppingMenu = shoppingMenu;
}

const vector<Product *> &MainMenu::getProductList() const {
    return productList;
}

void MainMenu::setProductList(const vector<Product *> &productList) {
    MainMenu::productList = productList;
}
