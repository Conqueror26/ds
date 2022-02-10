#include <stdio.h>
#include "impl.h"



int main()
{
struct stack *s1 =(struct stack *)malloc(sizeof(struct stack));
struct stack *s2 =(struct stack *)malloc(sizeof(struct stack));


int m,n,c1,c2;

printf("enter length of stack 1:");
scanf("%d",&m);
printf("enter length of stack 2:");
scanf("%d",&n);
init(s1,m);
init(s2,n);


printf("enter stack 1:\n");

while(m--)
{
   scanf("%d",&c1);
   push(s1,c1);

}
printf("enter stack 2:\n");

while(n--)
{
   scanf("%d",&c2);
   push(s2,c2);

}
printf("\n");
printf("THE ENTERED STACKS ARE:\n");
printf("\n");
display(s1);
display(s2);





int sum=0;
int maxsum=10;
int count=0;
int choice;


  
while(sum<maxsum  )


{
printf("enter a choice:");
scanf("%d",&choice);
  
  if(choice==1)
{
        sum=sum +getTop(s1);
      printf("the element u popped is %d\n",getTop(s1));
        pop(s1);
        count++;
       
        
     }
  else {
     
     sum =sum+getTop(s2);
      printf("the element u popped is %d\n",getTop(s2));
      pop(s2);
      count++; 
      
  }
}


    if(sum>maxsum)
      printf("Your score is %d",count-1);
      printf("\n");
      else
      printf("Your score is %d",count);
      printf("\n");
    
 










}
