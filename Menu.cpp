#include "Menu.h"
#include <vector>
using namespace std;
double Menu::burgerPrice   = 45.00;
double Menu:: chipsPrice = 25.00;
double Menu::  poultryPrice = 110.00;
void Menu::addItem(FoodItem *foodItem) {
if(foodItem->getName()=="Burger")
{
    //menuItems.push_back(Menu::MenuItem{foodItem , burgerPrice});
menuItems.push_back({foodItem, burgerPrice});

}
else if(foodItem->getName()=="Poultry")
{
    //menuItems.push_back(Menu::MenuItem{foodItem , burgerPrice});
    menuItems.push_back({foodItem, poultryPrice});

}
else if(foodItem->getName()=="Chips")
{
    menuItems.push_back({foodItem, chipsPrice});

}
else {
    cout<<"Unfortunately that item is currently not available!"<<endl;
}
}

void Menu::displayMenu() {
    cout << "Menu:" << endl;
    for (int i = 0; i < menuItems.size(); ++i) {
        cout << i + 1 << ". " << menuItems[i].foodItem->getName() << " - R" << menuItems[i].price << endl;
    }

}

int Menu::getMenuItemsSize() {
    return menuItems.size();
}

vector<Menu::MenuItem> Menu::mItems() {
    return menuItems;
}

double Menu::getBurgerPrice() {
    return burgerPrice;
}

double Menu::getChipsPrice() {
    return chipsPrice;
}
double Menu::getPoultryPrice() {
    return poultryPrice;
}