#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct node *next;
}*head,*cur,*temp;
void deleteitem(int ele)
{
    if(head==NULL)
        printf("List is empty");
    struct node *cur=head;
    struct node *prev=NULL;
{
     while(cur->value!=ele)
    {
        prev=cur;
        cur=cur->next;
    }
    if(prev!=NULL)
        prev->next=cur->next;
        free(cur);
};

}
