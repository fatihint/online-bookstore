/**
 * @file CredictCard.cpp
 * @Author baran (abaranozoglu@gmail.com)
 * @date December, 2016
 * @brief This file implements CredictCard class functions
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
/*!
 
 \return number	a long argument.
karaeren042
*/ 
long CreditCard::getNumber() const{
    return number;
}
/*!
 \param number an long argument.
 
*/ 
void CreditCard::setNumber(long _number){
    number=_number;
}
/*!
 
 \return type	a string argument.

*/ 
string CreditCard::getType() const{
    return type;
}
/*!
 \param type an string argument.
 
*/ 
void CreditCard::setType(string _type){
    type=_type;
}
/*!
 
 \return expDate a string argument.

*/ 
string CreditCard::getExpDate() const{
    return expDate;
}
/*!
 \param expDate an string argument.
 
*/ 
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


