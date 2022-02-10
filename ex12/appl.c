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
    int ch,c;
    do
    {
        printf("1.Insert\n2.Display\n3.Selection sort\n4.Shell sort\n");
        printf("enter choice:");
        scanf("%d",&ch);

        

        switch(ch)
        {
            case 1:
            insert(t,x);
            break;
            case 2:
            display(t);
            break;
            case 3:
            sel(t);
            break;
            case 4:
            shell(t);
            break;
            default:
            printf("wrong choice");
            break;
        }
        printf("Do you want to continue[1=YES/2=NO]: ");
         scanf ("%d",&c);
    } while(c==1);
   

}