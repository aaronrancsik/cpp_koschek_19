//
// Created by aaron on 12/3/19.
//

#include "CUgynok.h"

#include <iostream>

using namespace std;

int CUgynok::Fizu()
{
    return CDolgozo::Fizu()+(mJutalek*mEldadottDarab);
}
CUgynok::CUgynok(char *nev, int oraber, int ledolgozottOrak, int jutalek, int eladottDarab)
    : CDolgozo(nev, oraber, ledolgozottOrak),
    mJutalek(jutalek),
    mEldadottDarab(eladottDarab)
{

}
char *CUgynok::Nev()
{
    return CBaseDolgozo::Nev();
}
void CUgynok::Feltolt()
{
    CDolgozo::Feltolt();
    int jutalek;
    cout<<"Jutalek: ";
    cin >> jutalek;
    mJutalek = jutalek;

    int eladottDarabszam;
    cout<<"Eladott darabszam: ";
    cin >> eladottDarabszam;
    mEldadottDarab =eladottDarabszam;
}
CUgynok::CUgynok()
{

}
