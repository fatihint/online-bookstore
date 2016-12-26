/*
 * Cash.h
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#ifndef CASH_H_
#define CASH_H_
#include "Payment.h"

class Cash: public Payment {

public:
	Cash(int);
	virtual ~Cash();
};

#endif /* CASH_H_ */
