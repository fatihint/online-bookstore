/**
 * @file Book.cpp
 * @Author eren (karaeren042@gmail.com)
 * @date December, 2016
 * @brief This file implements Book class functions
 */ 


#include "Book.h"

/*!
 
 \return author	a string argument.

*/ 
string Book::getAuthor() const{
	return author;
}

/*!
 \param author an string argument.
 
*/ 
void Book::setAuthor(string author){
	this->author=author;
}
/*!
 \return publisher a string argument.
*/ 
string Book::getPublisher() const{
	return publisher;
}
/*!
 \param publisher an string argument.
 
*/ 
void Book::setPublisher(string){
	this->publisher=publisher;
}
/*!
 \return page	a int argument.
*/ 
int Book::getPage() const{
	return page;
}
/*!
 \param page an integer argument.
 
*/ 
void Book::setPage(int){
	this->page=page;
}

Book::Book(int id, string name, double price,string author,string publisher,int page):Product(id,name,price){
	this->author=author;
	this->publisher=publisher;
	this->page=page;
}
Book::Book(int id, string name, double price):Product(id,name,price){

}
Book::~Book() {

}

void Book::printProperties() {
	cout << "Book Author: " << author << endl;
	cout << "Book Publisher: " << publisher << endl;
	cout << "Book Page: " << page << endl;
}

