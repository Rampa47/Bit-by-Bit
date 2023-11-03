#ifndef MAITRED_H
#define MAITRED_H
#include "Table.h"
#include "Restaurant.h"
#include "Customer.h"
#include "Colleague.h"

template <class T>
class MaitreD :public Colleague
{
    public:
        static MaitreD<T> * instance();
        void seatCustomers(Restaurant<T>& list, std::vector<Customer*> vect);
        void handleComplaint(std::string complaint);
        ~MaitreD();
         /**
         * @brief Receives message from Mediator .
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
       void receive(std::string to,std::string message,Colleague* me);
       /**
         * @brief Will allow Colleague to send a message to a specific Colleague through the Mediator.
         *
         * 
         */
     void send();
    std::string getClassname();
       

    protected:
        MaitreD();
        MaitreD(MaitreD&);
        MaitreD & operator=(const MaitreD&);
    
    private:
        //static int uniqueInstance;
        static MaitreD<T> * maitreD;
};

#endif