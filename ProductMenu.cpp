/**
 * @file ProductMenu.cpp
 * @Author fatih (fatihint@gmail.com)
 * @date December, 2016
 * @brief This file implements ProductMenu class functions
 */ 


#include "ProductMenu.h"

ProductMenu::~ProductMenu() {

}
/*!
 \param menuInput an int argument.
 
*/ 
void ProductMenu::menuSwitch(int menuInput) {
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
