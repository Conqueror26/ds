#include <stdio.h>
#include "impl.h"
#include <stdlib.h>
int main()
{
    struct graph *g=(struct graph *)malloc(sizeof(struct graph));
     struct q *q=(struct q *)malloc(sizeof(struct q));
     struct st*s=(struct st *)malloc(sizeof(struct st));
   
    create(g);
    display(g);
    init(q,10);
    printf("BFS\n");
   bfs(g, 0,q);
   printf("\n");
   printf("DFS\n");
   dfs(g,0,s);
   printf("\n");
    return 0;
}
