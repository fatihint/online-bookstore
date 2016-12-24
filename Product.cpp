//
// Created by fatih on 24.12.2016.
//

#include "Product.h"

int Product::getId() const{
    return id;
}

void Product::setId(int id) {
    this->id = id;
}

string Product::getName() const{
    return name;
}

void Product::setName(string name) {
    this->name = name;
}

double Product::getPrice() const{
    return price;
}

void Product::setPrice(double price) {
    this->price = price;
}
