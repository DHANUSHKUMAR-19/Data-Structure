#include <stdio.h>
#include <stdlib.h>

void selection_sort(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

int main()
{
    int n,i;
    printf("\nEnter the no of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefor sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    selection_sort(a,n);
    printf("\nAfter sorting: ");
       for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
