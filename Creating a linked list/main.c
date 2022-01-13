#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *link;
};
void count(struct node*head)
{
    int count=0;
    if(head==NULL)
    {
        printf("Linked list is empty\n");
    }
struct node *p=NULL;
p=head;
while(p!=NULL)
{
    count++;
    p=p->link;
}
printf("There are %d nodes\n",count);

}
int main()
{int i;
struct node *head=malloc(sizeof(struct node));
if(head==NULL)
    {printf("Memory couldn't be allocated\n");
    exit(1);}
head->data=10;
head->link=NULL;
struct node *current=malloc(sizeof(struct node));
current->data=20;
current->link=NULL;
head->link=current;
count(head);
free(head);
free(current);
head=NULL;
current=NULL;

    return 0;
}
