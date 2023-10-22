#include "MaitreD.h"

MaitreD * MaitreD::instance()
{
    if(maitreD == nullptr)
    {
        maitreD = new MaitreD();
        Classname="MaitreD";
    }

    return maitreD;
}
void MaitreD::receive(std::string to,std::string message){
  std::cout<<"MaitreD Message: "<<message<<std::endl;
}
void MaitreD::send(std::string to,std::string message){
    
    mediator.notify(to,message);
}
