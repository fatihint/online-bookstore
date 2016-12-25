/*
 * Magazine.cpp
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#include "Magazine.h"

int Magazine::getIssue()const{
	return Issue;
}

void Magazine::setIssue(int){
	this->Issue=Issue;
}

string Magazine::getType()const{
	return type;
}

void Magazine::setType(string){
	this->type=type;
}

Magazine::Magazine(int Issue,string type) {
	this->Issue=Issue;
	this->type=type;
}

Magazine::~Magazine() {

}

