#include<stdio.h>
#include<time.h>
int visited[20],g[20][20],count=0,e,v;
int q[20],r=-1,f=0;
void bfs(w)
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


void BFS()//so that all the vertex isits
{
    int i;
    for(i=1;i<=v;i++)
    {
        if(visited[i]==0)
            bfs(i);
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

    printf("\nThe BFS traversal: ");
    BFS();
    if(count==v)
        printf("\nConnected graph");
    else
        printf("\nDisconnected graph");
    return 0;
}
