/**
 * @file Cash.h
 * @Author eren (karaeren042@gmail.com)
 * @date December, 2016
 * @brief This file declares Cash class.
 
 */ 
#ifndef CASH_H_
#define CASH_H_
#pragma once
#include "Payment.h"
//! Cash class.
/*!
   Cash class inherits from Payment class.
*/ 
class Cash: public Payment {

public:
//!	*  Constructor wtih one parameters.
	Cash(double);
//!	* Amount is paid as Cash.
	void performPayment();
//!	* Destructor..
	virtual ~Cash();
};

#endif /* CASH_H_ */
