#include<stdio.h>
#include<stdlib.h>
#include "impl.h"
int main()
{
struct node *t1 = (struct node *)malloc(sizeof(struct node));
struct node *t2 = (struct node *)malloc(sizeof(struct node));
struct node *m,*f,*d;
t1=NULL;
t1=insert(t1,10);
t1=insert(t1,5);
t1=insert(t1,50);
t1=insert(t1,1);
t1=insert(t1,40);
t1=insert(t1,100);


printf("Inorder :\n");
inorder(t1);
printf("\n");
printf("levelorder :\n");
levelorder(t1);
t2=NULL;
t2=insert(t2,10);
t2=insert(t2,5);
t2=insert(t2,50);
t2=insert(t2,1);
t2=insert(t2,40);
t2=insert(t2,100);

printf("**1=identical,0=not identical**\n");
int l=identical(t1,t2);
printf("%d",l);
printf("\n");
int cn =count(t1);
printf("**1=complete,0= incomplete**\n");
int c=complete(t1,0,cn);
printf("%d",c);
printf("\n");
int r=range(t1,5,45);
printf("the number of nodes in given range is: %d\n",r);
int r1=range(t1,1,45);
printf("the number of nodes in given range is: %d",r1);
printf("\n");



}


