#include<stdio.h>
#include<stdlib.h>
void heapify(int h[],int n)
{
    printf("\nInside heap: ");
int i,j,k,v,heap=0;
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
{
j++;
}}
if(v>=h[j])
{
heap=1;
}
else
{
h[k]=h[j];
k=j;
}
}
h[k]=v;

}
printf("\nAfter heapify :");
for(i=1;i<=n;i++)
{
printf("%d\t",h[i]);
}
}
void heapsort(int h[],int n)
{
heapify(h,n);
int i;
for(i=n;i>1;i--)
{
h[1]=h[1]+h[i];
h[i]=h[1]-h[i];
h[1]=h[1]-h[i];
printf("\nh[1]=%d and h[i]=%d\n",h[1],h[i]);
printf("\nNext recursion in heapify\n");
heapify(h,i-1);
}
}
int main()
{
int i,n;
printf("\nEnter the no of elements:  ");
scanf("%d",&n);
int h[n+1];
for(i=1;i<=n;i++)
{
printf("\nEnter %d element: ",i);
scanf("%d",&h[i]);
}
printf("\nBefore sorting: ");
for(i=1;i<=n;i++)
{
printf("%d\t",h[i]);
}
printf("\nInto hepsort\n");
heapsort(h,n);
printf("\nOutside heap sort\n");
printf("\nsorted array is :");
for(i=1;i<=n;i++)
{
printf("%d\t",h[i]);
}
return 0;
}



