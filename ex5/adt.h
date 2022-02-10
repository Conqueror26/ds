struct job 
{
   int  j;
   int t;
};
struct q
{
    struct job arr[20];
    int n;
    int front;
    int rear;
};
void init(struct q*s,int no);
int isempty(struct q *s);
int isfull(struct q *s);
void enq(struct q*s,struct job j);
struct job deq(struct q *s,struct job j);
void disp(struct q*s);



