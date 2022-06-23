#include <stdio.h>
#include <stdlib.h>
void swap(int i,int j)
{
int temp;
temp=i;
i=j;
j=temp;
}
int main()
{
    int a[]={1,2,3};

    swap(a[0],a[1]);
    printf("after swapping\n");
for(int i=0;i<3;i++)
    printf("%d\t",a[i]);

    return 0;
}
