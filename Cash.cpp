/*
 * Cash.cpp
 *
 *  Created on: Dec 24, 2016
 *      Author: eren
 */

#include "Cash.h"

Cash::Cash(double amount):Payment(amount) {


}

Cash::~Cash() {

}

void Cash::performPayment() {
    cout << getAmount() << " is paid as Cash." << endl;
}

string Cash::paymentInfo() {
    string info = to_string(getAmount()) + " TL is paid as Cash. \n";
    return info;
}
