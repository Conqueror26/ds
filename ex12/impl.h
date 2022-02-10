
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
void shell(struct numberADT *s)
{
    int gap;
    gap=(int)(s->n/2);
    while(gap>0)
    {
        for(int i=gap;i<s->n;i++)
        {
            int temp =s->a[i];
            int j=i-gap;
            while(j>=0 &&s->a[j]>temp)
            {
                s->a[j+gap]=s->a[j];
                j = j-gap;
            }
            gap=(int)(gap/2);
        }
    }
    display(s);
}
