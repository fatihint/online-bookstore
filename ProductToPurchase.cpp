/*
 * ProdouctToPurchase.cpp
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#include <iostream>
#include 'Product.h'
#include 'ProdouctToPurchase.h'

	Product* ProductToPurchase::getProduct() const{
		return *Product;
	}
	void ProductToPurchase::setProduct(Product* _Product){
		product=_Product;
	}
	int ProductToPurchase::getQuantity() const{
		return quantity;
	}
	void ProductToPurchase::setQuantity(int _quantity){
		quantity=_quantity;
	}
