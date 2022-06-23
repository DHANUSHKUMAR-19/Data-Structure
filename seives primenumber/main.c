#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a[100],b[100],n,i,p=1,j=0,count=0;
    printf("\nEnter the total number: ");
    scanf("%d",&n);
    if(n>1)
    {
        for(i=2;i<=n;i++)
    {
     a[i]=i;
    }
    for(i=2;i<=sqrt(n);i++)
    {
        if(a[i]!=0)
        {
            j=i*i;
            {
                while(j<=n)
                {
                    a[j]=0;
                    j+=i;
                }
            }
        }
    }
    }
    i=0;
    b[0]=1;
    for(i=2;i<=n;i++)
    {
        if(a[i]!=0)
        {
            b[p++]=a[i];
            count++;
        }
    }
    printf("The prime numbers are:");
    for(i=0;i<=count;i++)
    {
        printf("\t%d\t",b[i]);
    }

    return 0;
}
