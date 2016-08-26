#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
#define MAX 1000000
typedef long int ll;
 
int main() 
{
    ll T,i,A[MAX],min=999999,size,cut,flag,curmin;
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld",&A[i]);
        if(A[i]<min)
            min=A[i];
    }
    size=T;
    while(size>0)
    {
        cut=0;
        flag=0;
        for(i=0;i<T;i++)
            {
             if(A[i]>0)
                {
                 cut++;
                 if(A[i]>=min)
                 {
                     A[i]-=min;
                     if(flag==0 && A[i]>0)
                        {
                         curmin=A[i];
                         flag=1;
                     }
                     else
                      curmin=A[i]<curmin && A[i]>0 ?A[i]:curmin;
                 }
                 else
                     A[i]=0;
              if(A[i]==0)
                     --size;
             }      
         }
        min=curmin;
        printf("%ld\n",cut);
    }
    return 0;
}