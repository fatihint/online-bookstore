/**
 * @file Cash.cpp
 * @Author eren (karaeren042@gmail.com)
 * @date December, 2016
 * @brief This file implements Cash class functions
 */ 
#include "Cash.h"

Cash::Cash(double amount):Payment(amount) {


}

Cash::~Cash() {

}

void Cash::performPayment() {
    cout << getAmount() << " is paid as Cash." << endl;
}

