//
// Created by aaron on 12/3/19.
//

#ifndef CVEZETO_H
#define CVEZETO_H

#include "CBaseDolgozo.h"

class CVezeto: public CBaseDolgozo
{
private:
    int mHetiBer;
public:
    CVezeto(char* nev, int hetiBer);
    CVezeto();
    virtual int Fizu();
    virtual  char* Nev();
    virtual void Feltolt();
};


#endif //CVEZETO_H
