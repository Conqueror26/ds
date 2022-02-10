struct graph
{
    int vtx;
    int adj[20][20];
};
void create(struct graph *g);
void display(struct graph *g);
void bfs(struct graph *g,int start);
void dfs(struct graph *g,int start);