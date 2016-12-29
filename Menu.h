//
// Created by fatih on 29.12.2016.
//

#ifndef ONLINE_BOOKSTORE_MENU_H
#define ONLINE_BOOKSTORE_MENU_H

#include <iostream>
#include <vector>

using namespace std;

class Menu {
protected:
    string title;
    vector<string> subMenus;
public:
    Menu(string title){
        this->title = title;
    }
    Menu(string, string*,int);
    ~Menu();
    void add(string*, int);
    void add(string);
    int show();
    virtual void menuSwitch(int) = 0;
};


#endif //ONLINE_BOOKSTORE_MENU_H
