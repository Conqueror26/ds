struct node
{
    int data;
    struct node *left;
    struct node *right;

};
struct node *insert(struct node *t,int x);
struct node * del(struct node*t, int x);
void inorder(struct node *t);
void levelorder(struct node *t);
struct node * find(struct node*t, int x);
struct node*findmin(struct node *t);
struct node*findmax(struct node *t);
int he(struct node *t);
void cl(struct node*t,int l);
int identical(struct node *t1,struct node *t2);
int complete(struct node*t,int i,int c);
int count(struct node *t);
int range(struct node *t,int l,int h);