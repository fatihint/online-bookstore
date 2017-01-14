/*
 * @file  Payment.cpp
 * @Author fatih
 * @time 24 Ara 2016
 * @brief this file implements Payment class functions.
 */
 //! Payment class.
#include "Payment.h"
//! \return amount a double argument.
double Payment::getAmount() const{
    return amount;
}
//! \paran amount a double argument.
void Payment::setAmount(double amount) {
    this->amount = amount;
}
//! \param amount a double argument.
Payment::Payment(double amount) {
    this->amount = amount;
}

Payment::~Payment() {

}
