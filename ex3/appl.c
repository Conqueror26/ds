#include <stdio.h>
#include <stdlib.h>
#include "impl.h"


int main()
{

struct list *h=(struct list *)malloc(sizeof(struct list));
struct list *p;
p=(struct list *)malloc(sizeof(struct list));
struct list *q=(struct list *)malloc(sizeof(struct list));

h->next =NULL;

int n,i;
char s[n];
printf("enter n:");
scanf("%d",&n);
printf("enter list:");
for(i=0;i<n;i++)
{
    scanf("%s",&s[i]);
}
for( i=0;i<n;i++)
{
    insertEnd(h,s[i]);
}
for( i=0;i<n;i++)
{
    create(p,s[i]);
}




printf("the doubly linked list is printed in forward and reverse direction:\n");
display(h);

printf("checking whether palindrome or not:\n");
pali(h,p);
vc(h);
printf("After Swapping\n");
swap(h,1);
printf("\n");


}