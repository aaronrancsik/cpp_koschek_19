//
// Created by aaron on 12/3/19.
//

#ifndef CDOLGOZO_H
#define CDOLGOZO_H

#include "CBaseDolgozo.h"

class CDolgozo : public CBaseDolgozo
{
protected:
    int mOraber;
    int mLedolgozottOrak;
public:
    CDolgozo(char* nev, int oraber, int ledolgozottOrak);
    CDolgozo();
    virtual int Fizu();
    virtual char* Nev();
    virtual void Feltolt();

};




#endif //CDOLGOZO_H
