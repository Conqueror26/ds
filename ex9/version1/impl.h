
#include "adt.h"
#include <stdio.h>

void init(struct PQ *p,int no)
{
    p->n=no;
   
}
void insert(struct PQ *p,int x)
{
   int i;
   if(p->arr[p->n]==p->n-1)
   {
       return;
   }
   for(i=++p->n;p->arr[i/2]>x;i/=2)
   
       p->arr[i]=p->arr[i/2];
        p->arr[i]=x;
   
}
void disp(struct PQ*p)
{
    int i;
    for(i=1;i<p->n+1;i++)
    {
        printf("%d\t",p->arr[i]);
    }
    printf("\n");
}
int del(struct PQ*p)
{
    int i;
    int c;
    int m= p->arr[1];
    int l=p->arr[p->n--];
   for(i=1;i*2<=p->n;i=c)
   {
       c=i*2;
       if(c!=p->n && p->arr[c+1]<p->arr[c])
       {
           c++;
       }
       if(l>p->arr[c])
       {
           p->arr[i]=p->arr[c];
       }
       else
       break;
   }
    
    p->arr[i]=l;
    return m;
   
   }

