/*===============================================================
*   Copyright (C) 2014 All rights reserved.
*   
*   file       :main.cpp
*   author     :samzhang
*   create time:2014.05.12
*   description:
*
*   update log  :
*
================================================================*/
#include "CDList.h"
#include <string.h> 
#include <stdio.h> 

int main(int argc,char ** argv)
{
    CDList oList;
    for(int i = 0; i < 10; i++)
    {
        CDNode * pNode = new CDNode();
        
        if (NULL == pNode)
        {
            printf("new failed\n");
            return 0;
        }
        
        pNode->m_iID = i + 1;
        oList.Insert(pNode);
    }

    printf("print from head to tail\n");
    oList.Print();
    printf("print from tail to head\n");
    oList.PrintReverse();
    oList.Delete(5);
    printf("print after delete\n");
    oList.Print();

    return 0;
}
