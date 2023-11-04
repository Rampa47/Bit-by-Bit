#include "Waiter.h"
#include <iostream>
#include "Order.h" // Include necessary headers for other classes if used

Waiter::Waiter(int n)  {
    this->waiterNumber = n;
    this->order = nullptr;
    this->currentBillAmount=0.0;

    //greetCustomer();
}

void Waiter::greetCustomer() {
    cout<<"Good day and welcome to the resturant!"<<endl;
    cout<<"I am going to be your waiter for today"<<endl;
    cout<<"Sit back and enjoy the experience"<<endl;
}

void Waiter::presentMenu() {
int orderAttempts = 0;
bool readyToOrder = false;
string response;

    while (orderAttempts < maxOrderAttempts && !readyToOrder)
    {

        menu->displayMenu();

        cout << "Are you ready to order? (yes/no): ";
        cin >> response;

        if (response == "yes")
        {
            readyToOrder = true;
            //takeOrder(); uncomment

        }
        else if (response == "no")
        {
            orderAttempts++;

            if (orderAttempts < maxOrderAttempts)
            {
               cout << "No problem. I'll come back in 10 seconds." <<endl;
               this_thread::sleep_for(chrono::seconds(10));
               presentMenu();
            }
            else
            {
                cout << "I'm sorry, you've reached the maximum number of order attempts." << endl;
                cout<<"Please order something"<<endl;
                 //takeOrder(); uncomment
            }
        }
        else {
            cout << "Invalid response. Please specify 'yes' or 'no'." << endl;
        }
    }


}
void Waiter::handleComplaint(string c, int degree) 
{

    if(degree<3 && c.compare("Time")==0)
    {
        cout<<"I apologise for the wait we have caused.Thank you for your patience. Your order will be ready soon."<<endl;
        cout<<"Complaint handled by waiter."<<endl;
    }
    else
    {
        next->handleComplaint(c,degree);
    }

}
void Waiter::addNext(ComplaintsHandler* c)
{
    if(next==NULL)
    {
        next=c;
    }
    else
    {
        next->addNext(c);
    }
}

void Waiter::takeOrder(Order *order) 
{
  /* cout<<"Please enter the item number you'd like to order"<<endl;
   int itemNum,itemQuantity;
   cin>>itemNum;
   if(itemNum>=1 && itemNum<= menu->getMenuItemsSize())
   {
       //itemNum--;
       cout<<"Please enter the quantity"<<endl;
       cin>>itemQuantity;

       //order=new Order(this->waiterNumber , chef );
       if(itemNum==1)
       {
           int burgerOption;
          //order=new Order(this->waiterNumber , new BurgerChef );
          cout<<"Would you like a:"<<endl;
          cout<<"1)Beef Burger"<<endl;
          cout<<"2)Chicken Burger"<<endl;
          cout<<"Enter '1' or '2' for the option you want"<<endl;
          cin>>burgerOption;
          if(burgerOption==1)
          {
              for(int i=0 ; i< itemQuantity;i++) {
                  order->addFoodItem(new BeefBurger);
              }
              send("PoultryChef" , "Order is placed");
              updateBill( menu->getBurgerPrice(),itemQuantity);
          }
          else if(burgerOption==2)
          {
              for(int i=0 ; i< itemQuantity;i++) {
                  //   order->addFoodItem(new ChickenBurger);
              }
              send("PoultryChef" , "Order is placed");
              updateBill( menu->getBurgerPrice(),itemQuantity);
          }
          else
          {
              cout<<"Please enter a valid option"<<endl;
          }
       }
       else if(itemNum==2)
       {
           //ChefHandler * poultry = new PoultryChef;
           order=new Order(this->waiterNumber , new FryChef );
           int chipsOptions;
           cout<<"Would you like :"<<endl;
           cout<<"1)Plain Chips"<<endl;
           cout<<"2)Chips with sauce"<<endl;
           cout<<"Enter '1' or '2' for the option you want"<<endl;
           cin>>chipsOptions;
           if(chipsOptions==1)
           {
               for(int i=0 ; i< itemQuantity;i++) {
                   //   order->addFoodItem(new Plain);
               }
               send("PoultryChef" , "Order is placed");
               updateBill( menu->getChipsPrice(),itemQuantity);
           }
           else if(chipsOptions==2)
           {
               int sauceOptions;
               cout<<"Would you like :"<<endl;
               cout<<"1)Tomato Sauce"<<endl;
               cout<<"2)Jalapeno Sauce"<<endl;
               cout<<"Enter '1' or '2' for the option you want"<<endl;
               cin>>sauceOptions;

               if(sauceOptions==1)
               {
                   for(int i=0 ; i< itemQuantity;i++) {
                       //   order->addFoodItem(new Tomato);
                   }
                   send("PoultryChef" , "Order is placed");
                   updateBill( menu->getChipsPrice(),itemQuantity);
               }
               else if(sauceOptions==2)

                   for(int i=0 ; i< itemQuantity;i++) {
                       //   order->addFoodItem(new Jalapeno);
                   }
                   send("PoultryChef" , "Order is placed");
                   updateBill( menu->getChipsPrice(),itemQuantity);
               }
               else
               {
                   cout<<"Please enter a valid option"<<endl;
               }
           }
           else
           {
               cout<<"Please enter a valid option"<<endl;
           }

       }
       else if(itemNum==3)
       {
          // FoodItem *food = new Poultry;
           order=new Order(this->waiterNumber , new PoultryChef );
           for(int i=0 ; i< itemQuantity;i++) {
               // order->addFoodItem(food);
           }
           send("PoultryChef" , "Order is placed");
           order->handleTask();
           delete order;
           updateBill( menu->getChipsPrice(),itemQuantity);
       }
   else {
       cout<<"Invalid item number. Please choose a valid item"<<endl;
   }

*/
}

