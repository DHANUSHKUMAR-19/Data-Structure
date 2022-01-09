#include <stdio.h>

#define n 5
int front=-1;
int rear=-1;
int queue[n];
void enqueue(int x);
void dequeue();
void display();
int main()
{
  int ch,x;
  while(1)
  {
    printf("\n1.Enqueue\n2.Dequeue\n3.Diplay\n4.exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 :printf("Enter the element to qeue\n");
             scanf("%d",&x);
              enqueue(x);
      break;
      case 2: dequeue();
      break;
      case 3:display();
      break;
      case 4:exit(0);
      break;
      default:printf("Invalid choice");
      }
  }
}
void enqueue(int x)
{
  if(front==-1 && rear==-1)
  {
    front=0;
    rear=0;
    queue[rear]=x;
  }
  else if(((rear+1)%n)==front)
  {
    printf("QUe is full\n");
  }
  else
  {
    rear=(rear+1)%n;
    queue[rear]=x;
  }
}
void dequeue()
{
  if(front==-1 && rear==-1)
  {
    printf("Que is empty\n");
  }
  else if(front==rear)
  {
    front=-1;
    rear=-1;
  }
  else
  {
    printf("Dequeued element=%d",queue[front]);
    front=(front+1)%n;
    
  }
}
void display()
{
  int i=front;
  if(front==-1 && rear==-1)
  {
    printf("Que is empty");
  }
  else
  {
    while(i!=rear)
    {
      printf("%d",queue[i]);
      i=(i+1)%n;
    }
   printf("%d",queue[i]);
    }
  }
intf("%d",i);
    }
  }
