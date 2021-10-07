//
// Created by aaron on 11/26/19.
//

#ifndef CNAME_H
#define CNAME_H

#include <iostream>
#include <stdio.h>
#include <string.h>

#define  MAXNAMES 5
#define  MAXNAME 25

using  namespace std;
class CName
{
public:
    CName(const char *s)
    {
        strncpy(m_szName, s, MAXNAME);
    }
    void Display() const
    {
        cout << '\n' << m_szName;
    }

    void *operator new(size_t size);
    void operator delete(void * ptr);

private:
    char m_szName[MAXNAME + 1];
};


#endif //CNAME_H
