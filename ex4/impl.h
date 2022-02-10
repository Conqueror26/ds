#include "adt.h"
#include <stdio.h>
#include<stdlib.h>


void init(struct stack *s,int no)
{
  s->n=no;
  s->top=-1;


}
int isfull(struct stack *s)
{
if(s->top==s->n-1)
{
	return 1;
}
else{

	return 0;
}


}
int isempty(struct stack *s)
{

if(s->top==-1)
{

	return 1;
}
else 
	return 0;

}
void push(struct stack *s,int c)
{

if(isfull(s))
 	printf("\nSTACK IS FULL");
else{
	s->top++;
 	s->data[s->top]=c;
 }



}
void pop(struct stack *s)
{
if(isempty(s))
printf("empty");
else{
	s->top--;

	}


}
int getTop(struct stack *s)
{
if(isempty(s))
 printf("the stack is empty");
 else
 return s->data[s->top];
 printf("\n");

}
void display(struct stack *s)
{
int i;
for(i=s->n-1;i>=0;i--)
{
printf("%d\n",s->data[i]);

}
printf("\n");


}