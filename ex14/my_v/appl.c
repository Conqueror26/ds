#include<stdio.h>
#include "impl.h"
#include <stdlib.h>


int main()
{
    struct hash *H = (struct hash *)malloc(sizeof(struct hash));
    init(H,10);
   insertL(H,23);
   insertL(H,45);
   insertL(H,69);
   insertL(H,87);
   insertL(H,48);
   insertL(H,67);
   insertL(H,54);
   insertL(H,66);
   insertL(H,53);
   display(H);
}
