#include <stdio.h>
#include <stdlib.h>
#define max 5
void BFS(int adj[][max],int visited[],int start)
{
    int que[max],front=-1,rear=-1,k;
    for(k=0;k<max;k++)
    {
        visited[k]=0;
    }
    que[++rear]=start;
    front++;
    visited[start]=1;
 while(rear>=front)
 {
     start=que[front++] ;
     printf("%c->",start+65);
     for(int i=0;i<max;i++)
     {
         if(adj[start][i]&&visited[i]==0)
         {
             que[++rear]=i;
             visited[i]=1;
         }
     }


     }

}

int main()
{
    int visited[max]={0};
    int adg[max][max],i,j,choice,start;
    while(1)
    {
        printf("\nEnter your choice :\n");
        printf("\n1.Enter Graph\n2.BFS\n3.DFS\n4.EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the adjacency matrix:\n");
            {for(i=0;i<max;i++)
                {for(j=0;j<max;j++)
                    scanf("%d",&adg[i][j]);
            }}
            break;
            case 2:
                printf("ENter the starting address :");
                scanf("%d",&start);
                BFS(adg,visited,start);
            break;
            case 3:
            break;
            case 4:exit(0);
            default:printf("\nInvalid choice\n");
        }
    }

    return 0;
}
