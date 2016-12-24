/*
 * CreditCard.h
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#include <iostream>
#include <string>
#ifndef CreditCard_H_
#define CreditCard_H_
#include 'Payment.h'
using namespace std;

class CreditCard: public Payment{
private:
  long number;
  string type;
  string expDate;
public:
  long getNumber() const;
  void setNumber(int _number) const;
  string getType() const;
  void setType(string _type) const;
  sting getExpDate() const;
  void setExpDate(string _expDate) const;
}
#endif CreditCard_H_
