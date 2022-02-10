#include "impl.h"
void range(struct hashADT *H,int x,int y)
{
   for(int i=x;i<=y;i++)
   {
      if(searchElementDH(H,i)==1)
        printf("\n%d found",i);
   }
     
}
int main()
{
   struct hashADT *H = malloc(sizeof(struct hashADT));
   int n;
   printf("\nEnter table size : ");
   scanf("%d",&n);
   init(H,n);
   printf("\nDouble Hashing: ");
   insertElementDH(H,23);
   insertElementDH(H,45);
   insertElementDH(H,69);
   insertElementDH(H,87);
   insertElementDH(H,48);
   insertElementDH(H,67);
   insertElementDH(H,54);
   insertElementDH(H,66);
   insertElementDH(H,53);
   
   display(H);
   printf("\nQuadratic Probing: ");
   insertElementQP(H,23);
   insertElementQP(H,45);
   insertElementQP(H,69);
   insertElementQP(H,87);
   insertElementQP(H,48);
   insertElementQP(H,67);
   insertElementQP(H,54);
   insertElementQP(H,66);
   insertElementQP(H,53);
   display(H);
   printf("\nLinear Probing: ");
   insertElementLP(H,23);
   insertElementLP(H,45);
   insertElementLP(H,69);
   insertElementLP(H,87);
   insertElementLP(H,48);
   insertElementLP(H,67);
   insertElementLP(H,54);
   insertElementLP(H,66);
   insertElementLP(H,53);
   display(H);
   range(H,40,60);
}