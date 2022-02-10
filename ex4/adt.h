struct stack
{

int data[20];
int top,n;



};

void init(struct stack *s,int no);
int isfull(struct stack *s);
int isempty(struct stack *s);
void push(struct stack *s,int c);
void pop(struct stack *s);
int getTop(struct stack *s);
void display(struct stack *s);