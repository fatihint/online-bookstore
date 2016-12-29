//#include <iostream>
//#include <vector>
//#include "Customer.h"
//#include "Book.h"
//#include "ShoppingCart.h"
//#include "MusicCD.h"
//#include "Magazine.h"
//#include "Cash.h"
//#include "Check.h"
//#include "CreditCard.h"
//
//using namespace std;
//
//void customerMenu(vector<Customer> cList){
//    Customer* c;
//    string name = "";
//    string address = "";
//    string username = "";
//    string password = "";
//    string email = "";
//    string phone = "";
//    int menuInput = 0;
//
//    while(menuInput != 3){
//        cout << "\n";
//        cout << "Customer Menu" << endl;
//        cout << "1. Add a new customer to the system." << endl;
//        cout << "2. Show the customers in the system." << endl;
//        cout << "3. Back" << endl;
//        cout << "Choose One: ";
//        cin >> menuInput;
//        switch (menuInput){
//            case 1:
//                cout << "\n";
//                cout << "Add Customer \n";
//                Customer::setLastId();
//                cout << "Customer Name:";
//                cin.ignore();
//                getline(cin,name);
//                cout << "Customer Address: ";
//                getline(cin, address);
//                cout << "Customer Username: ";
//                getline(cin, username);
//                cout << "Customer Password: ";
//                getline(cin, password);
//                cout << "Customer Email: ";
//                getline(cin, email);
//                cout << "Customer Phone: ";
//                getline(cin, phone);
//                c = new Customer();
//                c->setName(name);
//                c->setAdress(address);
//                c->setCustomerID(Customer::getLastId());
//                c->setUsername(username);
//                c->setPassword(password);
//                c->setPhone(phone);
//                c->setEmail(email);
//                cList.push_back(*c);
//                break;
//            case 2:
//                cout << "\n";
//                cout << "Customers in the System" << endl;
//                for(int i=0; i<cList.size(); i++){
//                    cout << cList[i].getCustomerID()  << ". " << cList[i].getName() << endl;
//                    cout << cList[i].getAdress() << endl;
//                    cout << cList[i].getUsername() << endl;
//                    cout << cList[i].getPassword() << endl;
//                    cout << cList[i].getEmail() << endl;
//                    cout << cList[i].getPhone() << endl;
//                }
//                if(cList.size() == 0){
//                    cout << "There are no customers to show in the system." << endl;
//                }
//                break;
//            case 3:
//                break;
//        }
//    }
//}
//
//void itemMenu(vector<Product*> pList){
//    Product* p;
//    int menuInput = 0;
//    string type = "";
//
//    while(menuInput != 2){
//        cout << "\n";
//        cout << "Item Menu" << endl;
//        cout << "1. Show Items" << endl;
//        cout << "2. Back" << endl;
//        cout << "Choose One: ";
//        cin >> menuInput;
//        switch (menuInput){
//            case 1:
//                cout << "\n";
//                cout << "Show Items" << endl;
//                for(int i=0; i<pList.size(); i++){
//                    cout << pList[i]->getId() << " : " << pList[i]->getName() << " - " << pList[i]->getPrice() << " TL" << endl;
//                    pList[i]->printProperties();
//                    cout << "\n";
//                }
//                if(pList.size() == 0){
//                    cout << "There are no items to show." << endl;
//                }
//                break;
//            case 2:
//                break;
//        }
//    }
//}
//
//void shoppingMenu(vector<Customer> cList, vector<Product*> pList){
//    ShoppingCart* cart;
//    Customer* c = new Customer();
//    int totalAmount = 0;
//    int menuInput = 0;
//    bool session = false;
//    string username = "";
//    string password = "";
//    string itemName = "";
//    int itemNumber = 0;
//    while(menuInput != 11){
//        cout << "\n";
//        cout << "Shopping Menu" << endl;
//        cout << "1. Login" << endl;
//        cout << "2. Add Product" << endl;
//        cout << "3. Remove Product" << endl;
//        cout << "4. List All Products" << endl;
//        cout << "5. List Shopping Cart" << endl;
//        cout << "6. Show Bonus" << endl;
//        cout << "7. Use Bonus" << endl;
//        cout << "8. Place Order" << endl;
//        cout << "9. Cancel Order" << endl;
//        cout << "10. Show Invoice" << endl;
//        cout << "11. Quit" << endl;
//        cout << "Choose One: ";
//        cin >> menuInput;
//        switch (menuInput) {
//            case 1:
//                cout << "Enter the username: ";
//                cin.ignore();
//                getline(cin,username);
//                cout << "Enter the password: ";
//                getline(cin, password);
//                for (int i = 0; i < cList.size(); ++i) {
//                    if(cList[i].getUsername() == username){
//                        cout <<"un bulundu " << username << "-----" << password << "\n";
//                        if(cList[i].getPassword() == password){
//                            session = true;
//                            *c = cList[i];
//                        }
//                    }
//                }
//                if(!session){
//                    cout << "Wrong username or password !" << endl;
//                }
//                else{
//                    cart = new ShoppingCart(c);
//                    totalAmount = cart->getTotalAmount();
//                }
//                break;
//            case 2:
//                if(session){
//                    itemName = "";
//                    bool found = false;
//                    cout << "Product name: ";
//                    cin.ignore();
//                    getline(cin, itemName);
//                    cout << "Number of product: ";
//                    cin >> itemNumber;
//                    for(int i=0; i<pList.size(); i++){
//                        if(pList[i]->getName() == itemName){
//                            found = true;
//                            cart->addProduct(pList[i],itemNumber);
//                            cout << "Product added ! " << endl;
//                            totalAmount = cart->getTotalAmount();
//                        }
//                    }
//                    if(!found){
//                        cout << "Product not found, please check the name..." << endl;
//                    }
//                }
//                else{
//                    cout << "You must login first !" << endl;
//                }
//                break;
//            case 3:
//                if(session){
//                    itemName = "";
//                    bool found = false;
//                    cout << "Product name: ";
//                    cin.ignore();
//                    getline(cin, itemName);
//                    for(int i=0; i<pList.size(); i++){
//                        if(pList[i]->getName() == itemName){
//                            found = true;
//                            cart->removeProduct(pList[i]);
//                            cout << "Product removed ! " << endl;
//                        }
//                    }
//                    if(!found){
//                        cout << "Product not found, please check the name..." << endl;
//                    }
//                }
//                else{
//                    cout << "You must login first !" << endl;
//                }
//                break;
//            case 4:
//                for(int i=0; i<pList.size(); i++){
//                    cout << pList[i]->getId() << " : " << pList[i]->getName() << " - " << pList[i]->getPrice() << " TL" << endl;
//                    pList[i]->printProperties();
//                }
//                break;
//            case 5:
//                cart->printProducts();
//                cout << "Total: " << totalAmount << " TL" << endl;
//                break;
//            case 6:
//                if(totalAmount >= 100){
//                    c->setBonus(totalAmount* 0.1);
//                }
//                if(totalAmount >= 50){
//                    c->setBonus(totalAmount*0.05);
//                }
//                cout << "Bonus: " << c->getBonus() << " TL" << endl;
//                break;
//            case 7:
//                c->useBonus();
//                break;
//            case 8:
//                if(session){
//                    if(cart->getProductCount() != 0){
//                        int paymentMethod = 0;
//                        cout << "Total Amount: " << totalAmount << endl;
//                        cout << "Please choose a payment method: " << endl;
//                        cout << "1. Cash \n";
//                        cout << "2. Credit Card \n";
//                        cout << "3. Check \n";
//                        cout << "Payment Method: ";
//                        cin >> paymentMethod;
//                        switch (paymentMethod){
//                            case 1:
//                                cart->setPaymentMethod(new Cash(totalAmount));
//                                break;
//                            case 2:
//                                cart->setPaymentMethod(new CreditCard(totalAmount));
//                                break;
//                            case 3:
//                                cart->setPaymentMethod(new Check(totalAmount));
//                                break;
//                        }
//                        cart->placeOrder();
//                        cout << "Order is placed !" << endl;
//                    }
//                    else{
//                        cout << "Shopping Cart is empty, please add a product." << endl;
//                    }
//                }
//                else{
//                    cout << "You need to login to create order." << endl;
//                }
//                break;
//            case 9:
//                if(session){
//                    if(cart->getProductCount() != 0 ){
//                        cart->cancelOrder();
//                        cout << "Order is cancelled." << endl;
//                    }
//                    else{
//                        cout << "Shopping Cart is already empty." << endl;
//                    }
//                }
//                else{
//                    cout << "You need to login to create an order." << endl;
//                }
//                break;
//            case 10:
//                if(session){
//                    cart->showInvoice();
//                }
//                else{
//                    cout << "You need to login first." << endl;
//                }
//                break;
//            case 11:
//                break;
//        }
//    }
//}
//
//int main(){
//    vector<Customer> customerList;
//    vector<Product*> productList;
//
//    Product* book1 = new Book(1,"Suc ve Ceza", 25.0, "Dostoyevski","CAN Yayinlari", 500);
//    productList.push_back(book1);
//    Product* cd1 = new MusicCD(2,"The Wall",28.90, "Pink Floyd", "Rock");
//    productList.push_back(cd1);
//    Product* magazine1 = new Magazine(3,"Popular Science",10, 110, "Science");
//    productList.push_back(magazine1);
//
//    Customer *customer = new Customer();
//    customer->setUsername("fatihint");
//    customer->setPassword("otoban123");
//    customer->setPhone("320 70 13");
//    customer->setEmail("fatihint@gmail.com");
//    customer->setAdress("Baglar mh. 2/1 Tepebasi");
//    customerList.push_back(*customer);
//
//    int menuInput = 0;
//    while(menuInput != 4){
//        cout << "\n";
//        cout << "Main Menu" << endl;
//        cout << "1. Customer" << endl;
//        cout << "2. Item" << endl;
//        cout << "3. Shopping" << endl;
//        cout << "4. Quit" << endl;
//        cout << "Choose One: ";
//        cin >> menuInput;
//
//        switch (menuInput){
//            case 1:
//                customerMenu(customerList);
//                break;
//            case 2:
//                itemMenu(productList);
//                break;
//            case 3:
//                shoppingMenu(customerList,productList);
//                break;
//            case 4:
//                break;
//        }
//    }
//
//    return 0;
//}
//
