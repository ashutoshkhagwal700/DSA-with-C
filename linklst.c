#include<stdio.h>
#include<alloc.h>
#include<conio.h>
#include<process.h>

typedef struct simplelink{
    int data;
    struct simplelink *next;
}node;

node *create(node *p){
    p = (node *)malloc(sizeof(node));
    {
        int a;
        printf("\n\n");
        node *brr[25];
        int arr[25];
        a = 0;
        while(p!=NULL)
        {
            arr[a]=p->data;
            brr[a]=p->next;
            p=p->next;
            a++;
        }
        for(int i=(a-1); i>=0; i--)
            printf("[%d,%u]<--",arr[i],brr[i]);
            printf("HEAD");
            printf("\n\n\nprocess any key to continue.......");
            getch();
        
    }
}

node *insert_begin(node *p)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("\nEnter the inserted data:");
    scanf("%d",&temp->data);
    temp->next=p;
    p=temp;
    return(p);
}

node *insert_end(node *p)
{
    node *temp,*q;
    q=p;
    temp=(node *)malloc(sizeof(node));
    printf("\nEnter the inserted data:");
    scanf("%d",&temp->data);
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    temp->next=(node *)NULL;
    return(q);
}

node *insert_after(node *p)
{
    node *temp, *q;

    int x;
    q=p;
    printf("\nEnter the data (after which you enter data):");
    scanf("%d",&x);
    while(p->data!=x)
    {
        p=p->next;
    }
    temp=(node *)malloc(sizeof(node));
    printf("\nEnter the inserte data:");
    scanf("%d",&temp->data);
    temp->next=p->next;
    p->next=temp;
    return(q);
}

int count(node *p)
{
    int i=0;
    while(p!=NULL)
    {
        p=p->next;
        i++;
    }
    return(i);
}

node *insert_at_spe_pos(node *p)
{
    node *temp,*q,*r;
    int x,a,i=1;
    a=count(p);
    q=p;
    printf("\nEnter the position(at which you want to enter data):");
    scanf("%d",&x);
    if(x>(a+1))
    {
        printf("Not able to insert node at such position:");
        getch();
    }
    else
    {
        if(x==1)
        {
            temp=(node *)malloc(sizeof(node));
            printf("\nEnter the inserted data:");
            scanf("%d",&temp->data);
            temp->next=p;
            q=temp;
        }
        else{
            while(i!=x)
            {
                r=p;
                p=p->next;
                i++;
            }
            temp=(node *)malloc(sizeof(node));
            printf("\nEnter the inserted data:");
            scanf("%d",&temp->data);
            temp->next=temp;
        }
    }
    return(q);
}

node *delend(node *p)
{
    node *q,*r;
    r=p;
    q=p;
    if(p->next==NULL)
    {
        r=(node *)NULL;
    }
    else
    {
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        q->next=(node *)NULL;
    }
    free(p);
    return(r);
}

node *del_speci_ele(node *p)
{
    node *q,*r;
    int x;
    q=p;
    r=q;
    printf("\nEnter the data to remove:");
    scanf("%d",&x);
    while(q->data!=x)
    {
        r=q;
        q=q->next;
    }
    if(q==r)
    p=p->next;
    elser->next=q->next;
    free(q);
    return(p);
}

node *delbegin(node *p)
{
    node *q;
    q=p;
    p=p->next;
    free(q);
    return(p);
}

node *delete_after(node *p)
{
    node *temp,*q;
    int x;
    q=p;
    printf("\nEnter the data(after which you want to delete):");
    scanf("%d",&x);
    while(p->data!=x)
    {
        p=p->next;
    }
    temp=p->next;
    p->next=temp->next;
    free(temp);
    return(q);
}

node *delete_at_spe_pos(node *p)
{
    node *temp,*q,*r;
    int x,a,i=1;
    a=count(p);
    q=p;
    printf("\nEnter the position(at which you want to remove data):");
    scanf("%d",&x);
    if(x>(a))
    {
        printf("Not able to remove node at such position:");
        getch();
    }
    else
    {
        if(x==1)
        {
            q=q->next;
            free(p);
        }
        else
        {
            while(i!=x)
            {
                r=p;
                p=p->next;
                i++;
            }
            r->next=p->next;
            free(p);
        }
    }
    return(q);
}

node *reverse(node *p)
{
    node *q,*r;
    q=(node *)NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    return(q);
}

void screen(node *head)
{
    clrscr();
    int ch,a;
    printf("\t\t\t     SINGLE LINEAR LINKED LIST");
    printf("\n\t\t\t*******************************************************************");
    printf("\n\n   OPTIONS ARE--:");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n 0-Exit");
    printf("\n\n 1-Create first node");
    printf("\n\n 2-Insert at begining");
    printf("\n 3-Insert at end");
    printf("\n 4-Insert after element");
    printf("\n 5-Insert at specific position");
}