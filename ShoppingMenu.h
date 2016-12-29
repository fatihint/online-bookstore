//
// Created by fatih on 29.12.2016.
//

#ifndef ONLINE_BOOKSTORE_SHOPPINGMENU_H
#define ONLINE_BOOKSTORE_SHOPPINGMENU_H


#include "Menu.h"
#include "Product.h"
#include "Customer.h"

class ShoppingMenu : public Menu {
private:
    vector<Product*> productList;
    vector<Customer> customerList; ;
public:
    ShoppingMenu(string title, string* subs, int size, vector<Product*> pList, vector<Customer> cList) : Menu(title, subs, size){
        productList = pList;
        customerList = cList;
    }

    const vector<Product *> &getProductList() const;
    void setProductList(const vector<Product *> &productList);
    const vector<Customer> &getCustomerList() const;
    void setCustomerList(const vector<Customer> &customerList);
    ~ShoppingMenu();
    void menuSwitch(int);
};


#endif //ONLINE_BOOKSTORE_SHOPPINGMENU_H
