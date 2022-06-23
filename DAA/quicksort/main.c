#include <stdio.h>
#include <stdlib.h>
void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int s=partition(a,l,h);
        quicksort(a,l,s-1);
        quicksort(a,s+1,h);
    }
}
int partition(int a[],int l,int h)
{
    int i,j,temp,p;
    p=a[l];
    i=l;
    j=h+1;
    do{
        do{
            i++;
        }while(a[i]<p);
        do{
            j--;
        }while(a[j]>p);
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }while(i<j);
     temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        //swapping pivot
         temp=a[l];
        a[l]=a[j];
        a[j]=temp;
        return j;
}
int main()
{
    int n,i;
    printf("ENter the no of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("ENter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
