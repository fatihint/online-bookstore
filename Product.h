/*
 * @file  Product.h
 * @Author fatih
 * @time 24 Ara 2016
 * @brief this file declares Product class.
 */
#ifndef ONLINE_BOOKSTORE_PRODUCT_H
#define ONLINE_BOOKSTORE_PRODUCT_H
#include <iostream>
#pragma once
using namespace std;

//!Product class.
class Product {
private:
    int id;
    string name;
    double price;
public:
    //!Constructor with three arguments.
    Product(int,string,double);
    //!Destructor
    ~Product();
    //!Gets Id.
    int getId() const;
    //!Sets Id.
    void setId(int);
    //!Gets name.
    string getName() const;
    //!Sets name.
    void setName(string);
    //!Gets price.
    double getPrice() const;
    //!Sets price.
    void setPrice(double);
    virtual void printProperties() = 0;
};


#endif //ONLINE_BOOKSTORE_PRODUCT_H
