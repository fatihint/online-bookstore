/*
 * Magazine.h
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#ifndef MAGAZINE_H_
#define MAGAZINE_H_
#include<iostream>
#include "Product.h"
#pragma once

using namespace std;
class Magazine:public Product {
private:
	int Issue;
	string type;
public:
	Magazine(string,double,int,string);
	Magazine(string,double);
	virtual ~Magazine();
	void printProperties();
	int getIssue()const;
	void setIssue(int);
	string getType()const;
	void setType(string);
};

#endif /* MAGAZINE_H_ */
