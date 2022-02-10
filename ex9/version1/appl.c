#include<stdio.h>
#include <stdlib.h>
#include "impl.h"
int main()
{
    struct PQ * p= (struct PQ *)malloc(sizeof(struct PQ));
    
insert(p,14);    
insert(p,16);
insert(p,22);    
insert(p,11);
insert(p,9);      
insert(p,18);
insert(p,10);    
insert(p,7);
insert(p,4);    
insert(p,1);


disp(p);
int d;
d=del(p);
disp(p);
d=del(p);
disp(p);


}