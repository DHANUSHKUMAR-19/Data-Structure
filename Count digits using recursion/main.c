#include <stdio.h>
#include <stdlib.h>
int count=0;
int digit(n)
{
    if(n==0)
    {
        return count;
    }
    count++;
    digit(n/10);
}

int main()
{
    int n,result;
    printf("Enter the digit\n");
    scanf("%d",&n);
    result=digit(n);
    printf("There are %d Digits\n",result);
    return 0;
}
