#include <stdio.h>
#include "impl.h"
#include<stdlib.h>
int main()
{
    struct node*p1=(struct node*)malloc(sizeof(struct node));
    struct node*p2=(struct node*)malloc(sizeof(struct node));
    struct node  *p3=(struct node*)malloc(sizeof(struct node));
   int d;
   struct node *p4=(struct node*)malloc(sizeof(struct node));
    
    
   
   p1->next =NULL;
   p2->next =NULL;
   p3 =NULL;
   p4 =NULL;
   
    int n,m,t=1,c,e,x;
  int choice;
 
  while(t==1){
     printf("1.Create 2 polynomials\n2.Display\n3.Multiply\n4.Simplify\n5.Degree\n6.Add\n7.Evaluate\n");
    printf("Choice:\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
      printf("enter the no.of terms in p1 and p2:");
      scanf("%d %d",&n,&m);
      printf("Enter the coeffecients and exponents of p1\n");
      while(n--){
        scanf("%d %d",&c,&e);
       insertEnd(p1,c,e);
      }
      printf("Enter the coeffecients and exponents of p2\n");
      while(m--){
        scanf("%d %d",&c,&e);
        insertEnd(p2,c,e);
      }
      break;
    case 2:
      printf("P1:");
      display(p1);
      printf("P2:");
      display(p2); 
      break;
    case 3:
      p3 = polyMul(p1,p2);
      
      break;
    case 4:
       p4 =polySimplify(p3);
      break;
    case 5:
    
    d=polyDegree(p3);
    printf("%d",d);
      break;
    case 6:
    polyAdd(p1,p2);
    break;
    case 7:
    printf("enter X:");
      scanf("%d",&x);
     // polyEvaluate(p4,x);
   
    break;

    default:
      printf("wrong choice");
      break;
    }
    printf("\nDo you want to continue?(1=YES/2=NO):\n");
    scanf("%d",&t);
  }
  return 0;
}