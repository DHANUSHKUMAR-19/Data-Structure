#include <stdio.h>
#include <stdlib.h>
void heapify(int a[],int n)
{
    int i,j,k,h,v;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        v=a[k];
        h=0;
        while(!h && (2*k)<=n)
        {
            j=2*k;
            if(j<n){
                if(a[j]<a[j+1])
                {
                    j++;
                }
            }
            if(v>=a[j])
                h=1;
            else{
                a[k]=a[j];
                k=j;
            }
        }
        a[k]=v;

    }
}
void heapsort(int a[],int n)
{
    heapify(a,n);

    int i,temp;
    for(i=n;i>1;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        heapify(a,i-1);
    }
}
int main()
{
    int n,i;
    printf("ENter the no of elements\n");
    scanf("%d",&n);
    int a[n+1];
    printf("ENter the elements :\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    heapsort(a,n);
    printf("\nSorted array: ");
    for(i=1;i<=n;i++)
    {
        printf("\t%d\t",a[i]);
    }
    return 0;
}
