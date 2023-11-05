


#include "Table.h"
#include <iostream>
#include <random>

#include "EmptyTable.h"

int Table::waiterNumberToTable = 0;

Table::Table()
{
    next = nullptr;
    numCurrentCustomers = 0;
    isWaitingArea = false;
    className="Table";
    waiter= nullptr;   
    
}

void Table::setWaiter(Waiter* w)
{
    waiter=w;
}


Table::Table(bool isWaitingArea)
{
    this->isWaitingArea = isWaitingArea;
    next = nullptr;
    numCurrentCustomers = 0;

    

  

     
}


Table * Table::getNext()
{
    if(next == nullptr)
    {
        return nullptr;
    }
    else
    {
        return next;
    }
   
 


}



Table * Table::getPrev()
{
    if(prev == nullptr)
    {
        return nullptr;
    }
    else
    {
        return prev;
    }
 

   
}




void Table::setNext(Table * node)
{
    this->next = node;
}




void Table::setPrev(Table * node)
{
    if(node == nullptr)
    {
        return;
    }
    else
    {
        this->prev = node;
    }
}




std::string Table::getValue(std::string value)
{
    std::vector<Customer>::iterator it;

    for(size_t i = 0; i < customers.size(); i++)
    {
        if(customers[i]->getName() == value)
        {
            return customers[i]->getName();
        }
    }

    return "";




   
}





int Table::getMaxNumCustomers(bool value)
{
    if(value)
    {
        return maxExtendedNumCustomers;
    }
    else
    {
        return maxNumCustomers;
    }


}




int Table::getNumCurrentCustomers()
{
    return numCurrentCustomers;
}





bool Table::isFull(bool value)
{
    if(value)
    {
        if(this->numCurrentCustomers >= getMaxNumCustomers(value))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if(this->numCurrentCustomers >= maxNumCustomers)
        {
            // std::cout << "The table is fully occupied." << std::endl;
            // std::cout << "Please find alternative seating for the customers" << std::endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    
}


bool Table::isEmpty()
{
    if(this->numCurrentCustomers == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}





bool Table::isOccupied()
{
    if(this->numCurrentCustomers > 0 && this->numCurrentCustomers <= 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}



std::vector<Customer*> Table::getTable()
{
    return customers;
}




std::string Table::print()
{
    std::string people;
    std::vector<Customer*>::iterator it;
    for(size_t i = 0; i < customers.size(); i++)
    {
        people += customers[i]->getName() + "\n";
    }

    return people;
}





void Table::incrementNumCustomers()
{
    numCurrentCustomers++;
}



void Table::addCust(Customer * value)
{
    customers.push_back(value);
}



bool Table::getTableType()
{
    return isWaitingArea;
}


void Table::receive(std::string to,std::string message){
    std::cout<<" Table about to be serviced. Message: " << message <<std::endl;
 }

  void Table::send(){
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> dis(0, 1);

    
    int random_integer = dis(gen);
    std::string message = "";
    std::string to = "";
    std::cout << "Customer would you like to order now? " << std::endl;
    std::cout << "1.Yes" << std::endl;
    std::cout << "2.No" << std::endl;

     to=random_integer;
    if (to == "1") {
     to = "Waiter";
     message = "Please may we order";
    } else {
        return; 
    }

    mediator->notifications(to, message);
  }

 int Table::getWaiterNumber(){
    return waiter->getWaiterNumber();
 }
 
std::string Table::getClassname(){
    return "Table";
}



void Table::removeCustomers()
{
    customers.clear();
    numCurrentCustomers = 0;
}


void Table::callWaiter(ChefHandler* chef){
    Order * order= new Order(waiter->getWaiterNumber());
    for (auto customer: customers){
        customer->selectFoodItems(order);
    }
    waiter->takeOrder(order);
}



Waiter* Table::getWaiter(){
    return this->waiter;
}


void Table::leave(){
    setState();
    handleTableState();
}


void Table::order(){
    setState();
    handleTableState();
}

void Table::payBill(){
    setState();

    // if(tableState->toString()=="")
    //tableState
}

void Table::setState(){
    tableState = tableState->getNextState();
}

void Table::handleTableState(){
    tableState->handle(*this);
}







































































