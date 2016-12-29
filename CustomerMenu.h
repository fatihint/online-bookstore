//
// Created by fatih on 29.12.2016.
//

#ifndef ONLINE_BOOKSTORE_CUSTOMERMENU_H
#define ONLINE_BOOKSTORE_CUSTOMERMENU_H


#include "Menu.h"
#include "Customer.h"

class CustomerMenu : public Menu {
private:
    vector<Customer> customerList;
public:
    CustomerMenu(string title, string* subs, int size, vector<Customer> cList) : Menu(title, subs, size){
        customerList = cList;
    }
    void setCustomerList(const vector<Customer> &customerList);
    const vector<Customer> &getCustomerList() const;
    ~CustomerMenu();
    void menuSwitch(int);
};


#endif //ONLINE_BOOKSTORE_CUSTOMERMENU_H
