//
// Created by aaron on 11/19/19.
//

#ifndef CPHONEITER_H
#define CPHONEITER_H


#include "CPhoneList.h"
class CPhoneIter
{
public:
    CPhoneIter(CPhoneList & m);
    Record * GetFirst();
    Record * GetPrev();
    Record * GetNext();
    Record * GetLast();
private:
    CPhoneList * const m_cpList;
    int m_iCurrIndex;
};



#endif //CPHONEITER_H
