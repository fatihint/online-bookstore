/**
 * @file ShoppingMenu.h
 * @Author fatih (fatihint@gmail.com)
 * @date December, 2016
 * @brief This file declares ShoppingMenu class
 
 */ 

#ifndef ONLINE_BOOKSTORE_SHOPPINGMENU_H
#define ONLINE_BOOKSTORE_SHOPPINGMENU_H


#include "Menu.h"
#include "Product.h"
#include "Customer.h"
#include "ShoppingCart.h"
//! ShoppingMenu class.
/*!
   ShoppingMenu class inherits from Menu class.s
*/ 
class ShoppingMenu : public Menu {
private:
    vector<Product*> *productList;
    vector<Product*> pList;
    vector<Customer> *customerList;
    vector<Customer> cList;
    bool session;
    bool order;
    double totalAmount;
    double bonus;
    ShoppingCart* cart;
    Customer* c;
    string Invoice;
public:
//!	*  Constructor function with two parameters.
    ShoppingMenu(string title, string* subs, int size, vector<Product*> *proList, vector<Customer> *cusList) : Menu(title, subs, size){
        productList = proList;
        pList = *productList;
        customerList = cusList;
        cList = *customerList;
    }
//!	* gets PaymentMethod property of object.
    const vector<Product *> &getProductList() const;
//!	* Sets Customer property of object to given argument.
    void setProductList(const vector<Product *> &productList);
//!	* gets PaymentMethod property of object.
    const vector<Customer> &getCustomerList() const;
//!	* Sets Customer property of object to given argument.
    void setCustomerList(const vector<Customer> &customerList);
//!	* Destructor..
    ~ShoppingMenu();
    void menuSwitch(int);
};


#endif //ONLINE_BOOKSTORE_SHOPPINGMENU_H
