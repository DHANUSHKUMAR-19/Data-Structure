#include <stdio.h>
#include <stdlib.h>
#define max 50
int a[max],c=0;
int binsearch(int key,int l,int h)
{
    int mid;
    if(l==h)
    {
        if(key==a[l])
        {
            c++;
            return l+1;
        }
    }
    else {
        mid=(l+h)/2;
    if(a[mid]==key)
        {
            c++;
            return mid+1;
        }
        else if(a[mid]>key)
        {
            return binsearch(key,l,mid-1);

        }
        else{
            return binsearch(key,mid+1,h);
        }
    }
    }



int main()
{
    int n,key,l,h,ans;
    printf("Enter the total numbers going to be entered\n");
    scanf("%d",&n);
    printf("Enter only sorted array\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&a[i]);
    }
    l=0;
    h=n-1;
    printf("Enter the key element to search\n");
    scanf("%d",&key);
    ans=binsearch(key,l,h);
    if(c==0)
    {
        printf("Unsuccessfull search\n");
    }else{
    printf("%d is found at %d position",key,ans);
    }

    return 0;
}
