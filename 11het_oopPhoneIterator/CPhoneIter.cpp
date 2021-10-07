//
// Created by aaron on 11/19/19.
//

#include "CPhoneIter.h"

//azert igy mert konstanst nem lehet mdositani konstruktorbol
CPhoneIter::CPhoneIter(CPhoneList & m):m_cpList(&m)
{
    m_iCurrIndex = 0;
}

Record * CPhoneIter::GetFirst()
{
    m_iCurrIndex =0;
    if(m_cpList->m_iFirstEmpty>0)
    {
        return & m_cpList->m_rArray[0];
    }
    return nullptr;

}

Record *CPhoneIter::GetPrev()
{
    if(m_iCurrIndex>0)
    {
        return & m_cpList->m_rArray[--m_iCurrIndex];
    }
    return nullptr;
}

Record *CPhoneIter::GetNext()
{
    if(m_iCurrIndex < m_cpList->m_iFirstEmpty-1)
    {
        return & m_cpList->m_rArray[++m_iCurrIndex];
    }
    return nullptr;
}

Record *CPhoneIter::GetLast()
{
    m_iCurrIndex = m_cpList->m_iFirstEmpty-1;
    return & m_cpList->m_rArray[m_iCurrIndex];
}

