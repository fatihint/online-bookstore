/**
 * @file Check.cpp
 * @Author eren (karaeren042@gmail.com)
 * @date December, 2016
 * @brief This file implements Check class functions
 */ 
#include <queue>
#include "Check.h"
/*!
 
 \return Name	a string argument.

*/ 

string Check::getName() const{
	return name;
}
/*!
 \param Name an string argument.
 
*/ 
void Check::setName(string){
	this->name=name;
}
/*!
 
 \return BankID	a string argument.

*/ 
string Check::getBankID() const {
	return bankID;
}
/*!
 \param BankID an string argument.
 
*/ 
void Check::setBankID(string){
	this->bankID=bankID;
}

Check::Check(double amount,string name,string bankID):Payment(amount){
	this->name=name;
	this->bankID=bankID;

}
Check::~Check() {

}

Check::Check(double amount) : Payment(amount){

}

void Check::performPayment() {
 cout << getAmount() << "is paid as Check." << endl;
}

string Check::paymentInfo() {
	string info = to_string(getAmount()) + " TL is paid as Credit Card. \n";
	return info;
}


