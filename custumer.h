/*
 * custumer.h
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#include <iostream>
#include <string>
#ifndef CUSTUMER_H_
#define CUSTUMER_H_
using namespace std;
class custumer{
private:
	long custumerID;
	string name;
	string adress;
	string phone;
	double bonus;
	string email;
	string username;
	string password;
public:
	void sendBill();
	long getCustumerID() const;
	void setCustumerID(long _custumerID);
	void getName() const;
	void setName(string _name);
	string getAdress() const;
	void setAdress(string _adress);
	string getName() const;
	void setName(string _name);
	string getPhone() const;
	void setPhone(string _phone);
	string getEmail() const;
	void setEmail(string _email);
	double getBonus() const;
	void setBonus(double _bonus);
	string getUsername() const;
	void setUsername(string _username);
	string getPassword() const;
	void setPassword(string _password);
	bool checkAccount(string _username,string _password);
	void addBonus(double _bill);
	void useBonus();
};



#endif /* CUSTUMER_H_ */
