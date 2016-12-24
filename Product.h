//
// Created by fatih on 24.12.2016.
//

#ifndef ONLINE_BOOKSTORE_PRODUCT_H
#define ONLINE_BOOKSTORE_PRODUCT_H
#include <iostream>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;
public:
    Product(int,string,double);
    ~Product();
    int getId() const;
    void setId(int);
    string getName() const;
    void setName(string);
    double getPrice() const;
    void setPrice(double);
    virtual void printProperties() const = 0;
};


#endif //ONLINE_BOOKSTORE_PRODUCT_H
