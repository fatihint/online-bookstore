#include <iostream>
#include "Customer.h"

using namespace std;

int main(){
    Customer* customer = new Customer();
    customer->setName("Eren Kara");
    cout << "New Customer: " << customer->getName() << endl;
}