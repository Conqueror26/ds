#include "impl.h"
#include<stdlib.h>	
int main()
{
	int n;
        struct ET *t=(struct ET *)malloc(sizeof(struct ET));
	struct stackADT *s1=(struct stackADT *)malloc(sizeof(struct stackADT));
	init(s1,11);
        t->S=s1;
       char p[10];
       printf("enter expression:");
       scanf("%s",p);int i=0;
      while(*(p+i)!='\0')
      {
        construct(t,*(p+i));
        i++;
      }
        printf("inorder");
        inorder(t->t);
         printf("\n");
          printf("preorder");
         preorder(t->t);
         printf("\n");
         printf("postorder");
         postorder(t->t);
         printf("\n");
        
        printf("%c",t->S->data[t->S->top]->c);
        printf("\nevaluated answer: %d",evaluate(t ->t));
        printf("\n");
}
