/*===============================================================
*   Copyright (C) 2014 All rights reserved.
*   
*   file       :CDNode.c
*   author     :samzhang
*   create time:2014.05.12
*   description:
*
*   update log  :
*
================================================================*/
#include "CDNode.h"
#include <string.h>

CDNode::CDNode()
{
    m_pNext = NULL;
    m_pPrev = NULL;
    m_iID = -1;
}

CDNode::~CDNode()
{
    
}

void CDNode::SetNext(CDNode * pNext)
{
    m_pNext = pNext;
}

void CDNode::SetPrev(CDNode * pPrev)
{
    m_pPrev = pPrev;
}

CDNode * CDNode::GetNext()
{
    return m_pNext;
}

CDNode * CDNode::GetPrev()
{
    return m_pPrev;
}

void CDNode::SetID(int iID)
{
    m_iID = iID;
}

int CDNode::GetID()
{
    return m_iID;
}


