/*
 * CreditCard.h
 *
 *  Created on: 24 Ara 2016
 *      Author: baran
 */
#include <iostream>
#ifndef CreditCard_H_
#define CreditCard_H_
#include "Payment.h"

using namespace std;

class CreditCard: public Payment{
private:
  long number;
  string type;
  string expDate;
public:
  CreditCard(int);
  CreditCard(int ,long,string,string);
  ~CreditCard();
  long getNumber() const;
  void setNumber(int _number);
  string getType() const;
  void setType(string _type);
  string getExpDate() const;
  void setExpDate(string _expDate);
}
#endif CreditCard_H_
