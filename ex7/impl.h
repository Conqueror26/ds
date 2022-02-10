#include "adt.h"
#include<stdlib.h>


void init(struct stack *s,int no)
{
    s->n=no;
    s->top=-1;
}
void push(struct tree *t,struct stack *s)
{
    s->top++;
    s->a[s->top]=t->data;

    
    
}

 void pop(struct stack *s)
{
    
   s->top--;
    
}
void inorder(struct tree *t)
{
    if(t!=NULL)
    {
    inorder(t->l);
    printf("%c",t->data);
    inorder(t->r);
    }
}
void preorder(struct tree *t)
{
    if(t!=NULL)
    {
    
    printf("%c",t->data);
     preorder(t->l);
     preorder(t->r);
    }
}
void postorder(struct tree *t)
{
    if(t!=NULL)
    {
    
     postorder(t->l);
     postorder(t->r);
    printf("%c",t->data);
    
    }
}
struct tree *inf(struct tree *t,char arr[])
{
     struct stack * s;
struct *t1, *t2;
 
    
    for (int i=0; i<strlen(arr); i++)
    {
        // If operand, simply push into stack
        if (!isOperator(arr[i]))
        {
            t = newNode(postfix[i]);
            st.push(t);
        }
        else // operator
        {
            t = newNode(postfix[i]);
 
            // Pop two top nodes
            t1 = st.top(); // Store top
            st.pop();      // Remove top
            t2 = st.top();
            st.pop();
 
            //  make them children
            t->right = t1;
            t->left = t2;
 
            // Add this subexpression to stack
            st.push(t);
        }
    }
 
    //  only element will be root of expression
    // tree
    t = st.top();
    st.pop();
 
    return t;
}
   
}