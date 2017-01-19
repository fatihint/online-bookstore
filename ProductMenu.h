/**
 * @file ProductMenu.h
 * @Author fatih (fatihint@gmail.com)
 * @date December, 2016
 * @brief This file declares ProductMenu class
 
 */ 

#ifndef ONLINE_BOOKSTORE_PRODUCTMENU_H
#define ONLINE_BOOKSTORE_PRODUCTMENU_H


#include "Menu.h"
#include "Product.h"
//! ProductMenu class.
/*!
   ProductMenu class inherits from Menu class.
*/ 
class ProductMenu : public Menu {
private:
    vector<Product*> productList;
public:
//!	*  Constructor function with four parameters.
    ProductMenu(string title, string* subs, int size, vector<Product*> pList) : Menu(title, subs, size){
        productList = pList;
    }
//!	* gets ProductList property of object.
    const vector<Product *> &getProductList() const;
//!	* Sets ExpDate property of object to given argument.
    void setProductList(const vector<Product *> &productList);
//!	* Destructor.
    ~ProductMenu();
//!	*Show Items  menu by input
    void menuSwitch(int);
};


#endif //ONLINE_BOOKSTORE_PRODUCTMENU_H
