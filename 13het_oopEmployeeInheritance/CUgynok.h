//
// Created by aaron on 12/3/19.
//

#ifndef CUGYNOK_H
#define CUGYNOK_H

#include "CDolgozo.h"

class CUgynok: public CDolgozo
{
private:
    int mJutalek;
    int mEldadottDarab;
public:
    CUgynok(char* nev, int oraber, int ledolgozottOrak, int jutalek, int eldaottDarab);
    CUgynok();
    virtual int Fizu();
    virtual  char* Nev();
    virtual void Feltolt();
};


#endif //CUGYNOK_H
