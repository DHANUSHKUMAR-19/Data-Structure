
#include <stdio.h>
#include <stdlib.h>

int main()
{
int *p,n,i;
p=(int*)calloc(n,sizeof(int));
if(p==NULL)
{
    printf("Memory is not Allocated\n");
    exit(1);
}
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
free(p);
p=NULL;
    return 0;
}

