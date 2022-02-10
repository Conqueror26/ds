struct node
{
  char c;
  struct node *left,*right;
};
struct stackADT
{
  struct node *data[100];
  int top;
  int size;
};
struct ET
{
  struct stackADT *S;
  struct node *t;
};
