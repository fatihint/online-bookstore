/*
 * @file  Payment.h
 * @Author fatih
 * @time 24 Ara 2016
 * @brief this file declares Payment class.
 */
#ifndef ONLINE_BOOKSTORE_PAYMENT_H
#define ONLINE_BOOKSTORE_PAYMENT_H
#include <iostream>
using namespace std;

//!Payment class.
class Payment {
private:
    double amount;
public:
    //!Constructor with one arguments.
    Payment(double);
    //!Destructor
    virtual ~Payment();
    //!Gets amount.
    double getAmount() const;
    //!Sets amount.
    void setAmount(double);
    //!About performPayment.
    virtual void performPayment() = 0;
    //!About payment informations.
    virtual string paymentInfo() = 0;
};

#endif //ONLINE_BOOKSTORE_PAYMENT_H
