
#include "adt.h"
#include <stdio.h>

void init(struct PQ *p,int no)
{
    p->n=no;
   
}
void insert(struct PQ *p,char x,int y)
{
   int i;
   if(p->arr[p->n]==p->n-1&&p->a[p->n]==p->n-1)
   {
       return;
   }
   for(i=++p->n;p->arr[i/2]>y ;i/=2)
   {
       p->arr[i]=p->arr[i/2];
        p->a[i]=p->a[i/2];
  }
       p->arr[i]=y;
       p->a[i]=x;
   

   
  
   
}
void disp(struct PQ*p)
{
    int i;
    for(i=1;i<p->n+1;i++)
    {
        printf("%c %d\n",p->a[i],p->arr[i]);
    }
    printf("\n");
}
void  del(struct PQ*p)
{
    int i;
    int c;
   if(p->arr[p->n]==0&&p->a[p->n]==0)
   {
       return;
   }
   
    int m= p->arr[1];
    char n=p->a[1];
    int l=p->arr[p->n--];
    char l1=p->a[p->n--];
    
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
           p->a[i]=p->a[c];
       }
       else
       break;
   }
    
    p->arr[i]=l;
    p->a[i]=l1;
    printf("%c %d\n",n,m);
   }

