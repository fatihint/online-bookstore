//
// Created by fatih on 29.12.2016.
//

#include "CustomerMenu.h"

CustomerMenu::~CustomerMenu() {

}

void CustomerMenu::menuSwitch(int menuInput) {
    Customer* c;
    string name = "",address = "",username = "",password = "",email = "",phone = "";
    switch (menuInput){
        case 1:
            cout << "\n";
            cout << "Add Customer" << endl;
            cout << "Customer Name: ";
            cin.ignore();
            getline(cin,name);
            cout << "Customer Username: ";
            getline(cin,username);
            cout << "Customer Password: ";
            getline(cin,password);
            cout << "Customer Email: ";
            getline(cin,email);
            cout << "Customer Adress: ";
            getline(cin,address);
            cout << "Customer Phone: ";
            getline(cin,phone);
            c = new Customer();
            c->setName(name);
            c->setUsername(username);
            c->setPassword(password);
            c->setEmail(email);
            c->setPhone(phone);
            cusList->push_back(*c);
            customerList = *cusList;
            cout << "Customer Added Successfully !" << endl;
            this->show();
            break;
        case 2:
            if(cusList->size() != 0){
                for(int i=0; i<cusList->size(); i++){
                    cout << "\n";
                    cout << customerList[i].getCustomerID() << ". " << customerList[i].getName() << endl;
                    cout << "Username: " << customerList[i].getUsername() << endl;
                    cout << "Adress: " << customerList[i].getAdress() << endl;
                    cout << "Phone: " << customerList[i].getPhone() << endl;
                    cout << "Email: " << customerList[i].getEmail() << endl;
                }
            }
            else{
                cout << "There are no customers to show in the system." << endl;
            }
            this->show();
            break;
        case 3:
            cout << "Back" << endl;
            break;
        default:
            cout << "Please choose a valid option (1-3)..." << endl;
            this->show();
            break;
    }
}

const vector<Customer> &CustomerMenu::getCustomerList() const {
    return customerList;
}

void CustomerMenu::setCustomerList(const vector<Customer> &customerList) {
    CustomerMenu::customerList = customerList;
}
