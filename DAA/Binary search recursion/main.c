#include <stdio.h>
#include <stdlib.h>
int a[100],c=0;
int binsearch(int l,int h,int key)
{
    int mid;
    if(l==h)
    {
        if(a[l]==key)
            {
                c=1;
                return l;
            }
    }
    else{
    mid=(l+h)/2;
    if(a[mid]==key)
    {
        c=1;
        return mid;
    }
    else if(a[mid]>key)
            binsearch(l,mid-1,key);
        else
            binsearch(mid+1,h,key);

    }
}


int main()
{
    int n;
    printf("\nEnter the no of elements :");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the key element to search :");
    int key;
    scanf("%d",&key);
    int a=binsearch(0,n-1,key);
    if(c==0)
    {
        printf("\nKey not found");
    }
    else{
        printf("%d found at %d position\n",key,a);
    }
    return 0;
}
