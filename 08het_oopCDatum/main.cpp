#include <iostream>

#include "CDatum.h"


int main()
{
    CDatum datum;
    datum.display();

    CDatum datum2(1969,2,30);

    datum2.display();

    return 0;
}