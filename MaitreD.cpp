#include "MaitreD.h"

MaitreD * MaitreD::instance()
{
    if(maitreD == nullptr)
    {
        maitreD = new MaitreD();
    }

    return maitreD;
}