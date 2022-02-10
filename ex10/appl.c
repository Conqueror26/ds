#include "impl.h"
#include<stdio.h>
#include<stdlib.h>



int main(){
    city *c = (city *)malloc(sizeof(city));
    create(c);
    dis(c);
    printf("Path Checking:\n");
    path(c,'A','B');
    path(c,'D','A');
    printf("\n");
    printf("Connected Components:\n");
    concomp(c);
    return 0;
}