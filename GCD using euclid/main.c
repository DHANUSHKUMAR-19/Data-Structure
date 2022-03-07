#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m,n,r;
   printf("Enter a value :");
   scanf("%d",&m);
      printf("Enter a value :");
   scanf("%d",&n);
   while(n>0)
   {
       r=m%n;
       m=n;
       n=r;
   }
   printf("GCD = %d",m);

    return 0;
}
