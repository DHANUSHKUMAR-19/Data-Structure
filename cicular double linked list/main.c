#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
    struct node *rlink;
};
typedef struct node *NODE;
NODE getnode()
{
    NODE temp=malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("System busy please try again later");
    }
    //printf("MEmory error\n");
    temp->rlink=NULL;
    temp->link=NULL;
}
NODE insert_rear(NODE first,int x)
{
    NODE temp;
    temp=getnode();
    temp->info=x;
    if(first==NULL)
    {
        temp->rlink=temp;
        temp->link=temp;
        return temp;
    }
    else{
        NODE cur=first;
        while(cur->rlink!=first)
        {
            cur=cur->rlink;
        }
        cur->rlink=temp;
        temp->link=cur;
        temp->rlink=first;
        first->link=temp;
        cur=temp=NULL;
        free(cur);
        free(temp);
        return first;
    }

}
NODE insert_at_ele(NODE first){
if(first==NULL)
{
    printf("Empty linked list\n");
    return first;
}
int ch,x;
printf("Enter the element to check\n");
scanf("%d",&ch);
NODE temp=first;
while(temp->rlink!=first && temp->info!=ch)
{
    temp=temp->rlink;
}
if(temp->info==ch)
{
    printf("Enter the element to insert\n");
    scanf("%d",&x);
    NODE newnode,next;
    newnode=getnode();
    newnode->info=x;
    newnode->rlink=temp->rlink;
    next=temp->rlink;
    next->link=newnode;
    newnode->link=temp;
    temp->rlink=newnode;
    return first;
}
else{
    printf("Element not found\n");
    return first;
}

}
NODE del(NODE first)
{
    if(first==NULL)
    {
        printf("Empty linked lsit\n");
        return first;
    }
    else if(first->rlink==first)
    {
        printf("Delted element = %d\n",first->info);
        first=NULL;
        return first;
    }
    else{
        NODE cur=first;
        while(cur->rlink!=first)
        {
            cur=cur->rlink;
        }
        printf("DELETED ELEMENT = %d\n",cur->info);
        NODE prev=cur->link;
        prev->rlink=first;
        cur->link=cur->rlink=NULL;
        prev=NULL;
        free(cur);
        free(prev);
        return first;
    }
}
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("Empty linked list\n");
        return;
    }
    else if(first->rlink==first)
    {
        printf("Contents of the list are\n");
        printf("%d\t",first->info);
    }
    else{
        temp=first;
        while(temp->rlink!=first)
        {
            printf("%d\t",temp->info);
            temp=temp->rlink;
        }
         printf("%d\t",temp->info);
    }
}
NODE insert_at_position(NODE first)
{
    int count=1,pos,i=1;
    if(first==NULL)
    {
        printf("Empty linked list\n");
        return first;
    }
    NODE temp=first;
    while(temp->rlink!=first)
        {
        count++;
        temp=temp->rlink;
    }
    printf("lENGTH= %d\n",count);
    printf("Enter the position to insert\n");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("Sorry the length of the list is smaller than the given value\n");
    return first;
    }
    else{
            NODE temp1=first;
            while(i<pos)
            {
                temp1=temp1->rlink;
                i++;

            }
            printf("%d",i);
            NODE newnode,next;
            newnode=getnode();
            printf("Enter the element to insert\n");
            int ele;
            scanf("%d",&ele);
            newnode->info=ele;
            newnode->rlink=temp1->rlink;
            next=temp1->rlink;
            next->link=newnode;
            temp1->rlink=newnode;
            newnode->link=temp1;
            return first;
    }
}

int main()
{
    int ch,x;
    NODE first=NULL;
    while(1)
    {
        printf("\nEnter your choice\n");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.exit\n5.Insert after specific element\n6.insert at positon\n");
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
            case 5:first=insert_at_ele(first);
            break;
            case 6:first=insert_at_position(first);
            break;
            default:printf("\nInvalid choice\n");
        }
    }
    return 0;
}
