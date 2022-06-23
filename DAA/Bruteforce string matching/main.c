#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
int bruteforce(char p[],char t[])
{
    int i,j,m,n;
    m=strlen(p);
    n=strlen(t);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<=m-1 &&p[j]==t[i+j])
        {
            j++;
        }
        if(j==m)
            return i;

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
  a=bruteforce(p,t);
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
