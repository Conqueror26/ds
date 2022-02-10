struct hashADT
{
   int arr[100];
   int size;
};
void init(struct hashADT *H,int n);
void insertElementLP(struct hashADT *H, int x);
int searchElementLP(struct hashADT *H, int key);
void insertElementQP(struct hashADT *H, int x);
int searchElementQP(struct hashADT *H, int key);
void insertElementDH(struct hashADT *H, int x);
int searchElementDH(struct hashADT *H, int key);
void display(struct hashADT *H);
