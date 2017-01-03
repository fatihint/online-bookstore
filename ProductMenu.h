//
// Created by fatih on 29.12.2016.
//

#ifndef ONLINE_BOOKSTORE_PRODUCTMENU_H
#define ONLINE_BOOKSTORE_PRODUCTMENU_H


#include "Menu.h"
#include "Product.h"

class ProductMenu : public Menu {
private:
    vector<Product*> * proList;
    vector<Product*> productList;
public:
    ProductMenu(string title, string* subs, int size, vector<Product*> *pList) : Menu(title, subs, size){
        proList = pList;
        productList = *proList;
    }
    const vector<Product *> &getProductList() const;
    void setProductList(const vector<Product *> &productList);
    ~ProductMenu();
    void menuSwitch(int);
};


#endif //ONLINE_BOOKSTORE_PRODUCTMENU_H
