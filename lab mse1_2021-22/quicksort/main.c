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
    int i,j,p,temp;
    i=l;
    j=h+1;
    p=a[l];
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
/*temp=a[i];
a[i]=a[j];
a[j]=temp;*/
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
            //undo the last swapC:\Users\DGOWDA\Documents\GitHub\Data-Structure\quick sort try\quick sort try.cbp
          temp=a[l];
          a[l]=a[j];
          a[j]=temp;
          return j;

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
  printf("\nBefor sorting : ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    quicksort(a,0,n-1);
    printf("\nAfter sorting : ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}

