//
// Created by aaron on 12/3/19.
//

#include "CDolgozo.h"

#include <iostream>
using namespace std;

int CDolgozo::Fizu()
{
    return mOraber*mLedolgozottOrak;
}

CDolgozo::CDolgozo(char *nev, int oraber, int ledolgozottOrak)
    : CBaseDolgozo(nev),
    mOraber(oraber),
    mLedolgozottOrak(ledolgozottOrak)
{

}
char *CDolgozo::Nev()
{
    return CBaseDolgozo::Nev();
}
void CDolgozo::Feltolt()
{
    CBaseDolgozo::Feltolt();

    int oraber;
    cout<<"Oraber: ";
    cin >> oraber;
    mOraber = oraber;

    int ledolgozottOrakSzama;
    cout<<"Ledolgozott orak szama: ";
    cin >> ledolgozottOrakSzama;
    mLedolgozottOrak =ledolgozottOrakSzama;
}
CDolgozo::CDolgozo()
{

}
