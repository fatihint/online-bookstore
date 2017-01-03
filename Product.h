//
// Created by fatih on 24.12.2016.
//

#ifndef ONLINE_BOOKSTORE_PRODUCT_H
#define ONLINE_BOOKSTORE_PRODUCT_H
#include <iostream>
#pragma once
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;
    static int lastId;
public:
    Product(string,double);
    ~Product();
    int getId() const;
    void setId(int);
    string getName() const;
    void setName(string);
    double getPrice() const;
    void setPrice(double);
    static int getLastId();
    static void setLastId();
    virtual void printProperties() = 0;
};


#endif //ONLINE_BOOKSTORE_PRODUCT_H
