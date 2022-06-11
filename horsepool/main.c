#include <stdio.h>
#include <stdlib.h>
char  shift_table(char p[100],int m,int n)
{
    int i,j;
    char table[100];
    for(i=0;i<n;i++)
    {
        table[i]=m;
        for(j=0;j<m-1;j++)
        {
            table[p[i]]=m-1-j;
        }

    }
    return table;
}
char horsepool(char P[],char T[],int m,int n)
{
    shift_table(P,m,n);
    int i,j,k;
    i=m-1;
    while(i<=n)
    {
        k=0;
        while(k<=m-1&&T[m-1-k]==P[i-k])
            k=k+1;
        if(k==m)
            return i-m+1;

    }
    return -1;
}

int main()
{
    char p[100],t[100];
    int n,m,a;
    printf("\nEnter the size of text:");
    scanf("%d",&n);
    printf("\nEnter the size of the patter: ");
    scanf("%d",&m);
    printf("\nEnter the text: ");
    scanf("%s",t);
    printf("\nEnter the pattern:");
    scanf("%s",p);
    a=horsepool(p,t,m,n);
    if(a==-1)
    {
        printf("\nText not found");

    }
    else{
        printf ("Text found at %d position\n");
    }


    return 0;
}
