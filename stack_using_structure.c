#include<stdio.h>
#include<stdlib.h>
#define n 5
struct stack{
    int top;
    int stack[n];
}s,*sp;
void push(){
    if(sp->top==n-1){
        printf("Stack is full\n");
    
    }
    else{
        printf("Enter the element to insert\n");
        sp->top++;
        printf("%d",sp->top);
        scanf("%d",sp->stack[sp->top]);
        printf("Breakpoint");
    }
}
void pop(){
    if(sp->top==-1){
        printf("Stack is empty");
    }else{
        printf("%d\t",sp->stack[sp->top]);
        sp->top--;
    }
}
void display(){
    if(sp->top==-1){
        printf("Empty stack\n");
    }
    int i=0;
    while(i!=sp->top+1){
        printf("%d\t",sp->stack[i]);
        i++;
    }
}
int main(){
    sp=&s;
    sp->top=-1;
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
