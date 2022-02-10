struct tree 
{
    char data;
    struct tree *l;
    struct tree *r;
};
struct stack
{
   int top;
   int n;
   int arr[n];
  

};
void init(struct stack *s,int no)
void push(struct tree *t,struct stack *s);
void pop(struct stack *s);
void inorder(struct tree *t);
void preorder(struct tree *t);
void postorder(struct tree *t);
struct tree * inf(struct tree *t,char arr[]);


