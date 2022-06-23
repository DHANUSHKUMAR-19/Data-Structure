#include <stdio.h>
#include <stdlib.h>
int a[10][10],v,e;
int mini(int a ,int b)
{
    if(a<b)
    {
        return a;
    }
    else
        return b;
}
void floyd()
{
    int i,j,k;
    for(k=1;k<=v;k++)
    {
    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            a[i][j]=mini(a[i][j],a[i][k]+a[k][j]);
        }
    }
}}
int main()
{
    int v1,v2,w,i,j;
    printf("\nEnter the no of vertex : ");
    scanf("%d",&v);
    printf("\nEnter the no of edges: ");
    scanf("%d",&e);
    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            if(i==j)
            {
                a[i][j]=0;
            }
            else
            {
                a[i][j]=999;
            }
        }
    }
    for(i=1;i<=e;i++)
    {

            printf("\nEnter  the edge: %d : ",i);
            scanf("%d%d",&v1,&v2);
            printf("\nEnter the weight of edge %d-->%d: ",v1,v2);
            scanf("%d",&w);
            a[v1][v2]=w;
    }
    printf("\nInitially: \n");
    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    floyd();
     printf("\nAfter : \n");
    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
