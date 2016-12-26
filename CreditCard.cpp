/*
 * CreditCard.cpp
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#include <iostream>
#include <string>
#include 'Payment.h'
#include 'CreditCard.h'
CreditCard(int amount):Payment(amount){
	
}
CreditCard(int amount,long _number,string _type,string _expDate):Payment(amount){
	 number=_number;
	 type=_type;
	 expDate=_expDate;
}
~CreditCard(){
	 
}
long CreditCard::getNumber() const{
  return number;
}
void CreditCard::setNumber(int _number){
  number=_number;
}
string CreditCard::getType() const{
  return type;
}
void CreditCard::setType(string _type){
  type=_type;
}
string CreditCard::getExpDate() const{
  return expDate;
}
void CreditCard::setExpDate(string _expDate){
  expDate=_expDate;
}
