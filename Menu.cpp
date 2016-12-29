//
// Created by fatih on 29.12.2016.
//

#include <limits>
#include "Menu.h"

Menu::~Menu() {

}

void Menu::add(string submenu) {
    subMenus.push_back(submenu);
}

void Menu::add(string* submenuarray, int size) {
    for (int i = 0; i < size; ++i) {
        subMenus.push_back(submenuarray[i]);
    }
}
int Menu::show() {
    int menuInput = 0;
    cout << "\n";
    for (int i = 0; i < subMenus.size() ; ++i) {
        cout << i+1 << ". " << subMenus[i] << endl;
    }
    cout << "Choose One: ";
    cin >> menuInput;
    if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    this->menuSwitch(menuInput);
}

Menu::Menu(string, string * submenuarray, int size) {
    for (int i = 0; i < size; ++i) {
        subMenus.push_back(submenuarray[i]);
    }
}

