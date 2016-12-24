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
MusicCD::MusicCD(string singer,string type) {
	this->singer=singer;
	this->type=type;
}

MusicCD::~MusicCD() {

}

