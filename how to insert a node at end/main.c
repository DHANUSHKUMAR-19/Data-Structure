#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *link;
};
int*add_to_last(struct node *p,int data)
{struct node *temp=malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
p->link=temp;
return temp;
}
int main()
{ int i=0,n;
    struct node *head=malloc(sizeof(struct node));
    head->data=0;
    head->link=NULL;
    struct node *p;
    p=head;
    printf("Enter the data\n");
    while(i<5)
    {
        scanf("%d",&n);
        p=add_to_last(p,n);
        i++;
    }
    p=head;
    printf("Data stored in linked list\n");
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->link;
    }
    return 0;
}
