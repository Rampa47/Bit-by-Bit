//
// Created by Khanya on 11/2/2023.
//

#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
#include <vector>
#include <thread>  // for sleep
#include "FoodItem.h"
using namespace std;
class Menu {
private :
    struct MenuItem {
        FoodItem *foodItem ;
        double price ;
    };
    vector<MenuItem> menuItems ;
    static  double burgerPrice ;
    static double chipsPrice ;
    static double poultryPrice ;

public :
    void addItem(FoodItem *foodItem);
    void displayMenu();
    int getMenuItemsSize ();
    vector<Menu::MenuItem> mItems();
    double getBurgerPrice();
    double getChipsPrice();
    double getPoultryPrice();

};
#endif
