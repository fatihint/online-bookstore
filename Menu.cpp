/*
 * @file  Menu.cpp
 * @Author fatih
 * @time 29 Ara 2016
 * @brief this file implements Menu class functions.
 */
 //! Menu class.
#include <limits>
#include "Menu.h"

Menu::~Menu() {

}
//! \param submenu a string argument.
void Menu::add(string submenu) {
    subMenus.push_back(submenu);
}
//! \param submenuarray a string argument.
void Menu::add(string* submenuarray, int size) {
    for (int i = 0; i < size; ++i) {
        subMenus.push_back(submenuarray[i]);
    }
}
//! \return menuInput an integer argument.
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
//! \param s a string argument.
//! \param submenuarray a string argument.
//! \param size an integer argument.
Menu::Menu(string, string * submenuarray, int size) {
    for (int i = 0; i < size; ++i) {
        subMenus.push_back(submenuarray[i]);
    }
}
