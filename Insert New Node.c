#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*newnode,*temp;
int create()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}
int display()
{
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
}

int insertatfront()
{
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=temp;
    head=newnode;
    temp=newnode;
}

int insertatend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

int main()
{
    int choice;
    while(1)
    {
        printf("1.Insert");
        printf("2.Display");
        printf("3.Delete");
        printf("Enter the choice:");
        scanf("%d",&choice);
    }
    switch(choice)
    {
    case 1:
        insert();
        break;
    case 2:
        display();
        break;
    case 3:
        delete();
        break;
    case 4:
        exist(0);
    default:
        printf("Invalid choice");
        break;
    }
}
