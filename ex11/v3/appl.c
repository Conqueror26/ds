#include <stdio.h>
#include <stdlib.h>
#include "impl.h"

int main()
{
    struct numberADT *t = (struct numberADT *)malloc(sizeof(struct numberADT));
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    init(t,n);
    printf("enter array:\n");
    int i;
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    insert(t,x);
    display(t);
    int a = ls(t,3);
    printf("%d\n",a);
    
    int c =ls(t,2);
    printf("%d\n",c);
    int d =se(t,3);
    printf("%d\n",d);
}