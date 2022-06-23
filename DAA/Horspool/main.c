#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
# define size 128
int table[size];
void shift_table(char p[])
{
    int i,j,m;
    m=strlen(p);
    for(i=0;i<=size-1;i++)
      table[i]=m;
    for(j=0;j<=m-2;j++)
        table[p[j]]=m-1-j;
}
int horsepool(char p[],char t[])
{
    int i,j,m,n;
    shift_table(p);
    m=strlen(p);
    n=strlen(t);
    i=m-1;
    while(i<=n-1)
    {
        j=0;
        while(j<=m-1 &&p[m-1-j]==t[i-j])
            j++;
        if(j==m)
            return i-m+1;
        else
            i=i+table[t[i]];
    }
    return -1;
}

int main()
{
  char p[10],t[100];
  int a;
  printf("\nEnter the text: ");
  gets(t);
  printf("\nEnter the pattern: ");
  gets(p);
  clock_t start=clock();
  a=horsepool(p,t);
  clock_t end=clock();
  if(a==-1)
  {
      printf("Patter not found \n");
  }
  else{
    printf("Pattern found at % d position",a);
  }
  printf("Time consumed = %f\n",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}
