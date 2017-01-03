//
// Created by fatih on 29.12.2016.
//

#include <iostream>
#include <vector>
#include "Customer.h"
#include "Book.h"
#include "Menu.h"
#include "MainMenu.h"
#include "Magazine.h"
#include "MusicCD.h"

using namespace std;


int main(){

    vector<Customer> customerList;
    vector<Product*> productList;

    Product* book1 = new Book("Suç ve Ceza", 27.9, "Dostoyevski","Kültür Yayınları", 687);
    productList.push_back(book1);
    Product* book2 = new Book("1984", 21.35, "George Orwell","Can Yayınları", 352);
    productList.push_back(book2);
    Product* book3 = new Book("Tutunamayanlar", 32.68, "Oğuz Atay","İletişim Yayıncılık", 724);
    productList.push_back(book3);
    Product* cd1 = new MusicCD("Thriller",33.90, "Michael Jackson", "Pop");
    productList.push_back(cd1);
    Product* cd2 = new MusicCD("The Wall",35.20, "Pink Floyd", "Progresif Rock");
    productList.push_back(cd2);
    Product* cd3 = new MusicCD("Nevermind",29.0, "Nirvana", "Grunge");
    productList.push_back(cd3);
    Product* magazine1 = new Magazine("Popular Science",10, 197, "Science");
    productList.push_back(magazine1);
    Product* magazine2 = new Magazine("Capital",11.5, 312, "Business");
    productList.push_back(magazine2);
    Product* magazine3 = new Magazine("Blue Jean",6.90, 230, "Entartainment");
    productList.push_back(magazine3);

    Customer *customer = new Customer();
    customer->setName("Fatih İntekin");
    customer->setUsername("fatihint");
    customer->setPassword("asdasd");
    customer->setPhone("506 287 21 23");
    customer->setEmail("fatihint@gmail.com");
    customer->setAdress("Şirintepe mh. Bucak sk. 2/1 Tepebaşı Eskişehir");
    customerList.push_back(*customer);

    Customer *customer1 = new Customer();
    customer1->setName("Eren Kara");
    customer1->setUsername("konyalıprens");
    customer1->setPassword("123456");
    customer1->setPhone("535 039 38 21");
    customer1->setEmail("erenkara42@gmail.com");
    customer1->setAdress("Cumhuriye mh. Sakarya caddesi no:91 Eskişehir");
    customerList.push_back(*customer1);

    Customer *customer2 = new Customer();
    customer2->setName("Ali Baran Özoğlu");
    customer2->setUsername("alibaranfalanfilan");
    customer2->setPassword("password");
    customer2->setPhone("545 230 83 43");
    customer2->setEmail("alibaranozoglu@gmail.com");
    customer2->setAdress("Cumhuriye mh. Sakarya caddesi no:91 Eskişehir");
    customerList.push_back(*customer2);

    Customer *customer3 = new Customer();
    customer3->setName("Hakan Erol");
    customer3->setUsername("hknerol");
    customer3->setPassword("hakanerol1990");
    customer3->setPhone("555 382 61 18");
    customer3->setEmail("herol90@gmail.com");
    customer3->setAdress("Çam Sk. No:26 Kartal/İstanbul");
    customerList.push_back(*customer3);

    Customer *customer4 = new Customer();
    customer4->setName("Zeynep Çakır");
    customer4->setUsername("zeynepckr");
    customer4->setPassword("zeynep1234");
    customer4->setPhone("532 872 17 42");
    customer4->setEmail("herol90@gmail.com");
    customer4->setAdress("Ihlamur Sk. No:7 Kızılay, Çankaya/Ankara");
    customerList.push_back(*customer4);

    string mainSubs[] = {"Customer","Item","Shopping","Quit"};
    MainMenu* mainMenu = new MainMenu("Main Menu",mainSubs,4);

    string customerSubs[] = {"Add a new customer to the system","Show the customers in the system","Back"};
    string productSubs[] = {"Show Items", "Add New Item","Back"};
    string shoppingSubs[] = {"Login","Add Product to Shopping Cart","Remove Product from Shopping Cart", "List All Products","List Shopping Cart","Show Bonus","Use Bonus","Place Order","Cancel Order","Show Invoice","Quit"};

    mainMenu->setCustomerMenu(new CustomerMenu("Customer Menu", customerSubs,3,&customerList));
    mainMenu->setProductMenu(new ProductMenu("Item Menu", productSubs, 3, &productList));
    mainMenu->setShoppingMenu(new ShoppingMenu("Shopping Menu", shoppingSubs,11, &productList,&customerList));
    mainMenu->show();

    return 0;
}