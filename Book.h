/*
 * Book.h
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
#include "Product.h"
using namespace std;

class Book:public Product{
private:
	string author;
	string publisher;
	int page;
public:
	Book(int,string,double,string,string,int);
	Book(int,string,double);
	virtual ~Book();
	void printProperties();
	string getAuthor() const;
	void setAuthor(string);
	string getPublisher() const;
	void setPublisher(string);
	int getPage() const;
	void setPage(int);
};

#endif /* BOOK_H_ */
