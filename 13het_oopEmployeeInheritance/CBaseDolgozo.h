//
// Created by aaron on 12/3/19.
//

#ifndef CBASEDOLGOZO_H
#define CBASEDOLGOZO_H


class CBaseDolgozo
{
protected:
    char mNev[50];
public:
    CBaseDolgozo(char*  nev);
    CBaseDolgozo();
    virtual int Fizu();
    virtual  char* Nev();
    virtual void Feltolt();


};


#endif //CBASEDOLGOZO_H
