#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 100
int table[size];
void shifttable(char p[])
{
    int m,j;
    m=strlen(p);
    for(int i=0;i<size;i++)
    {
        table[i]=m;
        for(j=0;j<m-1;j++)
        {
            table[p[j]]=m-1-j;
        }
    }
}
void horsepool(char p[],char t[])
{

    int m,n,i,j,k;
    m=strlen(p);
    n=strlen(t);
    i=m-1;
    while(i<n)
    {
        k=0;
        while(k<m&&p[m-1-k]==t[i-k])
        {
            k++;
        }
        if(k==m)
        {
            return i-m+1;
        }
        else{
            i=i+table[t[i]];
        }
    }
    return -1;
}

void main()
{
    char p[10],t[30];
   printf("Enter the text:");
   fgets(t,size,stdin);
   printf("Enter the pattern :") ;
   fgets(p,size,stdin);
   int a;
   t[strlen(t)-1]='\0';
   p[strlen(p)-1]='\0';
     shifttable(p);
   a=horsepool(p,t);
   if(a>0)
   {
       printf("Sucesscess....");
   }
   else
    printf("not found\n");

}
