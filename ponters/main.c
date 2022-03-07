#include<stdio.h>
int main()
{
int n,num,i,a[10];
int big,pos;
printf("Enter the values of n: ");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
big=a[0];
pos=0;
for(i=0;i<=n-1;i++)
{
if(a[i]>big)
big=a[i];
pos=i;
 }
printf("Largest number is: %d",big);
printf("position=%d",i);
return 0;
}
