#include "impl.h"
#include<stdlib.h>
int main()
{
	struct graph *G=(struct graph *)malloc(sizeof(struct graph));
	create(G,3,5,1);
	disp(G);
	floyd(G);
	int s=1,d=3;
	printf("\nPath from %d to %d: %d",s,d,s);
	int x=path(G,s-1,d-1);
	printf("\nShoretst dist: %d",x);
}