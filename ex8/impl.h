#include "adt.h"
#include<stdio.h>
#include<stdlib.h>


int height (struct avl *t)
{
	if(t==NULL)
		return -1;
	else
		return t->h;
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}
struct avl* singlerotatewithleft(struct avl *k2)
{
	struct avl *k1;
	k1=k2->l;
	k2->l=k1->r;
	k1->r=k2;

	k2->h=max(height(k2->l),height(k2->r))+1;
	k1->h=max(height(k1->l),height(k2-> r))+1;

	return k1;
}

struct avl* singlerotatewithright(struct avl *k2)
{
	struct avl *k1;
	k1=k2->r;
	k2->r=k1->l;
	k1->l=k2;

	k2->h=max(height(k2->l),height(k2->r))+1;
	k1->h=max(height(k1->l),height(k2-> r))+1;

	return k1;
}
struct avl* doublerotatewithright(struct avl*k3)
{ 
    
	k3->r=singlerotatewithleft(k3->l);

	
	return singlerotatewithright(k3);
}
struct avl* doublerotatewithleft(struct avl*k3)
{ 
    
	k3->l=singlerotatewithright(k3->l);

	
	return singlerotatewithleft(k3);
}












struct avl * insert(struct avl *t,int x)
{
     
    

	if(t==NULL)
	{
		t=(struct avl*) malloc(sizeof(struct avl));
		t->data=x;		
		t->h=0;
		t->l=t->r=NULL;	
	}
    else if(x<t->data)
   {
	t->l=insert(t->l,x);
	if(height(t->l)-height(t->r) ==2)
		if(x<t->l->data)
			t=singlerotatewithleft(t);
		else
			t=doublerotatewithleft(t);
}
else if(x>t->data)
{
	t->r=insert(t->r,x);
    if(height(t->l)-height(t->r) ==2)
		if(x>t->r->data)
			t=singlerotatewithright(t);
		else
			t=doublerotatewithright(t);
}
t->h=max(height(t->l),height(t->r))+1;
return t;
}

void inorder(struct avl *t)
{
    if(t!=NULL)
    {
        inorder(t->l);
        printf("%d\t",t->data);
        inorder(t->r);
    }
}
int he(struct avl*t)
{
     int lh,rh;
    if(t==NULL)
    {
        return 0;
    }
    else 
    {
        lh=he(t->l);
        rh=he(t->r);
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
void cl(struct avl *t,int l)
{
        if(t==NULL)
    {
        return ;

    }
    if(l==1)
    {
        printf("%d\t", t->data);
    }
    else if(l>1)
    {
        cl(t->l,l-1);
        cl(t->r,l-1);

    }
}
void lo(struct avl*t)
{
    int h=he(t);
    int i;
    
    for(i=1;i<=h;i++)
    {
        
        cl(t,i);
       
        printf("\n");
    }
}