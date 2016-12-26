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
MusicCD::MusicCD(int id,string name ,double price, string singer,string type):Product(id,name,price) {
	this->singer=singer;
	this->type=type;
}
MusicCD::MusicCD(int id,string name ,double price):Product(id,name,price){

}

MusicCD::~MusicCD() {

}

void MusicCD::printProperties() {

}

//int id;
//string name;
//double price;
