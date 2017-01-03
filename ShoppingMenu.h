//
// Created by fatih on 29.12.2016.
//

#ifndef ONLINE_BOOKSTORE_SHOPPINGMENU_H
#define ONLINE_BOOKSTORE_SHOPPINGMENU_H


#include "Menu.h"
#include "Product.h"
#include "Customer.h"
#include "ShoppingCart.h"

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
    ShoppingMenu(string title, string* subs, int size, vector<Product*> *proList, vector<Customer> *cusList) : Menu(title, subs, size){
        productList = proList;
        pList = *productList;
        customerList = cusList;
        cList = *customerList;
    }

    const vector<Product *> &getProductList() const;
    void setProductList(const vector<Product *> &productList);
    const vector<Customer> &getCustomerList() const;
    void setCustomerList(const vector<Customer> &customerList);
    ~ShoppingMenu();
    void menuSwitch(int);
};


#endif //ONLINE_BOOKSTORE_SHOPPINGMENU_H
