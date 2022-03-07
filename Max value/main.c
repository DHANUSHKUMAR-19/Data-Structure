#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int max,n;
    printf("Enter the total numbers\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d\t",i+1);
        scanf("%d",&a[i]);
    }
        max=a[0];
    for(int j=1;j<n;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
}
printf("Maximum element =%d\n",max);

    return 0;
}
