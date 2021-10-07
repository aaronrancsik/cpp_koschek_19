//
// Created by aaron on 12/10/19.
//

#ifndef ELEFANT_H
#define ELEFANT_H

#include "Zebra.h"

class Elefant: public Zebra
{
public:
    void virtual Bevitel();
    void virtual Kiiras();
private:
    int mOntozoKapacitas;
};


#endif //ELEFANT_H
