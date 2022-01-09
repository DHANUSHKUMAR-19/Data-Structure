#include <stdio.h>
#include<stdlib.h>
#define s 5
int front=-1;
int rear=-1;
int queue[s];
void insert(int x);
void delete();
void display();
int main()
{
  int x,ch;
  while(1)
  {
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("Enter the element to insert\n");
            scanf("%d",&x);
            insert(x);
      break;
      case 2:delete();
      break;
      case 3:display();
      break;
      case 4:exit(0);
      break;
      default:printf("Invalid choice\n");
      break;
    
  }
}
return 0;
 }
 
 void insert(int x)
 {
   if(front==-1 && rear==-1)
   {
     front=rear=0;
     queue[rear]=x;
   }
   else if(rear==s-1)
   {
     printf("Queue is full\n");
     
   }
   else
   {
     rear++;
     queue[rear]=x;
   }
   }
   void delete()
   {
     if(front==-1 && rear==-1)
     {
       printf("Queue is empty\n");
      
     }
     else if(front==rear)
     {
       front=rear=-1;
     }
     else
     {
       printf("Deleted lement=%d",queue[front]);
       front++;
     }
   }
   void display()
   {
     int i;
     if(front==-1 && rear==-1)
     {
       printf("Queue is empty\n");
     }
     else
     {
       for(i=front;i<rear+1;i++)
       {
         printf("%d\t",queue[i]);
       }
     }
   }
 