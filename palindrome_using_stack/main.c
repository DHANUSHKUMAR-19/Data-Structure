#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 100
char stack[max];
int top=-1;

int main()
{ char a[100];
int flag=0;
int i;
printf("Enter the string to check\n");
gets(a);
for(i=0;i<strlen(a);i++)
{
    stack[++top]=a[i];
}
for(i=0;i<strlen(a);i++)
{
    if(a[i]!=stack[top--])
    {
        flag=1;
        break;
    }
}
if(flag==1){
    printf("Given string is not palindrome\n");
}
else{
    printf("Palindrome\n");
}

    return 0;
}
