/*
 * @file  CustomerMenu.h
 * @Author fatih
 * @time 29 Ara 2016
 * @brief this file declares CustomerMenu class.
 */
 //! CustomerMenu class.

#ifndef ONLINE_BOOKSTORE_CUSTOMERMENU_H
#define ONLINE_BOOKSTORE_CUSTOMERMENU_H

//there is menu.h to inherit
#include "Menu.h"
#include "Customer.h"
//!CustomerMenu class inherits from menu class.
class CustomerMenu : public Menu {
private:
    vector<Customer> customerList;
public:
    //!Constructor.
    CustomerMenu(string title, string* subs, int size, vector<Customer> cList) : Menu(title, subs, size){
        customerList = cList;
    }
    //!Sets customerList.
    void setCustomerList(const vector<Customer> &customerList);
    //!Gets customerList.
    const vector<Customer> &getCustomerList() const;
    //!Destructor.
    ~CustomerMenu();
    //!Switchs menu by input.
    void menuSwitch(int);
};


#endif //ONLINE_BOOKSTORE_CUSTOMERMENU_H
