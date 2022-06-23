#include <stdio.h>
#include <stdlib.h>
void merge(int b[],int c[],int a[],int p,int q)
{
    int i,j,k;
    i=j=k=0;
    while(i<p &&j<q)
    {
        if(b[i]<c[j])
            a[k++]=b[i++];
        else
        {
            a[k++]=c[j++];
        }
    }
    if(i==p)
    {
        while(j<q)
        {
            a[k++]=c[j++];
        }
    }
    else{
        while(i<q)
        {
            a[k++]=b[i++];
        }
    }
}
void mergesort(int a[],int n)
{
    if(n>1)
    {
        int len=n/2;
        int i,j;
        int b[len],c[n-len];
        for(i=0,j=0;i<len,j<len;i++,j++)
        {
            b[j]=a[i];
        }
        for(i=len,j=0;i<n,j<n-len;i++,j++)
        {
            c[j]=a[i];
        }
        mergesort(b,len);
        mergesort(c,n-len);
        merge(b,c,a,len,n-len);
    }
}

int main()
{
    int n;
    printf("\nEnter the no of elements: ");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,n);
    printf("\nAfter sorting : ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
