//
// Created by aaron on 12/10/19.
//

#ifndef ALLAT_H
#define ALLAT_H

#include <iostream>

using namespace std;

class Allat
{
public:
    char * GetNev();
    void virtual Bevitel();
    void virtual Kiiras();
    virtual ~Allat();
protected:
    char * mBecenev;
};


#endif //ALLAT_H
