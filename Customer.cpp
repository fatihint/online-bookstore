/*
 * @file  Customer.cpp
 * @Author baran
 * @time 24 Ara 2016
 * @brief this file implements Customer class functions.
 */
 //! Customer class.
#include "Customer.h"
#include <iostream>
using namespace std;

int Customer::lastId = 0;

Customer::Customer(){
	setLastId();
	customerID = getLastId();
}
Customer::~Customer(){

}
void Customer::sendBill(){
	cout << "Bill was sent to " << adress << endl;
}
//! \return customerID a long argument.
long Customer::getCustomerID() const{
	return customerID;
}
//! \param customerID a long argument.
void Customer::setCustomerID(long _customerID){
	customerID=_customerID;
}
//! \return name a string argument.
string Customer::getName() const{
	return name;
}
//! \param name a string argument.
void Customer::setName(string _name){
	name=_name;
}
//! \return adress a string argument.
string Customer::getAdress() const{
	return adress;
}
//! \param adress a string argument.
void Customer::setAdress(string _adress){
	adress=_adress;
}
//! \return phone a string argument.
string Customer::getPhone() const{
	return phone;
}
//! \param phone a string argument.
void Customer::setPhone(string _phone){
	phone=_phone;
}
//! \return email a string argument.
string Customer::getEmail() const{
	return email;
}
//! \param email a string argument.
void Customer::setEmail(string _email){
	email=_email;
}
//! \return bonus a double argument.
double Customer::getBonus() const{
	return bonus;
}
//! \param bonus a double argument.
void Customer::setBonus(double _bonus){
	bonus=_bonus;
}
//! \return username a string argument.
string Customer::getUsername() const{
	return username;
}
//! \param username a string argument.
void Customer::setUsername(string _username){
	username=_username;
}
//! \return password a string argument.
string Customer::getPassword() const{
	return password;
}
//! \param password a string argument.
void Customer::setPassword(string _password){
	password=_password;
}
//! \return boolean argument.
//! \param username a string argument.
//! \param password a string argument.
bool Customer::checkAccount(string _username,string _password){
	return(username == _username && password == _password);
}
//! \param amount a double argument.
void Customer::addBonus(double amount){
	bonus+=amount;
}
//! \param amount a double argument.
void Customer::useBonus(double amount){
	if(bonus - amount >= 0){
		bonus -= amount;
	}
	else{
		bonus = 0;
	}
}
//! \return lastId a integer argument.
int Customer::getLastId() {
	return lastId;
}
void Customer::setLastId() {
	lastId++;
}
