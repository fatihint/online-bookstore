/*
 * @file  Product.cpp
 * @Author fatih
 * @time 24 Ara 2016
 * @brief this file implements Product class functions.
 */
 //! product class.
#include "Product.h"

int Product::lastId = 0;
//! \return id an integer argument.
int Product::getId() const{
    return id;
}
//! \param id an integer argument.
void Product::setId(int id) {
    this->id = id;
}
//! \return name a string argument.
string Product::getName() const{
    return name;
}
//! \param name a string argument.
void Product::setName(string name) {
    this->name = name;
}
//! \return price a double argument.
double Product::getPrice() const{
    return price;
}
//! \param price a double argument.
void Product::setPrice(double price) {
    this->price = price;
}
//! \param id an integer argument.
//! \param name a string argument.
//! \param price a double argument.
Product::Product(string name, double price) {
    this->id = id;
    this->name = name;
    this->price = price;
    setLastId();
    this->id = getLastId();
}

int Product::getLastId() {
    return lastId;
}

void Product::setLastId() {
    lastId++;
}

Product::~Product() {

}
