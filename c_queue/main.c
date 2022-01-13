#include <stdio.h>
#include <stdlib.h>
# define n 5
int front=-1,rear=-1;
int cq[n];
void insert(int x)
{
    if(front==-1 && rear ==-1)
    {
        front=rear=0;
        cq[rear]=x;

    }
    else if((rear+1)%n==front)
    {
        printf("que is full\n");
        return;
    }
    else
    {
        rear=(rear+1)%n;
        cq[rear]=x;
    }

}
void del()
{
    if(front==-1 && rear ==-1)
    {
        printf("Empty queue\n");
        return;
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("deleted element = %d\n",cq[front]);
        front=(front+1)%n;
    }
}
void display()
{
    int i =front;
    if(front==-1 && rear==-1)
    {
        printf("Empty queue\n");
    }else{
    while(i!=rear)
    {
        printf("%d\t",cq[i]);
        i=(i+1)%n;
    }
    printf("%d\t",cq[i]);
    }
}
int main(){
 int ch;
  int x;
 while(1)
 {
     printf("Enter the choice\n");
     printf("\n1.insert\n2.delete\n3.display\n4.Exit\n");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:

         printf("Enter the element to insert\n");
         scanf("%d",&x);
         insert(x);
         break;
         case 2:del();
         break;
         case 3:display();
         break;
         case 4:exit(0);
         default:printf("Invalid choice\n");
     }
 }
    return 0;
}
