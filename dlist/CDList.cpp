/*===============================================================
*   Copyright (C) 2014 All rights reserved.
*   
*   file       :CDList.cpp
*   author     :samzhang
*   create time:2014.05.12
*   description:
*
*   update log  :
*
================================================================*/
#include "CDList.h"
#include <stdio.h>

CDList::CDList()
{
    m_pHead = NULL;
    m_pTail = NULL;
}

CDList::~CDList()
{
    
}

int CDList::Insert(CDNode * pNode)
{
    
    if (NULL == pNode)
    {
        return -1;
    }

    if (NULL == m_pHead && NULL == m_pTail)
    {
        m_pHead = pNode;
        m_pTail = pNode;
        pNode->m_pPrev = NULL;
        pNode->m_pNext = NULL;
        return 0;
    }

    m_pTail->m_pNext = pNode;
    pNode->m_pPrev = m_pTail;
    pNode->m_pNext = NULL;

    m_pTail = pNode;
    return -1;
}

CDNode * CDList::Delete(int iID)
{
    if (NULL == m_pHead)
    {
        return NULL;
    }

    CDNode * pNode = m_pHead;
    while(NULL != pNode)
    {
        if (pNode->m_iID == iID)
        {
            if (pNode->m_pPrev == NULL)
            {
                m_pHead = pNode->m_pNext;
                return pNode;
            }
            else if (pNode->m_pNext == NULL)
            {
                pNode->m_pPrev->m_pNext = NULL;
                m_pTail = pNode->m_pPrev;
                return pNode;
            }
            else
            {
                pNode->m_pPrev->m_pNext = pNode->m_pNext;
                pNode->m_pNext->m_pPrev = pNode->m_pPrev;
                return pNode;
            }
        }

        pNode = pNode->m_pNext;
    }

    return NULL;
}

void CDList::Print()
{
    CDNode * pNode = m_pHead;

    while(NULL != pNode)
    {
        printf("ID:%d\n",pNode->GetID());
        pNode = pNode->m_pNext;
    }

}

void CDList::PrintReverse()
{
    CDNode * pNode = m_pTail;

    while(NULL != pNode)
    {
        printf("ID:%d\n",pNode->GetID());
        pNode = pNode->m_pPrev;
    }
    
}







