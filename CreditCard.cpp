/*
 * CreditCard.cpp
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#include <iostream>
#include "CreditCard.h"

CreditCard::CreditCard(double amount):Payment(amount){
	
}
CreditCard::CreditCard(double amount,long _number,string _type,string _expDate):Payment(amount){
	 number=_number;
	 type=_type;
	 expDate=_expDate;
}
long CreditCard::getNumber() const{
    return number;
}
void CreditCard::setNumber(long _number){
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

CreditCard::~CreditCard() {

}

void CreditCard::performPayment() {
    long number;
    string expDate;

    cout << "Enter Credit Card Number (Without Space): ";
    cin >> number;
    cout << "Enter Credit Expiry Date (Without Space) ";
    cin >> expDate;
    setNumber(number);
    setExpDate(expDate);

    cout << getAmount() << " is paid with credit card with " << getNumber() << " number" << endl;
}


