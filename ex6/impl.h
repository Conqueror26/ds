#include"adt.h"
#include<stdio.h>
#include<stdlib.h>


struct node *insert(struct node *t,int x)
{

    
     
    if(t==NULL)
    {
       t=(struct node *)malloc(sizeof(struct node));
       t->data=x;
       t->left=NULL;
       t->right=NULL;

    }
    else
    {  
        if(x<t->data)
        {
           t->left= insert(t->left,x);
           
        }
        else 
        {
            t->right = insert(t->right,x);
           
        }
    }
    return t;
}
void inorder(struct node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
       
        printf("%d\t",t->data);
         inorder(t->right);
    }
}
int he(struct node *t)
{
    int lh,rh;
    if(t==NULL)
    {
        return 0;
    }
    else 
    {
        lh=he(t->left);
        rh=he(t->right);
        if(lh>rh)
        {
            return (lh+1);
        }
        else 
        {
            return (rh+1);
        }

    }
}
void cl(struct node *t,int l)
{

    if(t==NULL)
    {
        return ;

    }
    if(l==1)
    {
        printf("%d", t->data);
    }
    else if(l>1)
    {
        cl(t->left,l-1);
        cl(t->right,l-1);

    }
   
   
}


void levelorder(struct node *t)
{
    int h=he(t);
    int i;
    
    for(i=1;i<=h;i++)
    {
        
        cl(t,i);
       
        printf("\n");
    }
    
    
    
}
struct node *findmin(struct node *t)
{
    if(t==NULL || t->left==NULL)
    {
         return t;
    }
    else 
    {
        return findmin(t->left);
    }
}
struct node * find(struct node*t, int x)
{
    int flag=1;
    if(t->data== x || t==NULL)
    {

       flag=0;
        return t;
      
    }
    
    
    else if(x<t->data)
        {
           return find(t->left,x);
        }
    else if(x>t->data)
        {
            return find(t->right,x);
        }
    else 
    {
        if(flag==1)
        {
            printf("NO");
        }
        else 
        {
            printf("YES");
        }
        
    }
    
  

}
struct node *findmax(struct node *t)
{
    if(t==NULL || t->right==NULL)
    {
         return t;
    }
    else 
    {
        return findmax(t->right);
    }
}
struct node* del(struct node* t, int x)
{
 
    if (t == NULL)
        return t;
 
    
   else if (x< t->data)
        t->left = del(t->left, x);
 
    
    else if (x > t->data)
        t->right = del(t->right, x);
 
    
    
         else if(t->left&&t->right)
         {
             struct node *temp=t;
             if(t->left==NULL)
             {
                 t=t->right;
             }
             else if(t->left==NULL)
             {
                 t=t->right;

             }
             free(temp);

         }
        
        return t;
 
        
        
}
int identical(struct node*t1,struct node *t2){
    if(t1==NULL && t2==NULL){
       return  1;
    }
    if(t1 && t2){
        return (t1->data==t2->data)&&(identical(t1->left,t2->left))&&(identical(t1->right,t2->right));
    }
    return 0;
}
int count(struct node *t)
{
    
    if(t==NULL)
    return 0;
    return 1+count(t->left)+count(t->right);
}

int complete(struct node*t,int i,int c){
    if(t==NULL)
    return 1;
    if(i>=c)
    return 0;
    return complete(t->left,2*i+1,c)&&complete(t->right,2*i+2,c);
}
int range(struct node *t,int l,int h){
    if(t==NULL)return 0;
    if(t->data<=h && t->data>=l){
        return 1+range(t->left,l,h)+range(t->right,l,h);
    }
    if(t->data<l){
        return range(t->right,l,h);
    }
    if(t->data>h){
        return range(t->left,l,h);
    }
}
    
  
    
  
       

    
    
      
    
