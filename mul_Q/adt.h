struct queue
{
    int r[10];
    int f[10];
    int arr[10];
    int n;
};
void init(struct queue *s,int no,int rear[],int front[]);
void enqueue(struct queue *s,int x);
void display(struct queue *s);
void dequeue(struct queue *s);