
/**
 * @file Book.h
 * @Author eren (karaeren042@gmail.com)
 * @date December, 2016
 * @brief This file declares Book class
 
 */ 

#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
#include "Product.h"
#pragma once
using namespace std;

//! Book class.
/*!
   Book class inherits from Product class.
*/ 
class Book:public Product{
private:
	string author;
	string publisher;
	int page;
public:
//!	*  Constructor function with six parameters.
	Book(int,string,double,string,string,int);
//!	*  Constructor function with only Product parameters.
	Book(int,string,double);
//!	* Destructor..
	~Book();
//!	* Print Author,publisher and page of book.
	void printProperties();
//!	*  gets Author property of object.
	string getAuthor() const;
//!	* Sets Author property of object to given argument.
	void setAuthor(string);
//!	* gets Publisher property of object.
	string getPublisher() const;
//!	* Sets Publisher property of object to given argument.
	void setPublisher(string);
//!	*  gets Page property of object.
	int getPage() const;
//!	* Sets Page property of object to given argument.
	void setPage(int);
};

#endif /* BOOK_H_ */
