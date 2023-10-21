#ifndef MAITRE_D_H
#define MAITRE_D_H

class MaitreD
{
    public:
        MaitreD * instance();
        void seatCustomers();

    protected:
        MaitreD();
        MaitreD(MaitreD&);
        MaitreD & operator=(const MaitreD&);
    
    private:
        //static int uniqueInstance;
        static MaitreD * maitreD;
};

#endif