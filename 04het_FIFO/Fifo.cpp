//
// Created by aaron on 10/1/19.
//

#include "Fifo.h"

#include <stdlib.h>
#include <stdio.h>

static char* fifo = nullptr;
static int in;
static int out;
static int count;
static int size;

int NewFifo(int paramSize)
{
    if(fifo != nullptr || paramSize <= 0)
    {
        return  -1;
    }
    size = paramSize;

    count =0;
    in = 0;
    out =-1;


    fifo = (char*)malloc(paramSize); //char* majd void* lett
    if(fifo== nullptr){
        return NOK;
    }
    return 0;
}

void DeleteFifo()
{
    if(fifo!=NULL)
    {
        free(fifo);
        //fifo =NULL;
        count =0;
        in =0;
        out =0;
    }
}

int Pop()
{
    if(count > 0 && fifo)
    {
        count--;
        return fifo[++out % size];

    }
    else
    {
        //0x0ff & c
        return 1;
    }

}


int Push(char c)
{

    if(count < size && fifo)
    {
        fifo[in % size] = c;
        in++;
        count++;
    }
    else
    {
        return NOK;
    }

    return  OK;
}