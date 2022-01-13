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
        return temp;
    }
    printf("out of the first");
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
    return temp;
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
            first=insert_first(n);
            break;

        }
    }


    return 0;
}
