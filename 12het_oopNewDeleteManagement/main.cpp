#include <iostream>

#include "CName.h"

using  namespace std;

int main()
{
    CName * names[MAXNAMES];

    char name[MAXNAME];
    int i;
    for(i = 0; i < MAXNAMES; i++)
    {
        cout << "\nN,v" << i+1<<":";
        cin>>name;
        names[i] = new CName(name);
    }

    for (i = 0; i < MAXNAMES; i++)
    {
        names[i]->Display();
        delete names[i];
    }


    return 0;
}