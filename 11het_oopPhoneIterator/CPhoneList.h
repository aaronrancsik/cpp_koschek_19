//
// Created by aaron on 11/19/19.
//

#ifndef CPHONELIST_H
#define CPHONELIST_H

#define MAXITEM 100

struct Record
{
    char name[30];
    char number[10];
};

class CPhoneList
{
friend class CPhoneIter;

public:
    CPhoneList();
    int Append(const Record & newRec);
    Record * Search(char * key);
private:
    Record m_rArray[MAXITEM]; //max
    int m_iFirstEmpty;
};


#endif //CPHONELIST_H
