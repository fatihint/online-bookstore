 /*
  * @file  Magazine.h
  * @Author eren
  * @time 24 Ara 2016
  * @brief this file declares Magazine class.
  */

	//! CustomerMenu class.
#ifndef MAGAZINE_H_
#define MAGAZINE_H_
#include<iostream>
#include "Product.h"
#pragma once

using namespace std;
//!Magazine class inherits from product class.
class Magazine:public Product {
private:
	int Issue;
	string type;
public:
	//!Constructor with five arguments.
	Magazine(string,double,int,string);
	//!Constructor with three arguments.
	Magazine(string,double);
	//!Destructor.
	virtual ~Magazine();
	//!Prints the properties.
	void printProperties();
	//!Gets issue.return issue
	int getIssue()const;
	//!Sets issueParameter.
	void setIssue(int);
	//!Gets type.
	string getType()const;
	//!Sets type.
	void setType(string);
};

#endif /* MAGAZINE_H_ */
