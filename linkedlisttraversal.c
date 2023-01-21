#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr){
    while(ptr != NULL)
    {
        printf("\nthe element :%d",ptr->data);
        ptr=ptr->next;
    }
}

struct node * insertatfirst(struct node * head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct node * insertatend(struct node * head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node * p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct node * insertafternode(struct node *head,struct node *prevNode,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

struct node * insertatindex(struct node * head,int data,int index)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p =head;
    int i = 0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}




int main()
{
    struct node *head,*second,*third;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data=11;
    head->next=second;

    second->data=12;
    second->next=third;

    third->data=23;
    third->next=NULL;
    printf("\nlinklist before insertion\n");
    linkedlisttraversal(head);
    head = insertatfirst(head,44);
    printf("\nlinklist after insertion at first place\n");
    linkedlisttraversal(head);
    head=insertatindex(head,88,1);
    linkedlisttraversal(head);
    printf("\nlinklist after insertion\n");
    printf("\nlinklist after insertion after a node\n");
    insertafternode(head,third,453);
    linkedlisttraversal(head);
    head = insertatend(head,99);
    linkedlisttraversal(head);

    return 0;
}