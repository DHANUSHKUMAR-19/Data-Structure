#include <stdio.h>
#include <stdlib.h>
int visited[20],g[20][20],v,e,count=0;
int sorted[20],limit=0,c=0,p=0;
void toposort()
{
    int n,i,j,k;
    n=v;
    while(n!=0)
    {
        for(i=1;i<=v;i++)
        {
            if(!visited[i])
            {
                c++;
                for(j=1;j<=v;j++)
                {
                    if(g[j][i])
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
                    break;
                }
            }
            if(c>limit)
                return;
        }
    }

}
int main()
{
    int v1,v2,i;
    printf("\nEnter the no of vertex:");
    scanf("%d",&v);
    printf("\nEnter the no of edges:");
    scanf("%d",&e);
    for(i=1;i<=e;i++)
    {
        scanf("%d%d",&v1,&v2);
        g[v1][v2]=1;
    }
    limit=(v*(v+1))/2;
    toposort();
    if(c>limit)
    {
        printf("Graph is cyclic\nToposort not possible\n");
    }
    else{
        printf("Toposort is:");
        for(i=0;i<v;i++)
            printf("\t%d",sorted[i]);
    }
    return 0;
}
