#include <stdio.h>
#include <stdlib.h>
int sum=0;
int sumdigit(n)
{
    if(n==0)
    {
        return sum;
    }
    sum+=n%10;
    sumdigit(n/10);
}

int main()
{
    int n,result;
    printf("Enter the digit\n");
    scanf("%d",&n);
    result=sumdigit(n);
    printf("The sum of Digits is :  %d\n",result);
    return 0;
}
