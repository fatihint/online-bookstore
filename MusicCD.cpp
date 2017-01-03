/*
 * MusicCD.cpp
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#include "MusicCD.h"

string MusicCD::getSinger() const {
	return singer;
}

void MusicCD::setSinger(string){
	this->singer=singer;
}

string MusicCD::getType() const {
	return type;
}

void MusicCD::setType(string){
	this->type=type;
}
MusicCD::MusicCD(string name ,double price, string singer,string type):Product(name,price) {
	this->singer=singer;
	this->type=type;
}
MusicCD::MusicCD(string name ,double price):Product(name,price){

}

MusicCD::~MusicCD() {

}

void MusicCD::printProperties() {
	cout << "MusicCD Type: " << type << endl;
	cout << "MusicCD Singer: " << singer << endl;
}

//int id;
//string name;
//double price;
