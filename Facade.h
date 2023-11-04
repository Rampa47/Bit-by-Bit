#ifndef FACADE_H
#define FACADE_H
#include "Restaurant.h"
#include "Waiter.h"
#include "MaitreD.h"
#include "PoultryChef.h"
#include "FryChef.h"
#include "BurgerChef.h"
#include "HeadChef.h"
#include "Customer.h"
#include "Table.h"
#include "Restaurant.h"
#include "Mediator.h"
#include <vector>
#include <queue>
#include <cstdlib>
using namespace std;

class Facade{
    static std::array<std::string, 150> names = {
        "C. Henson", "C. Key", "C. Grey", "A. Cooke", "G. Shipman", "B. Hendrix", "I. Maier", "C. Hacker", "S. Mcafee", "B. Crow",
        "M. Cantrell", "D. Acosta", "M. Ponder", "E. Hawley", "J. Hofer", "P. Desimone", "T. Beck", "A. Galindo", "M. Hunter", "K. Derosa",
        "M. Schindler", "S. Boss", "O. Forsythe", "E. Seibert", "B. Hinkle", "D. Busby", "G. Peace", "M. Montalvo", "D. McGovern", "C. Waddell",
        "C. Motley", "S. Zamora", "K. Zapata", "A. McCord", "T. Hancock", "W. Whittaker", "T. Hopkins", "A. Zimmerman", "V. Traylor", "N. Shultz",
        "H. Gaines", "L. Liu", "D. Peyton", "C. Earl", "T. Romero", "T. Richard", "F. Willson", "A. Hamlin", "K. Peyton", "N. McWilliams",
        "A. Willey", "Z. Aiken", "B. Hollingsworth", "A. Cross", "M. Butcher", "B. Brooks", "B. Thigpen", "D. Drake", "P. Pederson", "R. Lilly",
        "K. Forsythe", "K. Leigh", "M. Lucero", "K. Barone", "D. Currie", "B. Lincoln", "E. Muse", "K. Patrick", "F. Kendrick", "H. France",
        "T. Cardwell", "T. Lassiter", "M. Dowdy", "P. Doughty", "G. Olsen", "M. Lai", "J. Chase", "M. Gleason", "A. Baldwin", "A. Pease",
        "M. Slaughter", "E. Lowry", "R. Aiello", "D. Cain", "C. Marx", "M. Brockman", "T. Sepulveda", "M. Stark", "H. Pena", "K. Duggan",
        "A. Beavers", "C. Bethea", "A. Thompson", "A. Sneed", "T. Best", "A. Oliveira", "K. Sheffield", "J. Goff", "E. Langdon", "T. Salazar",
        "D. Chapman", "M. Hutchinson", "S. Packer", "A. Hargis", "D. Epstein", "K. Vick", "D. Murdock", "L. Noyes", "J. Thorpe", "L. Quarles",
        "A. Watson", "B. Timmons", "J. Buffington", "D. Bates", "D. Adame", "R. Layne", "N. Lazo", "Z. Burger", "K. Dougherty", "K. Driver",
        "I. Mojica", "D. Fulmer", "L. Welker", "J. Nevarez", "F. Schott", "K. Lerma", "M. Rider", "K. Stratton", "M. Smallwood", "B. Menendez",
        "M. McLeod", "S. Baumgartner", "A. Fuchs", "M. Miles", "E. Rubin", "R. Venegas", "L. Sullivan", "A. Colon", "A. McCloud", "D. Winslow",
        "A. Kidwell", "G. Reynoso", "S. Drury", "J. Clemens", "M. Moreno", "D. Rhoades", "B. Garner", "S. Patino", "B. Willey", "D. Falcon"
    };
    private:
        MaitreD* maitreD;
        queue<Customer*> customers;
        ChefHandler* orderhandler;
        vector<Waiter*> waiters;
        Restaurant* restaurant;
        Mediator* mediator;

    public:
        Facade(int tables);
        void execute();
        ~Facade();

};



#endif