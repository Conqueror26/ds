struct PQ
{    
     int n;
     int arr[20];
      
};
void init(struct PQ *p,int no);

void  insert(struct PQ *p,int x);
int del(struct PQ*p);
void disp(struct PQ*p);
