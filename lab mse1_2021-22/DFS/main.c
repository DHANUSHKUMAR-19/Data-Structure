#include<stdio.h>
#include<time.h>
int visited[20],g[20][20],count=0,e,v;
void dfs(w)
{
    count++;
    visited[w]=1;
    printf("%d(%d)-->",w,count);
    for(int i=1;i<=v;i++)
    {
        if(!visited[i]&&g[w][i])
            dfs(i);
    }
}

void DFS()//so that all the vertex isits
{
    int i;
    for(i=1;i<=v;i++)
    {
        if(visited[i]==0)
            dfs(i);
    }
}
int main()
{
    int i,v1,v2,s;
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

    printf("\nThe DFS traversal: ");
    DFS();
    return 0;
}
