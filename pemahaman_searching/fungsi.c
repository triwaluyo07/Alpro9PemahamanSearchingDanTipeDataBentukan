#include "header.h"
float searching(float data[],int cur,int arrsize,float cari)
    {
     if(data[cur]==cari)
        {
         return cur;
        }
     else if(cur>=arrsize)
        {
         return -1;
        }
     else
        {
         return searching(data,cur+1,arrsize,cari);
        }
    }
