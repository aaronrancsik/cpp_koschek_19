//
// Created by aaron on 11/26/19.
//

#include "CName.h"

char array[MAXNAMES][sizeof(CName)];

int mask[MAXNAMES];

void* CName::operator new(size_t size)
{
    for (int i = 0; i < MAXNAMES; i++)
    {
        if(mask[i]==0)
        {
            mask[i] =1;
            return array[i];
            //return array+i
        }
    }
    return NULL;
}

void CName::operator delete(void *ptr)
{
    //array[(char *)ptr-array[0] / sizeof(CName)] =0;
    for (int i = 0; i < MAXNAMES; i++)
    {
        if(array[i]==ptr)
        {
            mask[i] = 0;
        }
    }
}
