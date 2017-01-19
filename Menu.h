/*
 * @file  Menu.cpp
 * @Author fatih
 * @time 29 Ara 2016
 * @brief this file declares Menu class.
 */
 //! Menu class.
#ifndef ONLINE_BOOKSTORE_MENU_H
#define ONLINE_BOOKSTORE_MENU_H

#include <iostream>
#include <vector>

using namespace std;
//!Menu class.
class Menu {
protected:
    string title;
    vector<string> subMenus;
public:
    //!Constructor with one arguments.
    Menu(string title){
        this->title = title;
    }
    //!Constructor with three arguments.
    Menu(string, string*,int);
    //!Destructor
    ~Menu();
    //!Adds submenu.
    void add(string*, int);
    //!Adds submenu.
    void add(string);
    //!Shows submenus.
    int show();
    //!Switchs to menu.
    virtual void menuSwitch(int) = 0;
};


#endif //ONLINE_BOOKSTORE_MENU_H
