/*
 * @file  MusicCD.h
 * @Author eren
 * @time 24 Ara 2016
 * @brief this file declares MusicCD class.
 */
 //! MusicCD class.
#ifndef MUSICCD_H_
#define MUSICCD_H_
#include <iostream>
#include "Product.h"
#pragma once
using namespace std;
//!MusicCD class inherits from product class.
class MusicCD:public Product {
private:
	string singer;
	string type;
public:
	//!Constructor with five arguments.
	MusicCD(string,double,string,string);
	//!Constructor with three arguments.
	MusicCD(string,double);
	//!Destructor
	virtual ~MusicCD();
	//Prints the properties.
	void printProperties();
	//!Gets singer.
	string getSinger() const;
	//!Sets singer.
	void setSinger(string);
	//!Gets type.
	string getType() const;
	//!Sets type.
	void setType(string);

};

#endif /* MUSICCD_H_ */
