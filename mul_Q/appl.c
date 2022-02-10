#include<stdlib.h>
#include<stdio.h>
#include"impl.h"



int main()
{
	struct queue *q =(struct queue *)malloc(sizeof(struct queue));

	
	int r[]={-1,5};
	int f[]={-1,5};
	init(q,5,r,f);
	enqueue(q,1);
	enqueue(q,2);
	enqueue(q,3);
	enqueue(q,4);
	enqueue(q,5);
	display(q);



}