


#include "Table.h"
#include <iostream>
#include <random>

#include "ThreadSleep.h"

#include "EmptyTable.h"

int Table::waiterNumberToTable = 0;

Table::Table()
{
    next = nullptr;
    numCurrentCustomers = 0;
    isWaitingArea = false;
    className="Table";
    waiter= nullptr;  
    tableState= new EmptyTable(); 
    tableNumber= currTableNo++;
    
}

void Table::setWaiter(Waiter* w)
{
    waiter=w;
    waiter->setTable(this);
}


Table::Table(bool isWaitingArea)
{
    this->isWaitingArea = isWaitingArea;
    next = nullptr;
    numCurrentCustomers = 0;
    tableState = new EmptyTable(); 
    tableNumber= currTableNo++;
     
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
    people="The customers on the table "+to_string(tableNumber)+": \n"+people+"\n";
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
    std::cout<<message <<std::endl;
 }

void Table::send(){
    mediator->notifications("Waiter", message);
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


void Table::callWaiter(){
    Order * order= new Order(waiter->getWaiterNumber());
    for (auto customer: customers){
        ThreadSleep::threadSleep(500);
        customer->selectFoodItems(order);
    }
    ThreadSleep::threadSleep();
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
    TableState* current= tableState;
    tableState = tableState->getNextState();
    delete current;
}

TableState* Table::getState(){
    return tableState;
/**
 * @throws exception of type string - if there are currently no customers at the table
 * @note There will always be a customer who is chosen as the payer (at random) when this method is called
*/
}
BillComponent* Table::generateBill(){
    if(customers.size() <= 0) throw "There are no customers, currently at the table, to pay the bill";

    //get random payer from table
    std::string payerName = this->customers[rand()%customers.size()]->getName();
    
    //create and populate internal, CompositeBillPayer node
    CompositeBillPayer* billPayer = new CompositeBillPayer(payerName);
    for(Customer* c : customers){
        billPayer->addBill(c->getBill());
    }

    //add CompositeBillPayer node(s) to 'root' node
    DelegatingCompositeBill* encompassingBill = new DelegatingCompositeBill({billPayer});

    //randomly decide whether tab is opened
    int openTab = rand()%2;
    encompassingBill->openTab(openTab);

    return encompassingBill;
}

void Table::handleTableState(){
    tableState->handle(*this);
}

int Table::currTableNo=1;
int Table::getTableNumber(){
    return tableNumber;
}

Table::~Table(){
    if (tableState!=NULL) delete tableState;
    if (c!=NULL) delete c;
}

void Table::IsEverythingOkay(ComplaintsHandler* CH)
{
    cout<<"MaitreD asks if table is okay..."<<endl;
    int okay = ThreadSleep::generateRandomNumber(0,1);
    if(okay==1)
    {
        cout<<"Table is okay..."<<endl;
    }
    else
    {
        cout<<"Table is not okay..."<<endl;
        int degree = ThreadSleep::generateRandomNumber(1,10);
        int complaint= ThreadSleep::generateRandomNumber(2,4);
        if(complaint==2)
        {
            if(c==NULL)
            {
               c= new TimeComplaint(CH,degree);
               c->AddressComplaint();
            }
            else
            {
                if(c->getname()=="Time")
                {
                    c->setDegree(6);
                    c->AddressComplaint();
                }
                else
                {
                    delete c;
                    c= new TimeComplaint(CH,degree);
                    c->AddressComplaint();
                }
                
            }
            
        }
        else if(complaint==3)
        {
            if(c==NULL)
            {
               c= new FoodComplaint(CH,degree);
               c->AddressComplaint();
            }
            else
            {
                if(c->getname()=="Food")
                {
                    c->setDegree(6);
                    c->AddressComplaint();
                }
                else
                {
                    delete c;
                    c= new FoodComplaint(CH,degree);
                    c->AddressComplaint();
                }
                
            }
        }
        else{

            if(c==NULL)
            {
               c= new ServiceComplaint(CH,degree);
               c->AddressComplaint();
            }
            else
            {
                if(c->getname()=="Service")
                {
                    c->setDegree(6);
                    c->AddressComplaint();
                }
                else
                {
                    delete c;
                    c= new ServiceComplaint(CH,degree);
                    c->AddressComplaint();
                }
                
            }
        }
    }
}





































































