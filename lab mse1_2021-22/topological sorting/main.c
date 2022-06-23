#include<stdio.h>
#include<stdlib.h>
int visited[20],g[20][20],count=0,e,v;
int sorted[20],c=0,limit=0,p=0;
void topological_sort()
{
    int i,j,n,k;
    n=v;
    while(n!=0)
    {
        for(i=1;i<=v;i++)
        {
            if(visited[i]==0)
            {
                c++;
                for(j=1;j<=v;j++)
                {
                    if(g[j][i]==1)
                        break;
                }
                if(j==v+1)
                {
                    sorted[p++]=i;
                    visited[i]=++count;
                    n--;
                    for(k=1;k<=v;k++)
                    {
                        g[i][k]=0;
                    }


                }
            }
            if(c>limit) return;
        }
    }
}
int main()
{
       int i,v1,v2;
    printf("\Enter the no of vertex :");
    scanf("%d",&v);
    printf("\nEnter the no edges : ");
    scanf("%d",&e);
    for(i=1;i<=e;i++)
    {
        printf("\nFORMAT:<starting vertex><-----><Ending vertex>");
        scanf("%d%d",&v1,&v2);
        g[v1][v2]=1;
    }
    limit=(v*(v+1))/2;
    topological_sort();
    if(c>limit)
    {
        printf("Cycle is present");

    }
    else
    {
        for(i=0;i<v;i++)
        {
            printf("%d-->",sorted[i]);
        }
    }
    return 0;
}
