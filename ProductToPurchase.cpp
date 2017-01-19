/**
 * @file ProductToPurchase.cpp
 * @Author baran (abaranozoglu@gmail.com)
 * @date December, 2016
 * @brief This file implements ProductToPurchase class functions
 */ 
#include "ProductToPurchase.h"
ProductToPurchase::ProductToPurchase(){
	
}
 
ProductToPurchase::ProductToPurchase(Product* _product, int _quantity){
	quantity=_quantity;
	product=_product;
}
ProductToPurchase::~ProductToPurchase(){
	
}
Product* ProductToPurchase::getProduct() const{
	return product;
}
/*!
 \param product an Product argument.
 
 
*/
void ProductToPurchase::setProduct(Product* _Product){
	product = _Product;
}
/*!
 
 \return quantity a integer argument.

*/ 
int ProductToPurchase::getQuantity() const{
	return quantity;
}
/*!
 \param quantity an integer argument.
 
*/
void ProductToPurchase::setQuantity(int _quantity){
	quantity=_quantity;
}
