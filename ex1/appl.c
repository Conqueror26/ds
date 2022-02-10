#include "impl.h"
#include <stdio.h>
#include<stdlib.h>
int main()
{
struct arr *p;
p = (struct arr*)malloc(sizeof(struct arr));
struct student *s; 
s = (struct student*)malloc(sizeof(struct arr));


init(p,0);
int d=1;

int choice;
/*printf("Choices:\n"); 
printf("1.Insert Front\n"); 
printf("2.Insert End\n"); 
printf("3.Insert Regno\n");
printf("4.Delete\n"); 
printf("5.Search name\n"); 
printf("6.List Result\n"); 
printf("7.List Class\n");
printf("8.Display\n"); */

while(d==1){
printf("Choices:\n"); 
printf("1.Insert Front\n"); 
printf("2.Insert End\n"); 
printf("3.Insert Regno\n");
printf("4.Delete\n"); 
printf("5.Search name\n"); 
printf("6.List Result\n"); 
printf("7.List Class\n");
printf("8.Display\n"); 
  struct student s;
  char name[20];
  
  int regno;
printf("choice:");
 scanf("%d",&choice); 
 switch(choice){
case 1: {
insertFront(p,s);
computeResult(p);
break; 
}
case 2: {
insertEnd(p,s);
computeResult(p);
 break; 
}
 case 3: {
printf("\nEnter register number:");
scanf("%d",&regno);
insertRegno(p,s,regno);
computeResult(p); 

break; 
 }
case 4: {

scanf("%d",&regno); 
delet(p,regno);


break; 
}
case 5:{
printf("enter name to search :\n");
scanf("%s",name);
searchName(p,name);
display(p);
break; 
}
case 6: {
listResult(p);
display(p);

break;
}
case 7:{

printf("First Class:\n");
listClass(p);
break;
}
case 8: {
display(p);
break; 
}
default:
printf("invalid!\n"); 
break;

} 

 
printf("\nDo you want to continue?(1=YES/2=NO):\n");
scanf("%d",&d);

}



 


        

}
  
     
    



    


