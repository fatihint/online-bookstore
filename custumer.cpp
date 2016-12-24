/*
 * custumer.cpp
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#include 'custumer.h'
#include <iostream>
#include <string>
using namespace std;
void custumer::sendBill(){

}
long custumer::getCustumerID() const{
	return custumerID;
}
void custumer::setCustumerID(long _custumerID){
	custumerID=_custumerID;
}
string custumer::getName() const{
	return name;
}
void custumer::setName(string _name){
	name=_name;
}
string custumer::getAdress() const{
	return adress;
}
void custumer::setAdress(string _adress){
	adress=_adress;
}
string custumer::getPhone() const{
	return phone;
}
void custumer::setPhone(string _phone){
	phone=_phone;
}
string custumer::getEmail(){
	return phone;
}
void custumer::setEmail(string _email){
	email=_email;
}
double custumer::getBonus() const{
	return bonus;
}
void custumer::setBonus(double _bonus){
	bonus=_bonus;
}
string custumer::getUsername() const{
	return username;
}
void custumer::setUsername(string _username){
	username=_username;
}
string custumer::getPassword() const{
	return password;
}
void custumer::setPassword(string _password){
	password=_password;
}
//control the password and the username correct from custumer
bool custumer::checkAccount(string _username,string _password){
	if(username==_username&&password==_password)
		return true;
	else
		return false;
}
//bonus decrease each shopping %1 of bill
void custumer::addBonus(double _bill){
	bonus+=_bill/100;
}
void custumer::useBonus(){

}



