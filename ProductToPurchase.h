/*
 * ProdouctToPurchase.h
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#pragma once
#ifndef ProductToPurchase_H_
#define ProductToPurchase_H_
#include <iostream>
#include "Product.h"

using namespace std;

class ProductToPurchase{
private:
	Product* product;
	int quantity;
public:
	ProductToPurchase();
	ProductToPurchase(Product*,int = 1);
	~ProductToPurchase();
	Product * getProduct() const;
	void setProduct(Product*);
	int getQuantity() const;
	void setQuantity(int _quantity);
};
#endif //ProdouctToPurchase_H_