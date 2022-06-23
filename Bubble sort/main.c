#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],ch,temp,i,j;
    printf("Enter the total numbers :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter your choice\n1.Ascending order\n2.Descending order\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        printf("Sorted array is  : \t");
           for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    }
    else{

            if(ch==1)
    {
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        printf("Sorted array is  : \t");
           for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    }
    }
}
