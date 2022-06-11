#include <stdio.h>
#include <stdlib.h>
int a[10][10],visited[10],total;
void bfs(int);

int main()
{
    int i,j,vertex;
    printf("\nEnter the no of vertex : ");
    scanf("%d",&total);
    printf("\nEnter the adjacency matrix:");
    for(i=0;i<total;i++)
    {
        for(j=0;j<total;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<total;i++)
    {
        visited[i]=0;
    }
    printf("\nBFS traversal is :");
    bfs(0);
    return 0;
}
void bfs(int vertex)
{
    int i;
    printf("%d\t",vertex+1);
    visited[vertex]=1;
    for(i=0;i<total;i++)
    {
        if(!visited[i] && a[vertex][i]==1)
        {
            bfs(i);
        }
    }
}
