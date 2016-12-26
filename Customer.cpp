/*
 * customer.cpp
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;
Customer(){
	
}
~Customer(){
	
}
void Customer::sendBill(){

}
long Customer::getCustomerID() const{
	return customerID;
}
void Customer::setCustomerID(long _customerID){
	customerID=_customerID;
}
string Customer::getName() const{
	return name;
}
void Customer::setName(string _name){
	name=_name;
}
string Customer::getAdress() const{
	return adress;
}
void Customer::setAdress(string _adress){
	adress=_adress;
}
string Customer::getPhone() const{
	return phone;
}
void Customer::setPhone(string _phone){
	phone=_phone;
}
string Customer::getEmail() const{
	return phone;
}
void Customer::setEmail(string _email){
	email=_email;
}
double Customer::getBonus() const{
	return bonus;
}
void Customer::setBonus(double _bonus){
	bonus=_bonus;
}
string Customer::getUsername() const{
	return username;
}
void Customer::setUsername(string _username){
	username=_username;
}
string Customer::getPassword() const{
	return password;
}
void Customer::setPassword(string _password){
	password=_password;
}
//control the password and the username correct from custumer
bool Customer::checkAccount(string _username,string _password){
	if(username==_username && password==_password)
		return true;
	else
		return false;
}
//bonus decrease each shopping %1 of bill
void Customer::addBonus(double _bill){
	bonus+=_bill/100;
}
void Customer::useBonus(){

}
