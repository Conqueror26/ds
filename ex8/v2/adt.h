struct wordM
{
    char meaning[20];
    char word[20];
};


struct avl
{
    struct wordM data;
    struct avl*l;
    struct avl*r;
    int h;
    
};

struct avl* insert(struct avl *t,struct wordM x);
void inorder(struct avl*t);
void display(struct avl*t);
int height(struct avl*t);
int he(struct avl*t);
void cl(struct avl *t,int l);
void lo(struct avl*t);
