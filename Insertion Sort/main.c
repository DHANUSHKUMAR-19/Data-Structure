#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int a[n],i,j,v;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        v=a[i];
        j=i-1;
        while(j>=0 && a[j]<v)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=v;
    }
    printf("\nThe sorted list: ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
