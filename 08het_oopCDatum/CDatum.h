//
// Created by aaron on 10/29/19.
//

#ifndef CDATUM_H
#define CDATUM_H


class CDatum{

    private:
    int m_iEv;
    int m_iHonap;
    int m_iNap;


    inline int max(int a, int b)
    {
        if(a > b)
            return a;
        return b;
    }

    inline int min(int a, int b)
    {
        if(a < b)
            return a;
        return b;
    }

    public:
        CDatum();
        CDatum(int ev, int honap, int nap);
        ~CDatum();

    void display();
};

#endif //CDATUM_H
