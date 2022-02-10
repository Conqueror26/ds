struct graph
{
    int vtx;
    int adj[20][20];
};
struct q
{
    int front;
    int rear;
    int arr[20];
    int n;
};
struct st
{
    int top;
    int ar[20];
    int n;
};
void create(struct graph *g);
void display(struct graph *g);
void bfs(struct graph *g,int start,struct q*q);
void dfs(struct graph *g,int start,struct st *s);
void init(struct q *q,int no);
void enq(struct q *q,int x);
int deq(struct q *q);
void push(struct st *s,int x);
int pop(struct st *s);
int getop(struct st*s);
void ini(struct st *s,int no);