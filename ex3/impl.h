#include "adt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void create(struct list *header,char ele)
{

struct list *temp = (struct list *)malloc(sizeof(struct list));
temp->data =ele;
if(header->next ==NULL)
{
temp->next =header->next;
header->next=temp;
temp->prev =header;


}
else
{

temp->next =header->next;
header->next=temp;
temp->prev =header;
temp->next->prev=temp;

}


}
void display(struct list *header)
{

struct list *ptr;
ptr =header;

	while(ptr->next!=NULL)
	{
		printf("%c",ptr->next->data);
		ptr=ptr->next;
	
	}
	printf("\n");
	while(ptr!=header)
	{
         	printf("%c",ptr->data);
		ptr=ptr->prev;
	}



}
void search(struct list*header,char c)
{

int count=0;
int flag=1;
struct list *ptr;
	while(ptr->next!=NULL)
	{
		if(ptr->data==c)
                 {
		   	
			count++;
			flag=0;
			
                 }
		
          ptr=ptr->next;
         
	  
	}
printf("\n");

if(flag==1)
{
 	printf("element is not found");


}
else
{
 	printf("element is found");
}

printf("\n");
printf("the given character is found %d times",count);





}
void insert(struct list *header,char d,char c)
{

struct list *ptr;
struct list *temp = (struct list *)malloc(sizeof(struct list));
temp->data=d;
ptr=header;
while(ptr->next!=NULL)
{

	if(ptr->data==c)
	{

		
		temp->next=ptr->next;
		ptr->next->prev =temp;
        	ptr->next=temp;
		temp->prev=ptr;
		break;
	}
      ptr=ptr->next;
printf("\n");



}
}
void insertEnd(struct list *header,char c )
{
    struct list *ptr;
struct list *temp = (struct list *)malloc(sizeof(struct list));
ptr=header;
temp->data=c;
while(ptr->next!=NULL)
{
   ptr=ptr->next;

}
temp->next=NULL;
temp->prev=ptr;
ptr->next=temp;
printf("\n");
}
void del(struct list *header,char c )
{
    struct list *ptr;
    ptr=header;
    while(ptr->next!=NULL)
    {
        if(ptr->data==c)
        {

        
         ptr->prev->next=ptr->next;
         ptr->next->prev=ptr->prev;
        }
        ptr=ptr->next;
    }
    printf("\n");
   
}


void pali(struct list *header,struct list *p)
{
   struct list *p1,*p2;
   int flag =1;
   p1=header;
   p2=p;
   while(p1->next!=NULL &&p2->next!=NULL)
   {
	   if(p1->data!=p2->data)
	   {
	   flag=0;
	   
	   break;
	   }
     p1=p1->next;
	   p2=p2->next;
	   
   }
   if(flag==1)
   {
	   printf("\npalindrome");
   }
   else
   {
	   printf("\nnot palindrome");
   }
}
void vc(struct list *header)
{
  struct list *ptr;
  struct list *c =(struct list *)malloc(sizeof(struct list));
  struct list *v =(struct list *)malloc(sizeof(struct list));
  ptr=header;
  c->next=NULL;
  v->next=NULL;
  create(c,'*');
  create(v,'*');
 
  
  while(ptr!=NULL)
  {
    if(ptr->data=='a'||ptr->data=='e'||ptr->data=='i'||ptr->data=='o'||ptr->data=='u')
    {
      insertEnd(v,ptr->data);
    }
    else 
    {
       insertEnd(c,ptr->data);
    }
    ptr=ptr->next;
    
  }
  c=c->next;
  v=v->next;
  
printf("vowels:\n");
 while(v->next!=NULL)
	{
		printf("%c",v->next->data);
		v=v->next;
	
	}
 printf("\n");
 printf("consonants:\n");
 while(c->next!=NULL)
	{
		printf("%c",c->next->data);
		c=c->next;
	
	}
    printf("\n");
 
}
void swap(struct list *header,int c)
{
    struct list *l,*r;
    l=header;
    r=header;
    int i=0;
    while(r->next)
    {
        r=r->next;
        i++;
    }
    if(i<c)
    {
        return;
    }
    c=-1;
    while(c-- && l->next !=NULL && r->prev!=NULL)
    {
        l=l->next;
        r=r->prev;
    }
    char temp;
    temp=l->data;
    l->data=r->data;
    r->data=temp;
     while(header->next!=NULL)
	{
		printf("%c",header->data);
		header=header->next;
	
	}
}