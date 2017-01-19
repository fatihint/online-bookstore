/*
 * @file  MainMenu.h
 * @Author fatih
 * @time 29 Ara 2016
 * @brief this file declares MainMenu class.
 */
 //! MainMenu class.
#ifndef ONLINE_BOOKSTORE_MAINMENU_H
#define ONLINE_BOOKSTORE_MAINMENU_H
#include "Menu.h"
#include "CustomerMenu.h"
#include "Customer.h"
#include "ProductMenu.h"
#include "ShoppingMenu.h"
#include "Product.h"
//!MainMenu class inherits from menu class.
class MainMenu : public Menu{
private:
    vector<Customer> customerList;
    vector<Product*> productList;
    CustomerMenu* customerMenu;
    ProductMenu* productMenu;
    ShoppingMenu* shoppingMenu;
public:
    //!Constructor with six arguments.
    MainMenu(string title, string* subs, int size) : Menu(title, subs, size){}
    //!Destructor
    ~MainMenu();
    //!Gets productList.
    const vector<Product *> &getProductList() const;
    //!Gets customerList.
    const vector<Customer> &getCustomerList() const;
    //!Sets productList.
    void setProductList(const vector<Product *> &productList);
    //!Sets customerList.
    void setCustomerList(const vector<Customer> &customerList);
    //!Gets productMenu.
    ProductMenu *getProductMenu() const;
    //!Sets productMenu.
    void setProductMenu(ProductMenu *productMenu);
    //!Gets shoppingMenu.
    ShoppingMenu *getShoppingMenu() const;
    //!Sets shoppingMenu.
    void setShoppingMenu(ShoppingMenu *shoppingMenu);
    //!Gets customerMenu.
    CustomerMenu *getCustomerMenu() const;
    //!Sets customerMenu.
    void setCustomerMenu(CustomerMenu *customerMenu);
    //!Switchs to menu.
    void menuSwitch(int);
};


#endif //ONLINE_BOOKSTORE_MAINMENU_H
