#include "adt.h"
#include <stdio.h>
#include<stdlib.h>
#include <math.h>


void insertEnd(struct node  *p, int co, int ex)
{
    struct node *ptr;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
   
    temp->coeff=co;
    temp->exp=ex;
    temp->next =NULL;
    
    if (p==NULL)
    {
      ptr=p;
    }
    else{
      for(ptr=p;ptr->next!=NULL;ptr=ptr->next);
   
   ptr->next=temp;
    }
    
}
   


void display(struct node *p)
{
    struct node *temp  = (struct node*)malloc(sizeof(struct node));
    printf("\nthe polynomial is:");
    
    for(temp=p->next;temp!=NULL;temp=temp->next)
    {
        printf(" %dx^%d +",temp->coeff,temp->exp);
    }
}
struct node * polyAdd(struct node *p1,struct node *p2){
  struct node *p3,*s1,*s2;
  p3 = (struct node *)malloc(sizeof(struct node));
  p3->next = NULL;

  s1=p1;
  s2=p2;
  while(s1 && s2){
    if(s1->exp==s2->exp){
      int c=s1->coeff+s2->coeff;
      insertEnd(p3,c,s2->exp);
      s1 = s1->next;
      s2 = s2->next;
    }
    else{
      if(s1->exp>s2->exp){
         insertEnd(p3,s1->coeff,s1->exp);
        s1 = s1->next;
      }
      else{
        insertEnd(p3,s2->coeff,s2->exp);
        s2 = s2->next;
      }
    }
  }
  while(s1 || s2){
    if(s1){
       insertEnd(p3,s1->coeff,s1->exp);
      s1 = s1->next;
    }
    else if(s2){
       insertEnd(p3,s2->coeff,s2->exp);
      s2 = s2->next;
    }
  }
  printf("\nSUM\n");
  display(p3) ;
}
struct node *polyMul(struct node  *p1, struct node  *p2)
{

  struct node *s1;
  struct node *s2;
  int s3,s4;

  struct node *p3=(struct node*)malloc(sizeof(struct node));
  p3->next=NULL;
  
  for(s1=p1;s1!=NULL;s1=s1->next){

   
    for(s2=p2;s2!=NULL;s2=s2->next){
      
      
       s3=s1->coeff*s2->coeff;
       s4=s1->exp+s2->exp;
       insertEnd(p3,s3,s4);
       
       
    }
    
     
     
  }
  printf("\nProduct\n");
   display(p3);
   return p3;
  
  
}
int polyDegree(struct node *p){
  struct node *ptr;
  int d=0;
   for(ptr=p->next;ptr!=NULL;ptr=ptr->next){
   if(d<ptr->exp)
   d=ptr->exp;
   }
   
   return d;
 
}
/*void polyEvaluate(struct node  *p,int x)
{
  printf("checking");
  struct node*ptr=(struct node*)malloc(sizeof(struct node));
  int sum=0;
  for(ptr=p->next;ptr!=NULL;ptr=ptr->next)
  {
    sum+=ptr->coeff*(pow(x,ptr->exp));
  }
  printf("\nsum=");
  printf("%d",sum);}*/

struct node *polySimplify(struct node  *p)
{
  

  int x=polyDegree(p);
  int arr[100]={0};
  struct node *s;
  for(s=p->next;s!=NULL;s=s->next)
    arr[s->exp]+=s->coeff;
    
  
  struct node * R=(struct node*)malloc(sizeof(struct node));
  R->next=NULL;
  for(int i=x;i>=0;i--)
  {
    insertEnd(R,arr[i],i);  
  }
  display(R);

}


