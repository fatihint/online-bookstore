/*
 * @file  Magazine.cpp
 * @Author eren
 * @time 24 Ara 2016
 * @brief this file implements Magazine class functions.
 */
 //! CustomerMenu class.


#include "Magazine.h"
//! \return issue an integer argument.
int Magazine::getIssue()const{
	return Issue;
}
//! \param issue an integer argument.
void Magazine::setIssue(int){
	this->Issue=Issue;
}
//! \return type a string argument.
string Magazine::getType()const{
	return type;
}
//! \param type a string argument.
void Magazine::setType(string){
	this->type=type;
}
//! \param id an integer argument.
//! \param name a string argument.
//! \param price a double argument.
//! \param issue an integer argument.
//! \param type a string argument.
Magazine::Magazine(string name ,double price,int Issue,string type):Product(name,price) {
	this->Issue=Issue;
	this->type=type;
}
//! \param id an integer argument.
//! \param name a string argument.
//! \param price a double argument.
Magazine::Magazine(string name ,double price):Product(name,price){

}

Magazine::~Magazine() {

}

void Magazine::printProperties() {
	cout << "Magazine Type: " << type << endl;
	cout << "Magazine Issue: " << Issue << endl;
}
