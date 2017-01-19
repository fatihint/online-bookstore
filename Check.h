/**
 * @file Check.h
 * @Author eren (karaeren042@gmail.com)
 * @date December, 2016
 * @brief This file declares Check class
 
 */ 
#ifndef CHECK_H_
#define CHECK_H_
#pragma once
#include <iostream>
#include "Payment.h"
//! Check class.
/*!
   Check class inherits from Payment class.
*/ 
using namespace std;
class Check: public Payment{
private:
	string name;
	string bankID;
public:
//!	*  Constructor function with three parameters.
	Check(double,string,string);
//!	* Constructor function with only Payment parameters.
	Check(double);
//!	* Destructor 
	virtual ~Check();
//!	* gets Name property of object.
	string getName() const;
//!	* Sets Name property of object to given argument.
	void setName(string);
//!	* gets BankID property of object.
	string getBankID() const;
//!	* Sets BankID property of object to given argument.
	void setBankID(string);
//!	* amount is paid as Check.
	void performPayment();

};

#endif /* CHECK_H_ */
