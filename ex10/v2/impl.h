#include<stdio.h>
#include"adt.h"
#include <stdlib.h>


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
void bfs(struct graph *g,int start)
{
    int q[10],rear=-1,front=-1,i;
     int visited[10]={0};
    q[++rear]=start;
    visited[start]=1;
    while(rear!=front)
    {
        start=q[++front];
        
        printf("%c\t",start+65);
        for(i=0;i<10;i++)
        {
            if(g->adj[start][i]==1 && visited[i]==0)
            {
                q[++rear]=i;
                visited[i]=1;
            }
        }
    }


}
void dfs(struct graph *g,int start)
{
     int visited[10]={0};
    int st[10];
    int top=-1,i;
    printf("%c\t",start+65);
    visited[start]=1;
    st[++top]=start;
    while(top!=-1)
    {
        start =st[top];
        for(i=0;i<10;i++)
        {
             if(g->adj[start][i]==1 && visited[i]==0)
             {
                 st[++top]=i;
                  printf("%c\t",i+65);
                   visited[i]=1;
                   break;

             }
        }
        if(i==10)
        {
            top--;
        }
    }

}