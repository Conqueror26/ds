#include<stdio.h>
#include"adt.h"
#include <stdlib.h>

void init(struct q *q,int no)
{
    q->n=no;
    q->rear=-1;
    q->front=-1;
}
void enq(struct q *q,int x)
{
    if(q->rear-q->front==q->n)
    {
       printf("FULL");

    }
    else
    {
        q->rear++;
        q->arr[q->rear]=x;
    }
}

int deq(struct q *q)
{
    if(q->rear==q->front)
    {
        printf("empty");
    }
    else
    {
        q->front++;
    }
    return q->arr[q->front];
}
void ini(struct st *s, int no)
{
    s->top=-1;
    s->n=no;
}
void push(struct st *s,int x)
{
    if(s->top==s->n-1)
    {
        printf("full");
    }
    else
    {
       s->top++;
       s->ar[s->top]=x;
    }
}
int pop(struct st *s)
{
    if(s->top==-1)
    {
        printf("empty");

    }
    else 
    {
        s->top--;
    }
    return s->ar[s->top];

    
}
int getop(struct st *s)
{
    if(s->top==-1)
    {
        printf("empty");

    }
    else
    {
        return s->ar[s->top];
    }

}



void create(struct graph *g)
{
    printf("enter number of vertices:");
    scanf("%d",&g->vtx);
   
    int ch;
    do{
        char edge[2];
        printf("Enter edge:");
        scanf("%s",edge);
        g->adj[edge[0]-'A'][edge[1]-'A']=1;
        printf("\nDo u want to  continue?");
        scanf("%d",&ch);
    }while(ch==1);
}
void display(struct graph *g)
{
for(int i=0;i<g->vtx;i++){
        for(int j=0;j<g->vtx;j++)
        printf("%d ",g->adj[i][j]);
        printf("\n");
}
}
void bfs(struct graph *g,int start,struct q *q)
{
    
     int visited[10]={0},i;
    enq(q,start);
    visited[start]=1;
    while(q->rear!=q->front)
    {
        int start = deq(q);
        
        printf("%c\t",start+65);
        for(i=0;i<10;i++)
        {
            if(g->adj[start][i]==1 && visited[i]==0)
            {
                enq(q,i);
                visited[i]=1;
            }
        }
    }


}
void dfs(struct graph *g,int start,struct st *s)
{
     int visited[10]={0}, i;
    
    
    printf("%c\t",start+65);
    visited[start]=1;
    push(s,start);
    while(s->top!=-1)
    {
        start =getop(s);
        for(i=0;i<10;i++)
        {
             if(g->adj[start][i]==1 && visited[i]==0)
             {
                 push(s,i);
                  printf("%c\t",i+65);
                   visited[i]=1;
                   break;

             }
        }
        if(i==10)
        {
           int p=pop(s);
        }
    }

}
