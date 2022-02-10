#include "impl.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	struct q *p=(struct q *)malloc(sizeof(struct q));
	struct q *q1=(struct q *)malloc(sizeof(struct q));
    struct q *q2=(struct q *)malloc(sizeof(struct q));
    int n,i;

    printf("enter the lenght of queue:");
    scanf("%d",&n);
    printf("enter the data:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p->arr[i].j,&p->arr[i].t);
        
    }
    printf("\n");
    printf("the data is given below:\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",p->arr[i].j,p->arr[i].t);
    }
   
    
    struct job s1,s2,s3,s4,su1,su2,si1,si2;
     su1.t=0;
     su2.t=0;
     si1.t=1;
     si2.t=1;
    
    s1.j=p->arr[0].j;
    s1.t=p->arr[0].t;
    enq(q1,s1);
    

    
    for(i=1;i<n;i++)
    {
       if( (su1.t/si1.t )<(su2.t/si2.t) )
       {
           s2.j=p->arr[i].j;
           
           s2.t=p->arr[i].t;
           su1.t+=s2.t;
        
           enq(q1,s2);
           si1.t++;
           
           
       }
       else
       {
           s3.j=p->arr[i].j;
           s3.t=p->arr[i].t;
           su2.t+=s3.t;
           enq(q2,s3);
           si2.t++;
           

       }
    }

   
    
   
printf("QUEUE 1:\n");
disp(q1);
   
printf("\n");
printf("QUEUE 2:\n");
disp(q2);
    

    /*struct q *p=(struct q *)malloc(sizeof(struct q));
    struct job w1,w2,w3;
    init(p,3);
    w1.j=1;
    w1.t=2;
    enq(p,w1);
     w2.j=2;
    w2.t=5;
    enq(p,w2);
     w3.j=3;
    w3.t=27;
    enq(p,w3);
    disp(p);*/





}
//      (J1,2), (J2,4), (J3,8), (J4,5), (J5,2), (J6,7), (J7,4), (J8,3) (J9,6) & (J10,6)