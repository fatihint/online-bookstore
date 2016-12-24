/*
 * Check.cpp
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#include "Check.h"

string Check::getName() const{
	return name;
}

void Check::setName(string){
	this->name=name;
}

string Check::getBankID() const {
	return bankID;
}

void Check::setBankID(string){
	this->bankID=bankID;
}

Check::Check(string name,string bankID) {
	this->name=name;
	this->bankID=bankID;

}

Check::~Check() {

}

