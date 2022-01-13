#include <stdio.h>
#include <stdlib.h>
struct node{
int info;
struct node *link;
};
typedef struct node * NODE;
NODE getnode()
{
    NODE temp;
    temp=malloc(sizeof(NODE));
    temp->link=NULL;
    return temp;
}
NODE head;


NODE insert_first(NODE first,int x)
{
NODE temp=getnode();
temp->info=x;
if(first==NULL)
{
    head=getnode();
    head->info=1;
    head->link=temp;
    return temp;
}
temp->link=first;
head->link=temp;
head->info++;
return temp;
}
NODE delete_first(NODE first)
{
    NODE cur;
    if(first==NULL)
    {
        printf("Empty list\n");

    }
    cur=first;
    first=first->link;
    head->link=first;
    head->info--;
    printf("Deleted element is =%d\n",cur->info);
    return first;

}
int count(NODE head)
{
    if(head->info=='0')
    {
        printf("No Nodes\n");
    }
    printf("Total no of Nodes = %d\n",head->info);

}

int main()
{
  NODE first;
  first=NULL;
  int ch,n;
  while(1)
  {
      printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:printf("Enter the element to insert\n");
          scanf("%d",&n);
          first=insert_first(first,n);
          break;
          case 2:first=delete_first(first);
          break;
          case 3:count(head);
          break;
          /*case 4:display(first);
          break;*/

      }

  }
    return 0;
}
