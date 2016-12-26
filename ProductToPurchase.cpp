/*
 * ProdouctToPurchase.cpp
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */

#include "ProductToPurchase.h"
ProductToPurchase::ProductToPurchase(){
	
}
ProductToPurchase::ProductToPurchase(Product* _product,int _quantity=1){
	quantity=_quantity;
	product=_product;
}
ProductToPurchase::~ProductToPurchase(){
	
}
Product* ProductToPurchase::getProduct() const{
	return product;
}
void ProductToPurchase::setProduct(Product* _Product){
	product = _Product;
}
int ProductToPurchase::getQuantity() const{
	return quantity;
}
void ProductToPurchase::setQuantity(int _quantity){
	quantity=_quantity;
}
