#include "adt.h"
#include<stdio.h>
#include<stdlib.h>
void init(struct hashADT *H,int n)
{
   H->size=n;
   for(int i=0;i<H->size;i++)
     H->arr[i]=999;
}
void insertElementLP(struct hashADT *H, int x)
{
   int h=x%H->size;
   if(H->arr[h]==999)
      H->arr[h]=x;
   else
   {
      for(int i=1;i<H->size;i++)
        if(H->arr[(h+i)%H->size]==999)
        {
          H->arr[(h+i)%H->size]=x;
          break;
        }
   }
}
int searchElementLP(struct hashADT *H, int key)
{
   int h=key%H->size;
   if(H->arr[h]==key)
     return 1;
   int i;
   while(i<H->size)
   {
         if(H->arr[(h+i)%H->size]==key)
           return 1;
         i++;  
   }  
   return -1;
}
void display(struct hashADT *H)
{
   printf("\n");
   for(int i=0;i<H->size;i++)
   {
     printf("%d-->",i);
     if(H->arr[i]==999)
       printf("\n");
     else  
       printf("%d\n",H->arr[i]);
   }  
}
void insertElementQP(struct hashADT *H, int x)
{
   int h=x%H->size;
   if(H->arr[h]==999)
      H->arr[h]=x;
   else
   {
      for(int i=1;i<H->size;i++)
        if(H->arr[(h+(i*i))%H->size]==999)
        {
          H->arr[(h+(i*i))%H->size]=x;
          break;
        }
   }  
}
int searchElementQP(struct hashADT *H, int key)
{
   int h=key%H->size;
   if(H->arr[h]==key)
     return 1;
   int i;
   while(i<H->size)
   {
         if(H->arr[(h+(i*i))%H->size]==key)
           return 1;
         i++;  
   }  
   return -1;
}
void insertElementDH(struct hashADT *H, int x)
{
   int h=x%H->size;
   if(H->arr[h]==999)
      H->arr[h]=x;
   else
   {
      for(int i=1;i<H->size;i++)
        if(H->arr[(h+i*(7-(x%7)))%H->size]==999)
        {
          H->arr[(h+i*(7-(x%7)))%H->size]=x;
          break;
        }

   }     
   
}
int searchElementDH(struct hashADT *H, int key)
{
  int h=key%H->size;
   if(H->arr[h]==key)
     return 1;
   int i;
   while(i<H->size)
   {
         if(H->arr[(h+(i*i))%H->size]==key)
           return 1;
         i++;  
   }  
   return -1;
}