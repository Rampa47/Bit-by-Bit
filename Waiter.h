#ifndef WAITER_H
#define WAITER_H
#include "ComplaintsHandler.h"
#include "Colleague.h"

/**
 * @class Waiter
 *
 * @brief One of the handlers responsible for handling customer complaints.
 *
 */
class Waiter: public ComplaintsHandler , public Colleague
{
    public:
         int waiterNumber=0;
        /**
         * @brief Constructor with a parameter that instantiates a waiter number to the waiterNumber variable .
         */
        Waiter(int waiterNumberToTable);

        /**
         * @brief Destructor for the Waiter object.
         */
        virtual ~Waiter();

       /**
         * @brief Handle a customer complaint with a specified degree of severity.
         *
         * This function handles customer complaints based on their degree of severity and the type
         * of complaint. It provides responses and potential resolutions for different complaint types.
         *
         * @param c The type of the customer's complaint.
         * @param degree The degree of severity of the complaint.
         */
        void handleComplaint(string c, int degree);
        /**
         * @brief Receives message from Mediator .
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
         void receive(std::string to,std::string message,Colleague* me);
          /**
         * @brief Will allow Colleague to send a message to a specific Colleague through the Mediator.
         *
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
       void send();
       /**
         * @brief Gets the name of the concrete Class.
        
         */
         std::string getClassname();
        private:
         /**
         * @brief Constructor for a Waiter object.It is made private to prevent from being instantiated without a waiter number;
         */
          Waiter();
       
};
#endif
