#include <stdio.h>
#include "impl.h"
#include <stdlib.h>
int main()
{
    struct graph *g=(struct graph *)malloc(sizeof(struct graph));
   
    create(g);
    display(g);
    printf("BFS\n");
   bfs(g, 0);
   printf("\n");
   printf("DFS\n");
   dfs(g,0);
   printf("\n");
    return 0;
}
