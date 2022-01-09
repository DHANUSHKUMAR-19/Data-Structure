#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int stack[n];
void push(){
    if(top==n-1){
        printf("Stack is full\n");
    }
    else{
        printf("Enter the element to push\n");
        scanf("%d",&stack[++top]);
    }
}
void pop(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Poped element = %d",stack[top--]);
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Contents of the stack are\n");
        int i=0;
        for(i=0;i<=top;i++){
            printf("%d",stack[i]);
        }  
    }
}
int main(){
    int ch;
    while(1){
        printf("\n1.Push\n2.Pop\n3.display\n4.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
        pop();
        break;

        case 3:display();
        break;
        case 4:exit(0);
        default:printf("Inavalid choice\n");
            break;
        }
    }
}