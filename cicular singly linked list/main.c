#include <stdio.h>
#include <stdlib.h>
struct node{
int info;
struct node *link;
};
typedef struct node *NODE;
NODE getnode()
{
    NODE temp=malloc(sizeof(NODE));
    temp->link=NULL;
    return temp;
}
NODE insert_rear(NODE first,int x)
{
    NODE temp,prev;
    temp=getnode();
    temp->info=x;
    if(first==NULL)
    {
        temp->link=temp;
        return temp;
    }
    NODE cur=first;
    while(cur->link!=first)
    {
        cur=cur->link;
    }
cur->link=temp;
temp->link=first;
cur=NULL;
free(cur);
return first;
}
NODE del(NODE first)
{
    if(first==NULL)
    {
        printf("\nEmpty linked list\n");
        return first;
    }
    else if(first->link==first)
    {
        printf("Deleted element in = %d\n",first->info);
        first=NULL;
        return first;
    }else{
    NODE cur,prev;
    cur=first;
    while(cur->link!=first){
        prev=cur;
        cur=cur->link;
    }
    printf("Deleted element is = %d\n",cur->info);
    prev->link=first;
    cur->link=NULL;
    cur=prev=NULL;
    free(cur);
    free(prev);
    return first;

    }
}
void display(NODE first)
{
    if(first==NULL)
    {
        printf("Empty linked list\n");
    }
    else if(first->link==first)
    {
    printf("Contents of the list are\n");
        printf("%d\t",first->info);
    }
    else
    {
        NODE temp=first;
        while(temp->link!=first)
    {
            printf("%d\t",temp->info);
            temp=temp->link;
        }
    printf("%d\t",temp->info);
    }

}
int main()
{
    int ch,x;
    NODE first=NULL;
    while(1)
    {
        printf("\nEnter your choice\n");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element to insert\n");
            scanf("%d",&x);
            first=insert_rear(first,x);
            break;
            case 2:first=del(first);
            break;
            case 3:display(first);
            break;
            case 4: exit(0);
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}
