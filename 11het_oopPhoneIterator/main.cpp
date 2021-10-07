#include <iostream>
#include "CPhoneList.h"
#include "CPhoneIter.h"

using namespace std;

void Print(CPhoneList & pl);

int main()
{
    CPhoneList pl;
    Record rec;

    cout << "Name: ";
    cin >> rec.name;
    cout << "Number: ";
    cin>>rec.number;

    for (int j = 0; j < 4; ++j) {
        rec.number[0] =j+'0';
        rec.name[0]=j+'0';
        pl.Append(rec);
    }
    Print(pl);

    int matrix[3][] ={ {1,2}, {1,2} };


    return 0;
}

void Print(CPhoneList & pl)
{
Record * pRec;
CPhoneIter anIter(pl);
cout<<"\n\t\tList";

pRec = anIter.GetFirst();

while (pRec)
{
    cout << "\n" << pRec->name << " : " << pRec->number;
    pRec = anIter.GetNext();
}

}