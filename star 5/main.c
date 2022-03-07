#include <stdio.h>
#include <stdlib.h>

int main()
{

     int n,i,j;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {

        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
}
for(i=0;i<n;i++)
    {

        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
}
    return 0;
}
