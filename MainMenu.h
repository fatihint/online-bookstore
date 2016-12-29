//
// Created by fatih on 29.12.2016.
//

#ifndef ONLINE_BOOKSTORE_MAINMENU_H
#define ONLINE_BOOKSTORE_MAINMENU_H
#include "Menu.h"
#include "CustomerMenu.h"
#include "Customer.h"
#include "ProductMenu.h"
#include "ShoppingMenu.h"
#include "Product.h"

class MainMenu : public Menu{
private:
    vector<Customer> customerList;
    vector<Product*> productList;
    CustomerMenu* customerMenu;
    ProductMenu* productMenu;
    ShoppingMenu* shoppingMenu;
public:
    MainMenu(string title, string* subs, int size) : Menu(title, subs, size){

    }
    ~MainMenu();
    const vector<Product *> &getProductList() const;
    const vector<Customer> &getCustomerList() const;
    void setProductList(const vector<Product *> &productList);
    void setCustomerList(const vector<Customer> &customerList);
    ProductMenu *getProductMenu() const;
    void setProductMenu(ProductMenu *productMenu);
    ShoppingMenu *getShoppingMenu() const;
    void setShoppingMenu(ShoppingMenu *shoppingMenu);
    CustomerMenu *getCustomerMenu() const;
    void setCustomerMenu(CustomerMenu *customerMenu);
    void menuSwitch(int);
};


#endif //ONLINE_BOOKSTORE_MAINMENU_H
