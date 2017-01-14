/*
 * @file  Customer.h
 * @Author baran
 * @time 24 Ara 2016
 * @brief this file declares Customer class.
 */
#include <iostream>
#include <string>
#pragma once
#ifndef CUSTOMER_H_
#define CUSTOMER_H_
using namespace std;
//! Customer class.
class Customer{
private:
	long customerID;
	string name;
	string adress;
	string phone;
	double bonus;
	string email;
	string username;
	string password;
	static int lastId;
public:
	//!Constructor.
	Customer();
	//!Destructor.
	~Customer();
	//!Sends bill to adress of the customer.
	void sendBill();
	//!Gets customerID.
	long getCustomerID() const;
	//!Sets customerID.
	void setCustomerID(long _customerID);
	//!Gets name.
	string getName() const;
	//!Sets name.
	void setName(string _name);
	//!Gets adress.
	string getAdress() const;
	//!Sets adress.
	void setAdress(string _adress);
	//!Gets phone.
	string getPhone() const;
	//!Sets phone.
	void setPhone(string _phone);
	//!Gets email.
	string getEmail() const;
	//!Sets email.
	void setEmail(string _email);
	//!Gets bonus.
	double getBonus() const;
	//!Sets bonus.
	void setBonus(double _bonus);
	//!Gets username.
	string getUsername() const;
	//!Sets username.
	void setUsername(string _username);
	//!Gets password.
	string getPassword() const;
	//!Sets password.
	void setPassword(string _password);
	//!Controls input and data, equal or not equal.
	bool checkAccount(string _username,string _password);
	//!Adds bill.
	void addBonus(double _bill);
	//!Uses bonus.
	void useBonus();
	//!Gets lastId.
	static int getLastId();
	//!Increase lastId.
	static void setLastId();
};



#endif /* CUSTOMER_H_ */
