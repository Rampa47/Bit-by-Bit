#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <cstdlib>
#include <array>

#include "ChickenBurger.h"
#include "BeefBurger.h"
#include "PlainChips.h"
#include "TomatoChipSauce.h"
#include "JalapenoChipSauce.h"
#include "GrilledPoultry.h"
#include "FriedPoultry.h"
#include "Poultry.h"
#include "FoodItem.h"
#include "Order.h"
#include "Waiter.h"




class Customer
{
    public:
        Customer();
        Customer(std::string name);
        std::string getName(); /**<Returns the name of a customer */

        void setTableNumber(int tableNumber);
        int getTableNumber() const;

        Order* order();
        void expressMood(Waiter* waiter);
        void receiveOrder(Order* order);
        void eatFood();
        void selectFoodItems(Order * order);
        double getBillAmount();

        //client is no longer a colleague 
        // void receive(std::string to,std::string message);
        // void send(std::string to,std::string message);

    private:
        int tableNumber;
        std::string name;
        std::shared_ptr<Order> receivedOrder;
        static std::array<std::string,40> names;
        double billAmount;


};

#endif