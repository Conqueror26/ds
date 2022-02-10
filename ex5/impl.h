#include "adt.h"
#include <stdio.h>


void init(struct q *s ,int no)
{
    s->n=no;
    s->front =-1;
    s->rear=-1;
    

}

int isempty(struct q *s)
{
   if(s->front==-1 && s->rear ==-1)
   {
       return 1;
   }
   else 
   {
       return 0;
   }
   
}
int isfull(struct q*s)
{
    if(s->front==0 && s->rear==s->n-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enq(struct q *s,struct job j)
{
    if(isfull(s))
    {
        printf("overflow");
    }
    else if(isempty(s))
    {
        s->front=s->rear=0;
        s->arr[s->rear]=j;
    }
    else if(s->rear==s->n-1&& s->front!=0)
    {
        s->rear=0;
        s->arr[s->rear]=j;
    }
    else
    {
        s->rear++;
        s->arr[s->rear]=j;
    }

}

void disp(struct q *s)
{
    int i;
    if(isempty(s))
    {
        printf("it is empty");
    }
    else
    {
        
        if(s->front<s->rear)
            {
                for(i=s->front;i<=s->rear;i++)
                printf("%d %d\n",s->arr[i].j,s->arr[i].t);
                
            } 
            else{
                for(i=s->front;i<=s->n;i++)
                printf("%d %d\n",s->arr[i].j,s->arr[i].t);
                for(i=0;i<=s->rear;i++)
                printf("%d %d\n",s->arr[i].j,s->arr[i].t);
            }

    }
}
struct job deq(struct q*s,struct job j)
{

    int c;
   if(isempty(s))
   {
    printf("queue is empty");

   }
   else
   {
      j=s->arr[s->front];
      s->front++;
   }
   return j;
}

