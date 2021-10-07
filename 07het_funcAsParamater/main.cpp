#include <iostream>

using namespace std;

int ext_i =10;

int & f()  //ref ad vissza
{
    return (ext_i);
}

int main()
{
    int i = 0;
    int &ref = i;

    cout << endl;
    cout << "ext: " << ext_i;

    cout << endl;
    cout << "i: " <<i;

    cout<<endl;
    cout<<"ref: "<<ref;


    i = f();

    cout << endl;
    cout << "ext: " << ext_i;

    cout << endl;
    cout << "i: " <<i;

    cout<<endl;
    cout<<"ref: "<<ref;

    f() = 5;

    cout << endl;
    cout << "ext: " << ext_i;

    cout << endl;
    cout << "i: " <<i;

    cout<<endl;
    cout<<"ref: "<<ref;

    return 0;
}

/*

 * exterb
 * auto blokkon beul
 * static kulso
 * sttaic belso
 * param
 * param ref

 */