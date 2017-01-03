/*
 * Check.cpp
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#include <queue>
#include <iomanip>
#include "Check.h"

string Check::getName() const{
	return name;
}

void Check::setName(string name){
	this->name=name;
}

string Check::getBankID() const {
	return bankID;
}

void Check::setBankID(string bankID){
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
	string _name;
	string bankId;

	cout << "Enter the Name for Check: ";
	cin.ignore();
	getline(cin,_name);
	cout << "Enter the Bank ID for Check: ";
	getline(cin,bankId);
	setName(_name);
	setBankID(bankId);
	cout << setprecision(5) << getAmount() << " TL is paid as Check in the name of '" << name << "' with '" << bankID << "' ID " << endl;
}

string Check::paymentInfo() {
	string info = to_string(getAmount()) + " TL is paid as Check. \n";
	return info;
}


