#include <stdio.h>
#include <stdlib.h>

int partition(int a[],int l,int h)
{
    int p,i,j,temp;
    i=l;
    j=h+1;
    p=a[l];
    do{
        do{
            i++;
            }while(a[i]<p);
            do{
                j--;
                }while(a[j]>p );


                      temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;


            }while(i<j);
             temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
             temp=a[l];
                    a[l]=a[j];
                    a[j]=temp;
return j;
}
void quicksort(int a[],int l,int h)
{
    int s;
    if(l<h)
    {
        s=partition(a,l,h);
        quicksort(a,l,s-1);
        quicksort(a,s+1,h);
    }
}



int main()
{
    int n,i;
    printf("\nEnter the no of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Before sorting: \n");
       for(i=0;i<n;i++)
        printf("%d\t",a[i]);

    quicksort(a,0,n-1);
    printf("\nSorted array is :");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
