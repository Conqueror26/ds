#include "adt.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void init(struct arr *ptr,int no)
{
    ptr->n =no;
}

void c(struct student *s)
{


  
  int i;
    printf("enter regno:");
    scanf("%d",&s->regno);
    printf("enter name:");
    scanf("%s",s->name);
    printf("enter marks:\n");
    scanf("%d",&s->m1);
    scanf("%d",&s->m2);
    scanf("%d",&s->m3);
  

}


void display(struct arr *ptr)
{
  for(int i=0;i<ptr->n;i++)
  {
  printf("\n%d",ptr->a[i].regno);
  printf("\n%s",ptr->a[i].name);
  printf("\n%d",ptr->a[i].m1);
  printf("\n%d",ptr->a[i].m2);
  printf("\n%d",ptr->a[i].m3);
  printf("\n%d",ptr->a[i].total);
  printf("\n%c",ptr->a[i].res);
  
  
  

  }
}
void insertFront(struct arr *ptr,struct student s)
{ 
  c(&s);
  for(int i= ptr->n-1;i>0;i--)
  {
       ptr->a[i+1]=ptr->a[i];
  }
  ptr->a[0]=s;
  ptr->n++;
  
  

}
void insertEnd(struct arr *ptr,struct student s)
{ 
  c(&s);
  ptr->a[ptr->n]=s;
   
  ptr->n++;
  
  
  

}
void insertRegno(struct arr *ptr,struct student s,int r)
{
  int flag =0;int i,t;
  for(i=0;i<ptr->n;i++)
  {
     if (ptr->a[i].regno == r)
     {
       flag =1;
       printf("%d is present",r);
       flag =1;
       t=i;
      
     }
 
}
if (flag==0)
{
  printf("register number not found");
}
else
{
  for(i=ptr->n-1;i>t+1;i--)
  {
    ptr->a[i+1]=ptr->a[i];
  }
ptr->a[t+1]=s;
ptr->n++;
}
     
  


}
void delet(struct arr *ptr,int r){ 
    for(int i=0;i<ptr->n;i++)
    { 
        if(ptr->a[i].regno==r)
    {
         for(int j=i+1;j<ptr->n;j++)
         {
            ptr->a[j-1] = ptr->a[ j];
             } 
              ptr->n-=1;
} 
} 
}
struct arr searchName(struct arr *ptr,char name[10])
{ 
    struct arr m ;
     m.n=0;
     for(int i=0;i<ptr->n;i++)
     {
          if(strcmp(name,ptr->a[i].name)==0)
          { 
              m.a[m.n]=ptr->a[i]; 
              m.n++;
         }
     }
 return m;
}
void computeResult(struct arr *ptr)
{
  for(int i=0;i<ptr->n;i++)
  {
    int tot = ptr->a[i].m1+ptr->a[i].m2+ptr->a[i].m3;
    ptr->a[i].total=tot;
    if((tot/3)>=50)
    {
      ptr->a[i].res='P';
    }
    else {
      ptr->a[i].res ='F';
    }
  }
}

struct arr listResult(struct arr *ptr)
{
  struct arr m;
  m.n=0;
  for(int i=0;i<ptr->n;i++)
  {
    if(ptr->a[i].res =='P')
    {
      m.a[i]=ptr->a[i];
      m.n++;
    }
  

  }
  return m;

  
}
int listClass(struct arr *ptr)
{
  int count=0;
  for(int i=0;i<ptr->n;i++)
  {
      if(ptr->a[i].total>=90)
      {
        count++;
      }
  }
  printf("%d students have got first class",count);

}


