 /*
  * @file  MusicCD.cpp
  * @Author eren
  * @time 24 Ara 2016
  * @brief this file implements MusicCD class functions.
  */
  //! MusicCD class.
#include "MusicCD.h"
//! \return singer a string argument.
string MusicCD::getSinger() const {
	return singer;
}
//! \param singer a string argument.
void MusicCD::setSinger(string){
	this->singer=singer;
}
//! \return type a string argument.
string MusicCD::getType() const {
	return type;
}
//! \param type a string argument.
void MusicCD::setType(string){
	this->type=type;
}
//! \param name a string argument.
//! \param singer a string argument.
//! \param type a string argument.
//! \param id a integer argument.
//! \param price a double argument.
 MusicCD::MusicCD(string name ,double price, string singer,string type):Product(name,price) {
	 this->singer=singer;
	 this->type=type;
 }
//! \param name a string argument.
//! \param id a integer argument.
//! \param price a double argument.
 MusicCD::MusicCD(string name ,double price):Product(name,price){

 }

MusicCD::~MusicCD() {

}

void MusicCD::printProperties() {
	cout << "MusicCD Type: " << type << endl;
	cout << "MusicCD Singer: " << singer << endl;
}
