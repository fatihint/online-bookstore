//
// Created by fatih on 29.12.2016.
//

#include "ProductMenu.h"

ProductMenu::~ProductMenu() {

}
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

const vector<Product *> &ProductMenu::getProductList() const {
    return productList;
}

void ProductMenu::setProductList(const vector<Product *> &productList) {
    ProductMenu::productList = productList;
}
