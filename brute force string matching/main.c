#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
int bruteforce(char t[],char p[])
{
    int n,m,j;
    n=strlen(t);
    m=strlen(p);
    for(int i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m &&p[j]==t[i+j])
        {
            j=j+1;
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
    printf("Enter the text  : ");
    //gets(t);
    scanf("%s",t);
    printf("Enter the pattern :");
scanf("%s",p);
//gets(p);
int start=clock();
    int a=bruteforce(t,p);
int end=clock();
printf("Time required is %f\n",(double)(end-start)/CLOCKS_PER_SEC);
    if(a==-1)
    {
        printf("Patter not found\n");
    }
    else{
        printf("Pattern found at position %d\n",a);
    }
    return 0;
}
