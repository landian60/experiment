#include<stdio.h>
#include <stdlib.h>
struct node{
 int num;
 struct node *next;};

struct node *creat()
{
    int n,i;
    struct node *head,*p1,*p2;
    head=p1=p2=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&p1->num);
    head=NULL;
    for(i=1;p1->num!=0;i++)
    {
        if(i==1)
            head=p1;
        else
            p2->next=p1;
        p2=p1;
        p1=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p1->num);
    };
    p2->next=NULL;
    return head;
    }

struct node *change_even(struct node *h) //提出偶数链表
{
    struct node *m1,*m2,*m3;
    int n=0;
    m1=m2=m3=(struct node*)malloc(sizeof(struct node));
    m1=NULL;
    m2=h->next;
    m3=h->next;
    while(m3!=NULL)
    {
        n++;
        if(n==1) m1=m3;
        else
         {m3->next=m2->next->next;
         m2=m2->next->next;
         m3=m2;}
    }
    return m1;

}
struct node *change_odd(struct node *h) //提出奇数链表
{
    struct node *m1,*m2,*m3;
    int n=0;
    m1=m2=m3=(struct node*)malloc(sizeof(struct node));
    m1=NULL;
    m2=h;
    m3=h;
    while(m3!=NULL)
    {
        n++;
        if(n==1) m1=m3;
        else
         {m3->next=m2->next->next;
         m2=m2->next->next;
         m3=m2;}
    }
    return m1;

}


void print(struct node *head)
{
    struct node *p;
    p=head;
    if(head!=NULL)
    {
        do
        {
            printf("%d\n",p->num);
            p=p->next;
        }while(p!=NULL);
    }
}

int main()
{
    struct node *h,*h1,*h2,*head,*k;
    h=creat();
    h1=change_odd(h);
    print(h1);
    h2=change_even(h);
    k=head=h1;
    while(k->next!=NULL)
    {
        k=k->next;
    }
    k->next=h2;
    print(head);
}
