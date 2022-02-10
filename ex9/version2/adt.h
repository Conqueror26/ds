


struct PQ
{    
     int n;
     int arr[20];
     char a[20];
      
};

void init(struct PQ *p,int no);

void  insert(struct PQ *p,char x,int y);
void del(struct PQ*p);
void disp(struct PQ*p);
