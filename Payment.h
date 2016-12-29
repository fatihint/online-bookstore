//
// Created by fatih on 24.12.2016.
//

#ifndef ONLINE_BOOKSTORE_PAYMENT_H
#define ONLINE_BOOKSTORE_PAYMENT_H
#include <iostream>
using namespace std;

class Payment {
private:
    double amount;
public:
    Payment(double);
    virtual ~Payment();
    double getAmount() const;
    void setAmount(double);
    virtual void performPayment() = 0;
};

#endif //ONLINE_BOOKSTORE_PAYMENT_H
