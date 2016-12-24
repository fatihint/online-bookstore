/*
 * Magazine.h
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#ifndef MAGAZINE_H_
#define MAGAZINE_H_

#include<iostream>
using namespace std;
class Magazine:public Product {
private:
	int Issue;
	string type;
public:
	Magazine();
	virtual ~Magazine();
	void printProperties();
	int getIssue()const;
	void setIssue(int);
	string getType()const;
	void setType(string);
};

#endif /* MAGAZINE_H_ */
