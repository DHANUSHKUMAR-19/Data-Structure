#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 128
int table[size];
void shifttable(char p[])
{
    int i,j,m;
    m=strlen(p);
    for(i=0;i<size;i++)
    {
        table[i]=m;
        for(j=0;j<m-1;j++)
        {
            table[p[j]]=m-1-j;
        }
    }
}
int horsepool(char p[],char t[])
{
    int i,j,k,m,n;
    m=strlen(p);
    n=strlen(t);
    i=m-1;
    while(i<n)
    {
        k=0;
        while(k<m && p[m-1-k]==t[i-k])
            k++;
        if(k==m)
            return i-m+1;
        else
            i=i+table[t[i]];
    }
    return -1;
}


int main()
{
    char p[100],t[100];
    printf("Enter the text\n");
    gets(t);
    printf("Enter the pattern\n");
    scanf("%s",p);
    shifttable(p);
    int pos;
    pos=horsepool(p,t);
    printf("you came back\n");
    if(pos>=0)
        printf("Pattern found at %d position\n",pos);
    else
        printf("Pattern not found");
    return 0;
}
