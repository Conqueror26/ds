#include<stdio.h>
#include<stdlib.h>
#include "impl.h"
int main()
{
struct node *t = (struct node *)malloc(sizeof(struct node));
struct node *t1 = (struct node *)malloc(sizeof(struct node));
struct node *m,*f,*d;
t=NULL;
t=insert(t,29);
t=insert(t,23);
t =insert(t,4);
t=insert(t,13);
t=insert(t,39);
t=insert(t,31);
t=insert(t,45);
t=insert(t,56);
t=insert(t,49);
printf("Inorder :\n");
inorder(t);
printf("\n");
printf("levelorder :\n");
levelorder(t);

int h;
h=he(t);
printf("%d",h);
printf("\n");

m=findmin(t);
printf("%d",m->data);
printf("\n");

printf("\n");
inorder(d);
t1=NULL;
t1=insert(t1,29);
t1=insert(t1,23);
t1 =insert(t1,4);
t1=insert(t1,13);
t1=insert(t1,39);
t1=insert(t1,31);
t1=insert(t1,45);
t1=insert(t1,56);
t1=insert(t1,49);
int l=identical(t,t1);
printf("%d",l);
int cn =count(t);
int c=complete(t,0,cn);
printf("%d",c);
int r=range(t,2,35);
printf("%d",r);



}
