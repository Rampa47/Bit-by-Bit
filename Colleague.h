#ifndef COLLEAGUE_H
#define COLLEAGUE_H
#include <iostream>
#include "Mediator.h"
class Mediator;
/**
 * @class Colleague
 *
 * @brief Base class for Colleagues(Table,Waiter,ChefHandler and Maitre D).
 */
class Colleague
{
    public:
       virtual ~Colleague();
        /**
         * @brief Pure virtual function which insinuates that each derived class will perform their unique implementation of the function.
         *
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
       virtual void receive(std::string to,std::string message)=0;
       /**
         * @brief Pure virtual function which insinuates that each derived class will perform their unique implementation of the function.
         *
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
       virtual void send()=0;
       /**
         * @brief This function aims to attach the Colleague to the Mediator giving the colleague a gateway to communicate to other colleagues through the mediator
         *  or to be communicated to by other colleagues.
         *
         * @param mediator The pointer pointing at the current mediator that is being used by all the Colleagues to communicate with.
         * 
         */
       void reg(Mediator* mediator);
       /**
         * @brief Returns the concrete Colleagues name.
         */
        virtual std::string getClassname()=0;

    
    protected:
    Mediator* mediator;//holds the current instance of the mediator used by all the colleagues.
    std::string className;//holds the concrete class name of the Colleagues
};

#endif