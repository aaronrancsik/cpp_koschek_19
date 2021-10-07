//
// Created by aaron on 12/3/19.
//

#include "CBaseDolgozo.h"
#include <iostream>

using namespace std;

int CBaseDolgozo::Fizu()
{
    return 0;
}

CBaseDolgozo::CBaseDolgozo(char nev[])
{
    for (int i = 0; i < sizeof(mNev); ++i) {
        mNev[i] = nev[i];
    }

}
char *CBaseDolgozo::Nev()
{
    return mNev;
}
void CBaseDolgozo::Feltolt()
{
    cout<<"Nev: ";
    cin >> mNev;
}
CBaseDolgozo::CBaseDolgozo()
{

}
