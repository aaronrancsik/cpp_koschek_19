//
// Created by aaron on 11/19/19.
//

#include "CPhoneList.h"

CPhoneList::CPhoneList()
{
    m_iFirstEmpty=0;
}

int CPhoneList::Append(const Record & newRec)
{
    m_rArray[m_iFirstEmpty++] = newRec;

    if(m_iFirstEmpty<MAXITEM)
        return m_iFirstEmpty;

    return -1;
}


Record * CPhoneList::Search(char *key)
{
    /*
    for (int i = 0; i < m_iFirstEmpty; ++i) {
        if(!strcmp())
    }*/
    return nullptr;
}
