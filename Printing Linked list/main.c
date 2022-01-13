#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *link;

};
void display(struct node *head)
{
    struct node *p;
    p=NULL;
    p=head;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->link;
    }
    free(p);
    p=NULL;

}

int main()
{
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
display(head);
free(head);
head=NULL;
    return 0;
}
