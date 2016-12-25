/*
 * Book.cpp
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#include "Book.h"

string Book::getAuthor() const{
	return author;
}

void Book::setAuthor(string author){
	this->author=author;
}

string Book::getPublisher() const{
	return publisher;
}

void Book::setPublisher(string){
	this->publisher=publisher;
}

int Book::getPage() const{
	return page;
}

void Book::setPage(int){
	this->page=page;
}

Book::Book(string author,string publisher,int page) {
	this->author=author;
	this->publisher=publisher;
	this->page=page;

}

Book::~Book() {

}

