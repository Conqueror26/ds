#include<stdlib.h>
#include<stdio.h>
#include"adt.h"

void init(struct queue *s,int no,int rear[],int front[])
{
	s->n=no;
	s->r[10]=rear[10];
	s->f[10]=front[10];
}
void enqueue(struct queue *s,int x)
{
	for(int i=0;i<s->n;i++)
	{
		if(s->r[i]==s->r[i+1]-1)
		{
			printf("overflow");
		}
	else
	{
		s->r[i]++;
		s->arr[s->r[i]]=x;
	}
	}
}
void display(struct queue *s)
{
	for(int i=0;i<s->n;i++)
	{
		printf("%d",s->arr[i]);
	}
}