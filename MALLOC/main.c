#include <stdio.h>
#include <stdlib.h>

int main()
{
int *p,n,i;
p=(int*)malloc(n*sizeof(int));
printf("Enter the number of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",p+i);

}
for(i=0;i<n;i++)
{
    printf("%d",*(p+i));
}
    return 0;
}
