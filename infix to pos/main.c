#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int g(char symbol)
{
    switch(symbol)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 3;
    case '$':
    case '^':
        return 6;
    case '(':
        return 9;
    case ')':
        return 0;
    }
}
int f(char symbol)
{
    switch(symbol)
    {
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 4;
    case '$':
    case '^':
        return 5;
    case '(':
        return 0;
    case ')':
    case '#':
    return -1;

    }
}



int main()
{
char postfix[100],infix[100],s[100],symbol;
int i,j=-1,top=-1;
printf("Enter the infix expression\n");
gets(infix);
s[++top]='#';
for(i=0;i<strlen(infix);i++)
{
    symbol=infix[i];
    while(f(s[top])>g(symbol))
        postfix[++j]=s[top--];
    if(f(s[top])!=g(symbol))
        s[++top]=symbol;
    else
        top--;
}
while(s[top]!='#')
    postfix[++j]=s[top--];
printf("%s\n",postfix);
    return 0;
}
