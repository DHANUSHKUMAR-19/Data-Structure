#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[100];
    int max,j,n;
    printf("Enter the total numbers\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d\t",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
    int flag=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
              printf("%d is not unique\n",a[j]);
              flag=1;
            }

    }
    if(flag==0)
    {
        printf("%d is unique\n",a[i]);
    }
    }
    return 0;
}
