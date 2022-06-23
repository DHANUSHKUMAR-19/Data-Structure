#include <stdio.h>
#include <stdlib.h>
int visited[20],g[20][20],count=0,e,v;
void dfs(int w)
{
    count++;
    visited[w]=count;
    printf("%d(%d)-->",w,count);
    for(int i=1;i<=v;i++)
    {
        if(!visited[i]&&g[w][i])
            dfs(i);
    }
}
void DFS()
{
    int i;
    for(i=1;i<=v;i++)
    {
        if(!visited[i])
            dfs(i);
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
    DFS();
    if(count==v)
    {
        printf("Graph is connected\n");
    }
    return 0;
}
