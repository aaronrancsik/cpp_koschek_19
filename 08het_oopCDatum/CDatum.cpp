//
// Created by aaron on 10/29/19.
//

#include <iostream>
using  namespace std;

#include "CDatum.h"

//def conc init
//SET, GET

CDatum::CDatum(){
    m_iEv =1970;
    m_iHonap =1;
    m_iNap =1;
}

CDatum::CDatum(int ev_, int honap_, int nap_)
{

    static int hossz[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    m_iEv = 1970;
    m_iHonap = 1;
    m_iNap = 1;

    if(ev_ >= 1970)
    {
        m_iEv = ev_;
    }

    if(honap_ >= 1 && honap_ <= 12)
    {
        m_iHonap = honap_;
    }

    m_iNap = max(1, nap_);
    m_iNap = min(m_iNap, hossz[honap_]);

}

CDatum::~CDatum()
{}

void CDatum::display()
{
    static const char* m_iHonapok[] = {"?","Januar", "Februar", "Marcius", "Aprilis", "Majus", "Junius", "Julius", "Augusztus", "Szeptember", "Oktober", "November", "December"};
    cout << m_iEv << ". " << m_iHonapok[m_iHonap] << ". " << m_iNap<<". " << endl;
}