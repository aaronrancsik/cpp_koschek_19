//
// Created by aaron on 12/10/19.
//

#include <cstring>
#include "Allat.h"
void  Allat::Bevitel()
{

    cout<<"Becenev:";
    char tmp[25];
    cin >> tmp;
    mBecenev = new char[strnlen(tmp,25) +1];
    strcpy(mBecenev,tmp);
    //mBecenev = char[25];

}
void Allat::Kiiras()
{
    cout << "Becenev: " << mBecenev <<"\n";
}
char *Allat::GetNev()
{
    return mBecenev;
}
Allat::~Allat()
{
delete mBecenev;
}


