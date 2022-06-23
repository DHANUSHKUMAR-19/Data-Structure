#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
int bruteforce(char p[],char t[])
{
    int i,j,m,n;
    m=strlen(p);
    n=strlen(t);
    for(i=0;i<=n-m;i++)
    {
        j=0;
    while(j<m && p[j]==t[i+j])
    {
        j++;
    }
    if(j==m)
    {
        return i;
    }
    }
    return -1;
}
int main()
{
    char p[100],t[100];
    int a;
    printf("\nEnter the text: ");
    gets(t);
    printf("\nEnter the Pattern: ");
    gets(p);
    clock_t start=clock();
    a=bruteforce(p,t);
    clock_t end=clock();
    if(a==-1)
    {
        printf("\nPattern not found\n");
    }
    else
        printf("\nPattern found at %d position\n",a);
    printf("\nExecution time: %f",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}
