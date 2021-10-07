#include <iostream>
#include "cstring"
using namespace std;

#include "CBaseDolgozo.h"
#include "CDolgozo.h"
#include "CUgynok.h"
#include "CVezeto.h"

#define MERET 5
CBaseDolgozo * adatok[MERET];
int ii=0;

void Bevitel();
void Nevsor();
void Kereses();


int main()
{
    char menu=0;
    while (menu!='4'){
        cout << "1. Bevitel\n";
        cout << "2. Nevsor\n";
        cout << "3. Adott dolgozo (nev alapjan) fizetese\n";
        cout << "4. Kilepes"<<endl;
        cin >> menu;


        switch (menu){
            case '1':
                Bevitel();
                break;
            case '2':
                Nevsor();
                break;
            case '3':
                Kereses();
                break;
        }
    }
    for (int i = 0; i < ii; ++i) {
        ;
        delete adatok[i];
    }

    return 0;
}

void Bevitel()
{
    char alMenu=0;
    cout << "1. Dolgozo\n";
    cout << "2. Ugynok\n";
    cout << "3. Vezeto"<<endl;
    cin >> alMenu;

    if(ii < MERET)
    {
        switch (alMenu)
        {
            case '1':
                adatok[ii] = new CDolgozo();
                break;
            case '2':
                adatok[ii] = new CUgynok();
                break;
            case '3':
                adatok[ii] = new CVezeto();
                break;
            default:
                return;
        }
        adatok[ii++]->Feltolt();
    }
}

void Nevsor()
{
    for (int i = 0; i < ii; ++i)
    {
        cout<<adatok[i]->Nev()<<" "<<adatok[i]->Fizu()<<" huf"<<endl;
    }
}

void Kereses(){
    cout << "Irja be keresett nevet: ";
    static char keres[10];
    cin>>keres;
    for (int i = 0; i < ii; ++i)
    {
        if(0 == strncmp(adatok[i]->Nev(), keres, 10))
        {
            cout<<adatok[i]->Fizu()<<"\n1";
        }
    }

}
