/*===============================================================
*   Copyright (C) 2014 All rights reserved.
*   
*   file       :CDNode.h
*   author     :samzhang
*   create time:2014.05.12
*   description:
*
*   update log  :
*
================================================================*/
#ifndef _CDNODE_H
#define _CDNODE_H

class CDNode
{
public:
    CDNode();
    virtual ~CDNode();
    
    void SetNext(CDNode * pNext);
    CDNode * GetNext();
    CDNode * GetPrev();
    void SetPrev(CDNode * pPrev);
    void SetID(int iID);
    int GetID();
public:
    int      m_iID;
    CDNode * m_pNext;
    CDNode * m_pPrev;
};
#endif


