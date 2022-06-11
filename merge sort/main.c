#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],c[100],i,k,j,m,n;
    printf("Enter the number of element to enter to list 1:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Enter the number of element to enter to list 2:\n");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    i=j=k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    if(i<n)
    {
        while(i<n)
        {
            c[k++]=a[i++];
        }

    }
    if(j<m)
    {
        while(j<m)
        {
            c[k++]=b[j++];
        }
    }
    printf("Final list:\t");
    for(i=0;i<(m+n);i++)
    {
        printf("%d\t",c[i]);
    }

    return 0;
}
