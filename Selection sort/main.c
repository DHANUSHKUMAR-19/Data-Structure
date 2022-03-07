/*
Logic :
IT will search for the least or max element in the array
Depending on the condition
 after traversing whole array it will swap the value with one pointed by
  i*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[50],n,temp,i,j,pos;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the numbers\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Entered values are\n");
for(i=0;i<n;i++)
printf("%d\t", a[i]);
for(i=0;i<n-1;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
    printf("\n%d iteration of j\n",j);
if(a[j]>a[pos])
{pos=j;
printf("Value : %d\n",a[pos]);
}
}
printf("%d pass\n",i+1);
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
}
printf("\nThe sorted values are\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
