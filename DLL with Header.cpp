#include <stdio.h>
#include <stdlib.h>
struct node{
int info;
struct node *rlink;
struct node *llink;
};
typedef struct node *NODE;
NODE head;
NODE getnode()
{
    NODE temp;
    temp=malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("MEmory can be allocarted\n");
        exit(0);
    }
    temp->rlink=NULL;
    temp->llink=NULL;
    return temp;
}
NODE insert_first(int x)
{
    NODE temp,first;
    temp=getnode();
    temp->info=x;
    if(head->rlink==NULL)
    {
        head->rlink=temp;
        head->llink=temp;
        head->info++;
        printf("total nodes are %d\n",head->info);
        temp->llink=head;
        temp->rlink=head;
        return;
    }

    /*head->rlink=temp;
    temp->llink=head;
    temp->rlink=first;
    first->llink=temp;
    return temp;*/

    first=NULL;
    first=head->rlink;
    temp->rlink=first;
    first->llink=temp;
    temp->llink=head;
    head->rlink=temp;
    head->info++;
    printf("total nodes are %d\n",head->info);
    return ;
}
NODE del_first()
{
NODE first,cur;
if(head->rlink==NULL)
{
printf("Empty list");
return;
}
if(head->rlink==head)
{
printf("NO elements left\n");
return;
}
first=head->rlink;
printf("\nDelted element = %d\n",first->info);
head->rlink=first->rlink;
first->llink=NULL;
cur=first;
first=first->rlink;
cur->rlink=NULL;
first->llink=head;
head->info--;
printf("Total nodes = %d\n",head->info);
return;

}
void display(NODE head)
{
NODE first=head->rlink;
if(head->rlink==NULL)
{
printf("Empty list\n");
return;
}
while(first!=head)
{
printf("%d\t",first->info);
first=first->rlink;
}
}

int main()
{
    NODE first;
    head=getnode();
    head->rlink=NULL;
    head->llink=NULL;
    head->info=0;
    first=NULL;
    int ch,n;
    while(1)
    {
        printf("\n1.Insert at first\n2.Delete at first\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element to insert\n");
            scanf("%d",&n);
            insert_first(n);
            break;
            case 2:del_first();
            break;
            case 3:display(head);
            break;
        }
    }
    return 0;
    }
