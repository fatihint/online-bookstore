/**
 * @file CreditCard.h
 * @Author baran (abaranozoglu@gmail.com)
 * @date December, 2016
 * @brief This file declares CreditCard class. 
 
 */ 
#include <iostream>
#ifndef CreditCard_H_
#define CreditCard_H_
#pragma once
#include "Payment.h"

using namespace std;

//! CreditCard class.
/*!
   CreditCard class inherits from Payment class.
*/ 
class CreditCard: public Payment{
private:
  long number;
  string type;
  string expDate;
public:
//!	*  Constructor function with only Payment parameters.
  CreditCard(double);
//!	* Constructor function with four parameters.
  CreditCard(double ,long,string,string);
//!	* Destructor
  ~CreditCard();
//!	* gets Number property of object.
  long getNumber() const;
//!	* Sets Name property of object to given argument.
  void setNumber(long _number);
//!	* gets Type property of object.
  string getType() const;
//!	* Sets Type property of object to given argument.
  void setType(string _type);
//!	* gets ExpDate property of object.
  string getExpDate() const;
//!	* Sets ExpDate property of object to given argument.
  void setExpDate(string _expDate);
//!	* Amount is paid with credit card with number.
  void performPayment();
};
#endif //CreditCard_H_
