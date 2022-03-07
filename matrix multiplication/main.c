#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,p,q,m,n;
    printf("Enter the order of matrix 1:\n");
    scanf("%d%d",&m,&n);
      printf("Enter the order of matrix 2:\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("Matrix multiplication is not possible :\n");
        exit(0);
    }
    printf("Enter the matrix 1 :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
      printf("Enter the matrix 2 :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The resultant matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
    {
        c[i][j]=0;
        for(k=0;k<q;k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }

    }

    }
        for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }printf("\n");
    }
    return 0;
}
