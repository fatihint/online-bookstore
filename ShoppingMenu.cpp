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
    int itemNumber = 0,flag = 1;
    string itemName = "",username = "",password = "";
    cList = *customerList;
    pList = *productList;
    switch (menuInput){
        case 1:
            if(session){
                cout << "You are already logged in as " << c->getUsername() << endl;
            }
            else{
                cout << "Enter the username: ";
                cin.ignore();
                getline(cin,username);
                cout << "Enter the password: ";
                getline(cin, password);
                for (int i = 0; i < customerList->size(); ++i) {
                    if(cList[i].getUsername() == username){
                        if(cList[i].getPassword() == password){
                            session = true;
                            c = new Customer();
                            *c = cList[i];
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
                for(int i=0; i<pList.size(); i++){
                    if(pList[i]->getName() == itemName){
                        found = true;
                        cart->addProduct(pList[i],itemNumber);
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
                for(int i=0; i<productList->size(); i++){
                    if(pList[i]->getName() == itemName){
                        found = true;
                        cart->removeProduct(pList[i]);
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
            for(int i=0; i<productList->size(); i++){
                cout << "\n" << pList[i]->getId() << " : " << pList[i]->getName() << " - " << pList[i]->getPrice() << " TL" << endl;
                pList[i]->printProperties();
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
                cout << "Bonus: " << c->getBonus() << " TL" << endl;
            }
            else{
                cout << "You are not logged in " << endl;
            }
            this->show();
            break;
        case 7:
            if(session){
                if(cart->getProductCount() == 0){
                    cout << "Shopping card is empty. " << endl;
                }
                else{
                    if(c->getBonus() == 0){
                        cout << "You have no bonus to use..." << endl;
                    }
                    else{
                        cout << "Enter the bonus amount that you wish to use (" << c->getBonus()  << " TL max): " ;
                        cin >> bonus;
                        if(c->getBonus() < bonus){
                            bonus = c->getBonus();
                        }
                        if(totalAmount - bonus < 0){
                            bonus = totalAmount;
                        }
                        c->useBonus(bonus);
                        cart->setBonusUsed();
                    }
                }
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
                    cout << "\tTotal Amount: " << totalAmount << " TL " << endl;
                    cout << "\tBonus Used: " << bonus << " TL" << endl;
                    totalAmount -= bonus;
                    cout << "\tAmount to be Paid: " << totalAmount << " TL" << endl;
                    if(totalAmount > 100){
                        c->addBonus(totalAmount * 0.1);
                    }
                    else if(totalAmount > 50){
                        c->addBonus(totalAmount * 0.05);
                    }
                    cout << "\t" << c->getBonus() << " TL" " bonus will be added to account after payment." << endl;
                    cout << "\tPlease choose a payment method: " << endl;
                    cout << "\t1. Cash \n";
                    cout << "\t2. Credit Card \n";
                    cout << "\t3. Check \n";
                    cout << "\t4. Cancel \n";
                    cout << "\tPayment Method: ";
                    cin >> paymentMethod;
                    cout << "\n";
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
                        case 4:
                            cout << "\nPayment cancelled. " << endl;
                            flag = 0;
                            break;
                        default:
                            flag = 0;
                            break;
                    }
                    if(flag == 1){
                        cart->placeOrder();
                        order = true;
                        Invoice += cart->showInvoice();
                        cart = new ShoppingCart(c);
                        totalAmount = cart->getTotalAmount();
                        cout << "Order is placed !" << endl;
                    }
                    else{
                        c->setBonus(0);
                        if(cart->getBonusUsed()){
                            c->addBonus(bonus);
                        }
                        cout << "Invalid input " << endl;
                    }
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
    return pList;
}

void ShoppingMenu::setProductList(const vector<Product *> &productList) {
    ShoppingMenu::pList = productList;
}

const vector<Customer> &ShoppingMenu::getCustomerList() const {
    return cList;
}

void ShoppingMenu::setCustomerList(const vector<Customer> &customerList) {
    ShoppingMenu::cList = customerList;
}