void Waiter::updateBill(double price , int quantity) {
    currentBillAmount += price *quantity;
}
void Waiter::receive(std::string to, std::string message) {
    cout << "Waiter #" << waiterNumber << " received message: '" << message << "' from " << to << endl;
    if(to=="Chef Handler" || to=="ChefHandler")
    {
        cout<<"***Waiter is heading to head chef***"<<endl;
    }
}

void Waiter::send(std::string to, std::string message) {
   // mediator.notify(to,message);
    cout << "Waiter #" << waiterNumber << " sent message: '" << message << "' to " << to << endl;
}

void Waiter::presentBill() {
    cout << " *** Waiter #" << waiterNumber << " is presenting the bill. ***" << endl;
    cout << "Your total bill amount is: R" << currentBillAmount << endl;
    cout << "What would you like to do?" << endl;
    cout << "1. Pay now" << endl;
    cout << "2. Create a tab" << endl;
    cout << "3. Ask for more time" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:

            handlePayment();
            break;
        case 2:
            createTab();
            break;
        case 3:
            cout << "No problem. Take your time. Let us know when you're ready to pay." << endl;
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, or 3." << endl;
            break;
    }

}

void Waiter::handlePayment() {
    int customerRating;
    cout << "Processing payment... Thank you for joining us!" << endl;
    cout<<"Before you go, please rate your experience out of 5:"<<endl ;
    cin>>customerRating;
    if(customerRating<3)
    {
        cout<<"We are sincerely apologise for the inconvenience you've experienced. We're committed to improving and ensuring a better experience in the future."<<endl;
        cout<<"To help us improve , please let us know what your biggest issue was:"<<endl ;
        cout<<"1)"<<endl;
    }
    cout<<"We hope to see you soon ;D"<<endl;
}

void Waiter::createTab() {
    cout << "Creating a tab for the customer. You can settle the bill later." << endl;
    string customerName;
    int custContact, custID;
    cout<<"Please enter your full name and surname "<<endl;
    cin>>customerName;
    cout<<"Please enter your contact number"<<endl;
    cin>>custContact;
    cout<<"Please enter your ID number"<<endl;
    cin>>custID;
     saveBillAmountToTextFile(currentBillAmount, customerName,custContact, custID);

}

void Waiter::saveBillAmountToTextFile(double billAmount ,string name , int contact,int ID) {

    ofstream file("tabs.txt");
    if (file.is_open()) {
        file << name << ID;
        file << contact;
        file << billAmount;
        file.close();
    } else {
        cout << "Error: Unable to save bill amount." << endl;
    }

}
void Waiter::retrieveBillAmountFromTextFile()  {
    double billAmount = 0.0;
    string custName ;
    int custContact, custId;
    ifstream file("tabs.txt");
    if (file.is_open()) {
        file >> custName >> custId;
        file >> custContact;
        file >> billAmount;
        file.close();
    } else {
        cout << "Error: Unable to retrieve bill amount." << endl;
    }
    this->currentBillAmount=billAmount;
    presentBill();

}
