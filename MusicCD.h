/*
 * MusicCD.h
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#ifndef MUSICCD_H_
#define MUSICCD_H_

#include <iostream>
using namespace std;

class MusicCD:public Product {
private:
	string singer;
	string type;
public:
	MusicCD();
	virtual ~MusicCD();
	void printProperties();
	string getSinger() const;
	void setSinger(string);
	string getType() const;
	void setType(string);

};

#endif /* MUSICCD_H_ */
