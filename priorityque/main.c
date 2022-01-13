#include <stdio.h>
#include <stdlib.h>
# define size 5
int rear=-1,front =0;
int q[size];
void insert(){
int n,i,min;
if(rear==size-1)
{
    printf("\nQue overflow\n");
    return ;
}
printf("\nEnter the element \n");
scanf("%d",&n);
if(rear>=0)
{
    for(i=0;i<=rear;i++)
    {
        if(q[i]>n){
        min=q[i];
        q[i]=n;
        n=min;

    }
    }
}
q[++rear]=n;
}
void del()
{
    if(front>rear)
    {
        printf("Que underflow\n");
    return;
    }
    printf("Deleted element is %d\n",q[front++]);

}
void display()
{
    if(front>rear)
    {
        printf("Que underflow\n");
    return;
    }
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t",q[i]);
    }
    printf("\n");



}

int main()
{
 int ch;
 while(1)
 {
     printf("Enter the choice\n");
     printf("\n1.insert\n2.delete\n3.display\n4.Exit\n");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:insert();
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
