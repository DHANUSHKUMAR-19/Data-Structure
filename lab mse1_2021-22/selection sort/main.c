#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void selection_sort(int a[],int n)
{
    int i,j,v;
    for(i=0;i<n-1;i++)
    {
        v=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[v])
                v=j;
        }
       /*a[i]=a[i]+a[v];
       a[v]=a[i]-a[v];
       a[i]=a[i]-a[v];*/
       int temp=a[i];
        a[i]=a[v];
        a[v]=temp;
    }

}

int main()
{
    int n,i;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n Before sorting: ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        int start=clock();
    selection_sort(a,n);
    int end=clock();
    printf("\nAfter sorting: ");
      for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nTime taken :%f\n",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}
