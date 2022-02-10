struct node
{
    int exp;
    int coeff;
    struct node *next;

};

void  insertEnd(struct node  *p, int co, int ex);
void display(struct node *p);
struct node *polyAdd(struct node  *p1, struct node  *p2);
struct node *polyMul(struct node  *p1, struct node  *p2);
struct node *polySimplify(struct node  *p);
int polyDegree(struct node  *p);
void polyEvaluate(struct node  *p,int x);


