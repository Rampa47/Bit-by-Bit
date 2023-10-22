#ifndef MAITRE_D_H
#define MAITRE_D_H
#include "Colleague.h"
class MaitreD : public Colleague
{
    public:
        MaitreD * instance();
        void seatCustomers();

    protected:
        MaitreD();
        MaitreD(MaitreD&);
        MaitreD & operator=(const MaitreD&);
         void receive(std::string to,std::string message);
         void send(std::string to,std::string message);
    
    private:
        //static int uniqueInstance;
        static MaitreD * maitreD;

};

#endif