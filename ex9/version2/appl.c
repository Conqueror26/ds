#include<stdio.h>
#include <stdlib.h>
#include "impl.h"
int main()
{
    struct PQ * p= (struct PQ *)malloc(sizeof(struct PQ));
  
   
 insert(p,'A',15000);    
 insert(p,'K',12000); 
 insert(p,'R',4000);     
 insert(p,'T',3500); 
 insert(p,'L',4600);    
 insert(p,'P',6000);  
 insert(p,'Y',8500);          

 disp(p);
 del(p);
 del(p);
 del(p);
 del(p);
 
 
 

}