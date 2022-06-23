#include <stdio.h>
#include <stdlib.h>
void heapify(int h[],int n)
{
    int i,j,k,heap,v;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        v=h[k];
        heap=0;
        while(!heap && (2*k)<=n)
        {
            j=2*k;
            if(j<n)
            {
                if(h[j]<h[j+1])
                    j++;
                    }
                if(v>=h[j])
                    heap=1;
                else
                 {

                 h[k]=h[j];
                 k=j;
                 }
            }
            h[k]=v;
        }
    }
    void heapsort(int h[],int n)
    {
        int i,temp;
        heapify(h,n);
        for(i=n;i>1;i--)
        {
            temp=h[1];
            h[1]=h[i];
            h[i]=temp;
            heapify(h,i-1);

        }
    }


int main()
{
    int n;
    printf("\nEnter the no of elements: ");
    scanf ("%d",&n);
    int h[n+1],i;
    printf("\nEnter the elements: ");
    for(i=1;i<=n;i++)
        scanf("%d",&h[i]);
    printf("\nBefore heapsort: ");
       for(i=1;i<=n;i++)
        printf("%d\t",h[i]);
    heapsort(h,n);
      printf("\nAfter Heapsort: ");
       for(i=1;i<=n;i++)
        printf("%d\t",h[i]);

    return 0;
}
