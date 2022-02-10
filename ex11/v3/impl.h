#include "adt.h"
#include<stdio.h>


void init(struct numberADT *s,int no)
{
    s->n=no;
}
void insert(struct numberADT*s,int x[s->n])
{
   int i;
   for(i=0;i<s->n;i++)
   {
       s->a[i]=x[i];
   }
}
void display(struct numberADT *s)
{
    int i;
    for(i=0;i<s->n;i++)
    {
        printf("%d\t",s->a[i]);
    }
    printf("\n");
}
void sel(struct numberADT *s)
{
    
    int i=0;
    int pos;
    for(i=0;i<s->n;i++)
    {
       int sm=i;
       for(int j=i+1;j<s->n;j++)
       {
           if(s->a[j]<s->a[sm])
           {
               sm=j;
           }
       }
        
        int temp=s->a[sm];
           s->a[sm]=s->a[i];
           s->a[i]=temp;
        
    }
     display(s);
}
int ls(struct numberADT *s,int k)
{
    int i;
    for(i=0;i<s->n;i++)
    {
        if(s->a[i]==k)
        {
          return   i;
            
        }
        
           
        
        
    }
     return -1;
    
}
int bs(struct numberADT *s,int k)
{
    int i,b,m,e;
    b=0;
    e=s->n-1;
    while(b<=e)
    {
        m=(b+e)/2;
        if(s->a[m]==k)
        {
            return m;
            break;
        }
        else if(s->a[m]<k)
        {
           b=m+1;
        }
        else
        {
            e=m-1;
        }
    }
    if(b>e)
    {
        return -1;
    }
    

}
int se(struct numberADT *s,int k)
{
    int i,b,m,e;
    b=0;
    e=s->n-1;
    while(b<=e)
    {
        m=(b+e)/2;
        if(s->a[m]==k)
        {
            if(s->a[m-1]>k)
            return m-1;
            else
             return m+1;
            break;
        }
        else if(s->a[m]<k)
        {
           b=m+1;
        }
        else
        {
            e=m-1;
        }
    }
    if(b>e)
    {
        return -1;
    }
}