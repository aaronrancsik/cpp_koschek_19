#include <iostream>
#include "stdio.h"
#include "Fifo.h"

using namespace std;
//null = logikai false
// newt ne lehessen tobbszor egymas utan hivni
// Push, tele van,nincs letrehozva
// Pop -1 -1 hiba minden mas ok


int main()
{
    //printf("%d",4);
    NewFifo(4);
    NewFifo(4);

    Push('a');
    Push('b');
    printf("%d\n", Pop());

    Push('c');
    printf("%d\n", Pop());
    printf("%d\n", Pop());

    DeleteFifo();

    return 0;
}