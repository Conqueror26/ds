struct numberADT
{
    int a[20];
    int n;

};
void init(struct numberADT *s,int no);
void insert(struct numberADT*s,int x[10]);
void display(struct numberADT*s);
void sel(struct numberADT*s);
int ls(struct numberADT *s,int k);
int bs(struct numberADT *s,int k);
int se(struct numberADT *s,int k);