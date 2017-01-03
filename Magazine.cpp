/*
 * Magazine.cpp
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#include "Magazine.h"

int Magazine::getIssue()const{
	return Issue;
}

void Magazine::setIssue(int){
	this->Issue=Issue;
}

string Magazine::getType()const{
	return type;
}

void Magazine::setType(string){
	this->type=type;
}

Magazine::Magazine(string name ,double price,int Issue,string type):Product(name,price) {
	this->Issue=Issue;
	this->type=type;
}
Magazine::Magazine(string name ,double price):Product(name,price){

}

Magazine::~Magazine() {

}

void Magazine::printProperties() {
	cout << "Magazine Type: " << type << endl;
	cout << "Magazine Issue: " << Issue << endl;
}

