#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <cstdlib>
#include <array>
#include <time.h>
#include "CustomerDisposition.h"

class Order{};
class Waiter{};
class Customer
{
    public:
        Customer();
        Customer(std::string name);
        std::string getName(); /**<Returns the name of a customer */

        void setTableNumber(int tableNumber);
        int getTableNumber() const;

        std::shared_ptr<Order> order();
        void expressMood(std::shared_ptr<Waiter> waiter);
        void receiveOrder(std::shared_ptr<Order> order);
        void eatFood();

        //client is no longer a colleague 
        // void receive(std::string to,std::string message);
        // void send(std::string to,std::string message);

    private:
        int tableNumber;
        std::string name;
        std::shared_ptr<CustomerDisposition> disposition;
        std::shared_ptr<Order> receivedOrder;
        static std::array<std::string,40> names;
        std::shared_ptr<CustomerDisposition> getRandomMood();


};

#endif