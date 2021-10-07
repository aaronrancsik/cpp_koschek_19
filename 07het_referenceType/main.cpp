#include <iostream>

using namespace std;

struct nagystruktura
{
    int egesz;
    char szoveg[1000];

};
nagystruktura ns = {123, "Ez egy nagy struktura"};

void val(nagystruktura v);
void ptr(nagystruktura *p);
void ref(nagystruktura &r);

int main()
{
    int i =10;
    int & hiv_i = i;
    //alias
    //hasznalat elott mindig inic kell neki

    cout<< '\n' << &i << '\t' << &hiv_i;

    hiv_i++;

    cout << '\n' << i;

    cout<<'\n'<<"Fel 2"<<endl;

    val(ns);
    cout<<'\n'<<ns.egesz;

    ptr(&ns);
    cout<<'\n'<<ns.egesz;

    ref(ns);
    cout<<'\n'<<ns.egesz;

    return 0;
}

void val(nagystruktura v)
{
    cout<<'\n'<<v.egesz++;
    cout<<'\n'<<v.szoveg;
}

void ptr(nagystruktura * p)
{
    cout<<'\n'<<p->egesz++;
    cout<<'\n'<<p->szoveg;
}

void ref(nagystruktura & r)
{
    cout<<'\n'<<r.egesz++;
    cout<<'\n'<<r.szoveg;
}

//const ref cimszerint megy at es nem lehet modositan
//