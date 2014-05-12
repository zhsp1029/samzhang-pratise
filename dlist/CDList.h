/*===============================================================
*   Copyright (C) 2014 All rights reserved.
*   
*   file       :CDList.h
*   author     :samzhang
*   create time:2014.05.12
*   description:
*
*   update log  :
*
================================================================*/
#ifndef _CDLIST_H
#define _CDLIST_H

#include "CDNode.h"

class CDList
{
public:
    CDList();
    virtual ~CDList();

    int Insert(CDNode * pNode);
    CDNode * Delete(int iID);
    CDNode * Get(int iID);

    void Print();
    void PrintReverse();
private:
    CDNode * m_pHead;
    CDNode * m_pTail;
};

#endif


