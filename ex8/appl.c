#include <stdio.h>
#include "impl.h"
#include<stdlib.h>
int main()
{
    struct avl *t = (struct avl *)malloc(sizeof(struct avl));
    t=NULL;
    t=insert(t,23);
    t=insert(t,12);
     t=insert(t,13);
      t=insert(t,4);
     t=insert(t,45);
      t=insert(t,54);  
      inorder(t);
      printf("\n");
      lo(t);
}


