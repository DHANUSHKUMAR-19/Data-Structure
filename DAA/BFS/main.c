#include <stdio.h>
#include <stdlib.h>
int visited[20],g[20][20],e,v,count=0;
int q[20],f=0,r=-1;
void bfs(int w)
{
    count++;
    visited[w]=count;
    q[++r]=w;
    while(f<=r)
    {
        int s=q[f++];
        printf("%d(%d)-->",s,count);
        for(int i=1;i<=v;i++)
        {
            if(!visited[i]&&g[s][i])
            {
                q[++r]=i;
                visited[i]=++count;
            }
        }
    }

}
void BFS()
{
    int i;
    for(i=1;i<=v;i++)
    {
        if(!visited[i])
            bfs(i);
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
    BFS();
    if(count==v)
    {
        printf("Graph is connected\n");
    }
    return 0;
}
