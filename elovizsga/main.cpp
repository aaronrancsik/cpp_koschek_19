#include <iostream>
#include <cstring>

#include "Allat.h"
#include "Lo.h"
#include "Zebra.h"
#include "Elefant.h"
#include "Vereb.h"
#include "Sas.h"

#define MERET 5
Allat * allatKeret[MERET];
int ii =0;

using namespace std;


void Bevitel();
void TulajonsagListazas();
void Nevsor();
void Kilepes();

int main()
{
    char menu =0;
    while (menu!='4')
    {
        cout << "1. Bevitel\n";
        cout << "2. Tulajdonsagok becenev alapjan\n";
        cout << "3. Nevsor\n";
        cout << "4. Kilepes\n";

        cin >>menu;
        switch(menu){
            case '1':
                Bevitel();
                break;
            case '2':
                TulajonsagListazas();
                break;
            case '3':
                Nevsor();
                break;
            case '4':
                break;
            default:
                cout<<"Nincs ilyen lehetoseg\n";
        }
    }

    Kilepes();


    return 0;
}

void Kilepes(){
    for (int i = 0; i < ii; ++i) {
        delete allatKeret[i];
    }
}

void Nevsor(){
    cout<<"Nevsor:\n";
    for (int i = 0; i < ii; ++i) {
        cout<< allatKeret[i]->GetNev()<<"\n";
    }
}

void TulajonsagListazas(){
    cout<<"Kereses! Becenev:";
    static char keres[25];
    cin >> keres;
    for (int i = 0; i <ii; ++i) {
        char * tmp = allatKeret[i]->GetNev();
        int len = strnlen(tmp,25);

        if( !strncmp(tmp, keres, len))
        {
            allatKeret[i]->Kiiras();
        }
    }
}

void Bevitel(){
    char almenu=0;

    cout<<"1. Lo\n";
    cout<<"2. Zebra\n";
    cout<<"3. Elefant\n";
    cout<<"4. Vereb\n";
    cout<<"5. Sas\n";

    cin >> almenu;

    if(ii<MERET){
        switch (almenu)
        {
            case '1':
                allatKeret[ii] = new Lo();
                break;
            case '2':
                allatKeret[ii] = new Zebra();
                break;
            case '3':
                allatKeret[ii] = new Elefant();
                break;
            case '4':
                allatKeret[ii] = new Vereb();
                break;
            case '5':
                allatKeret[ii] = new Sas();
                break;
            default:
                cout<<"Nincs ilyen lehetoseg\n";
                break;
        }
        allatKeret[ii++]->Bevitel();

    }


}
