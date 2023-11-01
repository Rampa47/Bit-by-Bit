#ifndef MEDIATOR_H
#define MEDIATOR_H
#include <iostream>
#include "Colleague.h"
class Colleague;
/**
 * @class Mediator
 *
 * @brief Responsible for the interaction between Colleagues.It delegates communication between Colleagues.
 */
class Mediator
{
    public:
      virtual ~Mediator();
      /**
         * @brief This function will search for the colleague that the message is directed to and send the message to the colleague.
         *
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
       void notifications(std::string to,std::string message,Colleague* me);
       /**
         * @brief This function aims to add a colleague (that has chosen to be subscribed or recognised by the Mediator) to its "database".
         *
         * @param colleague the concrete Colleague to be added to the "Database".
         * 
         */
       void registerMe(Colleague* colleague);
    
    private:
    
     std::vector<Colleague*> ChefAndMaitreD;//holds the Colleagues that has subscribed to the Mediator specifically the Maitre D and the Chef
     std::vector<Colleague*> TablesAndWaiters;//holds the Colleagues that has subscribed to the Mediator specifically the Tables and the Waiters
};

#endif