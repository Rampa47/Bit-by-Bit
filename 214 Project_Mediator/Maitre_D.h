//
// Created by zethe on 2023/10/18.
//

#ifndef INC_214_PROJECT_MAITRE_D_H
#define INC_214_PROJECT_MAITRE_D_H
#include "Colleague.h"

class Maitre_D: public Colleague {
public:
    std::string getname();
    Maitre_D();
    void send(std::string to);
    std::string name;
};


#endif //INC_214_PROJECT_MAITRE_D_H
