//
// Created by fatih on 29.12.2016.
//

#include <iostream>
#include <vector>
#include "Customer.h"
#include "Book.h"
#include "MusicCD.h"
#include "Magazine.h"
#include "Menu.h"
#include "MainMenu.h"

using namespace std;


int main(){

    vector<Customer> customerList;
    vector<Product*> productList;

    Product* book1 = new Book(1,"Suc ve Ceza", 25.0, "Dostoyevski","Can Yayinlari", 500);
    productList.push_back(book1);
    Product* cd1 = new MusicCD(2,"Thriller",28.90, "Michael Jackson", "Pop");
    productList.push_back(cd1);
    Product* magazine1 = new Magazine(3,"Popular Science",10, 110, "Science");
    productList.push_back(magazine1);

    Customer *customer = new Customer();
    customer->setName("Fatih Intekin");
    customer->setUsername("fatihint");
    customer->setPassword("asdasd");
    customer->setPhone("320 70 13");
    customer->setEmail("fatihint@gmail.com");
    customer->setAdress("Baglar mh. 2/1 Tepebasi");
    customerList.push_back(*customer);

    string mainSubs[] = {"Customer","Item","Shopping","Quit"};
    MainMenu* mainMenu = new MainMenu("Main Menu",mainSubs,4);

    string customerSubs[] = {"Add a new customer to the system","Show the customers in the system","Back"};
    string productSubs[] = {"Show Items" , "Back"};
    string shoppingSubs[] = {"Login","Add Product","Remove Product", "List All Products","List Shopping Cart","Show Bonus","Use Bonus","Place Order","Cancel Order","Show Invoice","Logout"};

    mainMenu->setCustomerMenu(new CustomerMenu("Customer Menu", customerSubs,3,customerList));
    mainMenu->setProductMenu(new ProductMenu("Item Menu", productSubs, 2, productList));
    mainMenu->setShoppingMenu(new ShoppingMenu("Shopping Menu", shoppingSubs,11, productList,customerList));
    mainMenu->show();

    return 0;
}
