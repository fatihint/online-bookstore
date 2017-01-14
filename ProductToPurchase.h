/**
 * @file ProductToPurchase.h
 * @Author baran (abaranozoglu@gmail.com)
 * @date December, 2016
 * @brief This file declares ProductToPurchase class. 
 
 */ 
#pragma once
#ifndef ProductToPurchase_H_
#define ProductToPurchase_H_
#include <iostream>
#include "Product.h"
//! ProductToPurchase class.
*/ 
using namespace std;

class ProductToPurchase{
private:
	Product* product;
	int quantity;
public:
//!	*  Constructor
	ProductToPurchase();
//!	*  Constructor function with two parameters.
	ProductToPurchase(Product*,int = 1);
//!	*  Destructor 
	~ProductToPurchase();
//!	* gets Product property of object.
	Product * getProduct() const;
//!	* Sets Product property of object to given argument.
	void setProduct(Product*);
//!	* gets Quantity property of object.
	int getQuantity() const;
//!	* Sets Quantity property of object to given argument.
	void setQuantity(int _quantity);
};
#endif //ProdouctToPurchase_H_
