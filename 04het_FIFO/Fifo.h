//
// Created by aaron on 10/1/19.
//

#ifndef FIFO_H
#define FIFO_H

#define OK 0
#define NOK -1

int NewFifo(int paramSize);
void DeleteFifo();
int Push(char c);
int Pop();

#endif //FIFO_H
