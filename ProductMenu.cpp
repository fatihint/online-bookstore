/**
 * @file ProductMenu.cpp
 * @Author fatih (fatihint@gmail.com)
 * @date December, 2016
 * @brief This file implements ProductMenu class functions
 */ 


#include "ProductMenu.h"
#include "Book.h"
#include "MusicCD.h"
#include "Magazine.h"

ProductMenu::~ProductMenu() {

}
/*!
 \param menuInput an int argument.
 
*/
void ProductMenu::menuSwitch(int menuInput) {
    int type = 0, page, id;
    double price = 0;
    string name = "", author = "", publisher = "";
    Product* p;

    switch (menuInput){
        case 1:
            cout << "\n";
            cout << "Show Items" << endl;
            for(int i=0; i<productList.size(); i++){
                cout << productList[i]->getId() << " : " << productList[i]->getName() << " - " << productList[i]->getPrice() << " TL" << endl;
                productList[i]->printProperties();
                cout << "\n";
            }
            if(productList.size() == 0){
                cout << "There are no items to show in the system." << endl;
            }
            this->show();
            break;
        case 2:
            cout <<"\n";
            cout << "Add New Item" << "\n\n";
            cout << "\t1. Book"<<endl;
            cout << "\t2. Music CD"<<endl;
            cout << "\t3. Magazine"<<endl;
            cout << "\tChoose the item type: ";
            cin >> type;
            switch (type){
                case 1:
                    cout << "\nBook Name: ";
                    cin.ignore();
                    getline(cin,name);
                    cout << "Book Price: ";
                    cin >> price;
                    cout << "Book Page: ";
                    cin >> page;
                    cout << "Book Author: ";
                    cin.ignore();
                    getline(cin,author);
                    cout << "Book Publisher: ";
                    getline(cin,publisher);
                    p = new Book(name,price,author,publisher,page);
                    cout << "Book Added Successfully !" << endl;
                    break;
                case 2:
                    cout << "\nMusicCD Name: ";
                    cin.ignore();
                    getline(cin,name);
                    cout << "MusicCD Price: ";
                    cin >> price;
                    cout << "MusicCD Singer: ";
                    cin.ignore();
                    getline(cin,author);
                    cout << "MusicCD Type: ";
                    getline(cin,publisher);
                    p = new MusicCD(name,price,author,publisher);
                    cout << "MusicCD Added Successfully !" << endl;
                    break;
                case 3:
                    cout << "\nMagazine Name: ";
                    cin.ignore();
                    getline(cin,name);
                    cout << "Magazine Price: ";
                    cin >> price;
                    cout << "Magazine Issue: ";
                    cin >> page;
                    cout << "Magazine Type: ";
                    cin.ignore();
                    getline(cin,publisher);
                    p = new Magazine(name,price,page,publisher);
                    cout << "Magazine Added Successfully !" << endl;
                    break;
            }
            proList->push_back(p);
            productList = *proList;
            this->show();
            break;
        case 3:
            cout << "Back " << endl;
            break;
    }
}
/*!
 
 \return productList a Product argument.

*/ 
const vector<Product *> &ProductMenu::getProductList() const {
    return productList;
}
/*!
 \param productList an Product argument.
 
*/ 
void ProductMenu::setProductList(const vector<Product *> &productList) {
    ProductMenu::productList = productList;
}
