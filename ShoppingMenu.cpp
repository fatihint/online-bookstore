//
// Created by fatih on 29.12.2016.
//

#include "ShoppingMenu.h"
#include "ShoppingCart.h"
#include "Cash.h"
#include "CreditCard.h"
#include "Check.h"

ShoppingMenu::~ShoppingMenu() {

}

void ShoppingMenu::menuSwitch(int menuInput) {
    int itemNumber = 0;
    string itemName = "";
    string username = "";
    string password = "";
    switch (menuInput){
        case 1:
            cout << "Enter the username: ";
            cin.ignore();
            getline(cin,username);
            cout << "Enter the password: ";
            getline(cin, password);
            for (int i = 0; i < customerList.size(); ++i) {
                if(customerList[i].getUsername() == username){
                    if(customerList[i].getPassword() == password){
                        session = true;
                        c = new Customer();
                        *c = customerList[i];
                    }
                }
            }
            if(!session){
                cout << "Wrong username or password !" << endl;
            }
            else{
                cout << "Login Successfull !" << endl;
                cart = new ShoppingCart(c);
                totalAmount = cart->getTotalAmount();
            }
            this->show();
            break;
        case 2:
            if(session){
                itemName = "";
                bool found = false;
                cout << "Product name: ";
                cin.ignore();
                getline(cin, itemName);
                cout << "Number of product: ";
                cin >> itemNumber;
                for(int i=0; i<productList.size(); i++){
                    if(productList[i]->getName() == itemName){
                        found = true;
                        cart->addProduct(productList[i],itemNumber);
                        totalAmount = cart->getTotalAmount();
                        cout << "Product added ! " << endl;
                    }
                }
                if(!found){
                    cout << "Product not found, please check the name..." << endl;
                }
            }
            else{
                cout << "You are not logged in " << endl;
            }
            this->show();
            break;
        case 3:
            if(session){
                itemName = "";
                bool found = false;
                cout << "Product name: ";
                cin.ignore();
                getline(cin, itemName);
                for(int i=0; i<productList.size(); i++){
                    if(productList[i]->getName() == itemName){
                        found = true;
                        cart->removeProduct(productList[i]);
                        totalAmount = cart->getTotalAmount();
                        cout << "Product removed ! " << endl;
                    }
                }
                if(!found){
                    cout << "Product not found, please check the name..." << endl;
                }
            }
            else{
                cout << "You are not logged in " << endl;
            }
            this->show();
            break;
        case 4:
            for(int i=0; i<productList.size(); i++){
                cout << "\n" << productList[i]->getId() << " : " << productList[i]->getName() << " - " << productList[i]->getPrice() << " TL" << endl;
                productList[i]->printProperties();
            }
            this->show();
            break;
        case 5:
            if(session){
                cart->printProducts();
                cout << "Total: " << totalAmount << " TL" << endl;
            }
            else{
                cout << "You are not logged in " << endl;
            }
            this->show();
            break;
        case 6:
            if(session){
                if(totalAmount >= 100){
                    c->setBonus(totalAmount* 0.1);
                }
                if(totalAmount >= 50){
                    c->setBonus(totalAmount*0.05);
                }
                cout << "Bonus: " << c->getBonus() << " TL" << endl;
            }
            else{
                cout << "You are not logged in " << endl;
            }
            this->show();
            break;
        case 7:
            if(session){
                c->useBonus();
            }
            else{
                cout << "You are not logged in " << endl;
            }
            this->show();
            break;
        case 8:
            if(session){
                if(cart->getProductCount() != 0){
                    int paymentMethod = 0;
                    cout << "\tTotal Amount: " << totalAmount << endl;
                    cout << "\tPlease choose a payment method: " << endl;
                    cout << "\t1. Cash \n";
                    cout << "\t2. Credit Card \n";
                    cout << "\t3. Check \n";
                    cout << "\tPayment Method: ";
                    cin >> paymentMethod;
                    switch (paymentMethod){
                        case 1:
                            cart->setPaymentMethod(new Cash(totalAmount));
                            break;
                        case 2:
                            cart->setPaymentMethod(new CreditCard(totalAmount));
                            break;
                        case 3:
                            cart->setPaymentMethod(new Check(totalAmount));
                            break;
                    }
                    cart->placeOrder();
                    order = true;
                    Invoice += cart->showInvoice();
                    cart = new ShoppingCart(c);
                    totalAmount = cart->getTotalAmount();
                    cout << "Order is placed !" << endl;
                }
                else{
                    cout << "Shopping Cart is empty, please add a product." << endl;
                }
            }
            else{
                cout << "You need to login to create order." << endl;
            }
            this->show();
            break;
        case 9:
            if(session){
                if(cart->getProductCount() != 0 ){
                    cart->cancelOrder();
                    cart = new ShoppingCart(c);
                    totalAmount = cart->getTotalAmount();
                    cout << "Order is cancelled." << endl;
                }
                else{
                    cout << "Shopping Cart is already empty." << endl;
                }
            }
            else{
                cout << "You need to login to create an order." << endl;
            }
            this->show();
            break;
        case 10:
            if(session){
                if(order){
                    cout << Invoice << endl;
                }
                else{
                    cout << "You have not placed any order yet." << endl;
                }
            }
            else{
                cout << "You are not logged in " << endl;
            }
            this->show();
            break;
        case 11:
            session = false;
            break;
        default:
            cout << "Please choose a valid option (1-11)..." << endl;
            this->show();
            break;
    }
}

const vector<Product *> &ShoppingMenu::getProductList() const {
    return productList;
}

void ShoppingMenu::setProductList(const vector<Product *> &productList) {
    ShoppingMenu::productList = productList;
}

const vector<Customer> &ShoppingMenu::getCustomerList() const {
    return customerList;
}

void ShoppingMenu::setCustomerList(const vector<Customer> &customerList) {
    ShoppingMenu::customerList = customerList;
}
