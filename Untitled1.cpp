#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top=NULL;

void insert(int ele)
{
    struct node *ptr;
    ptr->data=ele;
    ptr->next=NULL;
    if(top=NULL)
        top=ptr;
    else
    {
        ptr->next=top;
        top=ptr;
    } 
}

void delet()
{
    top=top->next;
}

void print()
{
    struct node *p,*q;
    p=top;
    q=p;
    while(p!=NULL)
    {
        if(p->data>q->data)
            q=p;
        p=p->next;
    }
    printf("%d",q->data);
}

int main() 
{
    int n;
    scanf("%d",&n);
    int i,ch,ele;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                scanf("%d",&ele);
                insert(ele);
                break;
            case 2:
                delet();
                break;
            case 3:
                print();
                break;
        }
    }
}

