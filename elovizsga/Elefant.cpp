//
// Created by aaron on 12/10/19.
//

#include "Elefant.h"
void Elefant::Bevitel()
{
    Zebra::Bevitel();
    cout<<"Ontozo kapacitas:";
    cin>> mOntozoKapacitas;
}
void  Elefant::Kiiras()
{
    Zebra::Kiiras();
    cout << "Ontozo kapacitas: "<<mOntozoKapacitas<<"\n";
}
