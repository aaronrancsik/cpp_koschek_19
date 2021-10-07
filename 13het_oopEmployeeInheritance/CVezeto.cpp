//
// Created by aaron on 12/3/19.
//

#include "CVezeto.h"

#include <iostream>

using namespace std;

CVezeto::CVezeto(char* nev, int hetiBer)
    : CBaseDolgozo(nev),
    mHetiBer(hetiBer)
{

}
int CVezeto::Fizu()
{
    return mHetiBer;
}
char *CVezeto::Nev()
{
    return CBaseDolgozo::Nev();
}
void CVezeto::Feltolt()
{
    CBaseDolgozo::Feltolt();
    int hetiBer;
    cout<<"Heti ber: ";
    cin >> hetiBer;
    mHetiBer =hetiBer;
}
CVezeto::CVezeto()
{

}
