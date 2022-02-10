#include "adt.h"
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void init(struct stackADT *s,int n)
{
    s->top=-1;
    s->size=n;
}
int isFull(struct stackADT *s)
{
    if(s->top>=s->size)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct stackADT *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stackADT *s,struct node *x)
{
    if(isFull(s))
    {
        printf("\nStack Overflow!!");
    }
    else
    {
      s->top++;
      s->data[s->top]=x;
    }
}
void pop(struct stackADT *s)
{
    if(isEmpty(s))
      {
     printf("underflow");
    }
   else
   {
    s->top--;
   }

}
struct node * top(struct stackADT *s)
{
    return s->data[s->top];
}
void display(struct stackADT *s)
{
    for(int i=s->top;i>=0;i--)
    {
        printf("\n%d",s->data[i]->c);
    }

}
void construct(struct ET *t,char c)
{
  if(!isdigit(c))
   {
      struct node *n1=top(t->S);
     pop(t->S);
      struct node *n2=top(t->S);
     pop(t->S);
    struct node *x=(struct node *)malloc(sizeof(struct node));
     x->left=n2;x->right=n1;x->c=c;
     push(t->S,x);
      t->t=top(t->S);
  }
  else
  {
    struct node *x=(struct node *)malloc(sizeof(struct node));
     x->left=NULL;x->right=NULL;x->c=c;
     push(t->S,x);
     t->t=top(t->S);
  }
}
void inorder(struct node *t)
{
   if(t->left!=NULL)
      inorder(t->left);
     printf(" %c ",t->c);
    if(t->right!=NULL)
       inorder(t->right);
}
void postorder(struct node *n)
{
	
	if(n->left!=NULL)
		postorder(n->left);


	if(n->right!=NULL)
		postorder(n->right);

	printf("%c ",n->c);
}
void preorder(struct node *n)
{
	printf("%c ",n->c);
	
	if(n->left!=NULL)
		preorder(n->left);


	if(n->right!=NULL)
		preorder(n->right);
}
 int evaluate(struct node *t)
 {
   if(isdigit(t->c))
       return ((int)(t->c)-48);
   else if(t->c=='+')
     return (evaluate(t->left)+evaluate(t->right));
    else if(t->c=='*')
     return (evaluate(t->left)*evaluate(t->right));
     else if(t->c=='-')
     return (evaluate(t->left)-evaluate(t->right));
      else if(t->c=='/')
     return (evaluate(t->left)/evaluate(t->right));
     }

