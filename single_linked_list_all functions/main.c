#include <stdio.h>
#include <stdlib.h>
struct node{
int info;
struct node *link;
};
typedef struct node * NODE;
NODE getnode()
{
NODE temp=malloc(sizeof(NODE));
temp-> link=NULL;
if(temp==NULL)
    {
    printf("Memory couldn't be allocated\n");
    exit(0);
}
return temp;
}
NODE insert_rear(NODE first,int x)
{
    NODE newnode,cur;
    newnode=getnode();
    if(first==NULL){
        newnode->info=x;
        return newnode;
    }
    cur=first;
    while(cur->link!=NULL)
        {
        cur=cur->link;
    }
    cur->link=newnode;
    newnode->info=x;
    cur=NULL;
    free(cur);
    return first;
}
NODE del_rear(NODE first)
{
NODE cur,prev;
if(first==NULL){
    printf("Empty linked list\n");
    return first;
}
if(first->link==NULL)
{
    printf("Deleted element = %d\n",first->info);
    first=NULL;
    return first;
}
cur=first;
while(cur->link!=NULL)
    {
    prev=cur;
    cur=cur->link;

}
printf("The deleted element is = %d\n",cur->info);
prev->link=NULL;
cur=NULL;
free(cur);
prev=NULL;
free(prev);
return first;
}
void display(NODE first)
{
if(first==NULL){
    printf("Empty linked list\n");
    return;
}
printf("The contents of the linked list are :\n");
NODE temp=first;
while(temp!=NULL)
{
    printf("%d\t",temp->info);
    temp=temp->link;
}
}
int len(NODE first)
{
    int cnt=0;
    NODE temp;
    if(first==NULL)
    {
        printf("length = %d\n",0);
        return;
    }
    temp=first;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->link;
    }
    printf("Length of the node = %d\n",cnt);
}
void alternate(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("Empty linked list\n");
        return;
    }
    temp=first;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->link->link;
    }
}
NODE insert_specific(NODE first)
{
    int ch,ele;
    NODE check;
    if(first==NULL)
    {
        printf("Empty linked list\n");
        return first;
    }
    printf("Enter the element to be checked\n");
    scanf("%d",&ch);
    check=first;
    while(check!=NULL && check->info!=ch)
    {
        check=check->link;
    }
    if(check==NULL){
        printf("Element not found\n");
        return first;
    }
    NODE next=check->link;
    NODE newnode=getnode();
    printf("Enter the element to insert\n");
    scanf("%d",&ele);
    newnode->info=ele;
    check->link=newnode;
    newnode->link=next;
    return first;

}
void search(NODE first)
{
     int ch,c=0;
    NODE check;
    if(first==NULL)
    {
        printf("Empty linked list\n");
        return first;
    }
    printf("Enter the element to be checked\n");
    scanf("%d",&ch);
    check=first;
    while(check!=NULL && check->info!=ch)
    {
        check=check->link;
        c++;
    }
    if(check==NULL){
        printf("Element not found\n");
        return first;
    }
    if(check->info==ch){
        printf("Element is found at position = %d\n",c+1);
    }
    return first;

}
NODE revrs(NODE first)
{
    if(first==NULL)
    {
        printf("Em[ty linked list\n");
        return first;
    }
    if(first->link==NULL)
    {
        return first;
    }
    NODE prev,next;
    prev=next=NULL;
    while(first!=NULL)
    {
        next=first->link;
        first->link=prev;
        prev=first;
        first=next;
    }
    return prev;
}

int main()
{
   NODE first=NULL;
   int ch,x;
   for(;;){
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\nEnter your choice\n");
    printf("\n1.Insert\n2.Delete\n3.Display\n4.exit\n5.Check length\n6.Alternate node printing\n7,Insert at after specific element\n8.Search\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:printf("Enter the elemnt to insert\n");
    scanf("%d",&x);
    first=insert_rear(first,x);
    break;
    case 2:first=del_rear(first);
    break;
    case 3:display(first);
    break;
    case 4:exit(0);
    default:printf("Invalid choice\n");
    case 5:len(first);
    break;
    case 6:alternate(first);
    break;
    case 7:first=insert_specific(first);
    break;
    case 8:search(first);
    break;
    case 9:first=revrs(first);
    }
   }
    return 0;
}
