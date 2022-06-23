#include <stdio.h>
#include <stdlib.h>
int a[20][20],vt[20],v_vt[20],v,e[25][3],inc=0;
void initialize()
{
    int i;
    for(i=1;i<=v;i++)
    {
        vt[i]=0;
        v_vt[i]=1;
    }
    vt[1]=1;
    v_vt[1]=0;
}
void prims()
{
    int i,j,k,min,v1,v2;
    initialize();
    for(i=1;i<v;i++)
    {
        min=9999;
            for(j=1;j<=v;j++)
            {
                for(k=1;k<=v;k++)
                {
                    if(vt[j]!=0 && v_vt[k]!=0 && a[j][k]<min)
                    {
                        v1=j;
                        v2=k;
                        min=a[j][k];
                    }
                }
            }
            e[inc][0]=v1;
            e[inc][1]=v2;
            e[inc][2]=min;
            inc++;
            vt[v2]=1;
            v_vt[v2]=0;

    }
}
int main()
{
    int i,j,v1,v2,w,e1,total=0;
    printf("\nEnter the no of vertex: ");
    scanf("%d",&v);
    printf("\nEnter the no of edges : ");
    scanf("%d",&e1);
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
                a[i][j]=9999;
            }
        }
    }
    printf("\nEnter the edges: ");
    for(i=1;i<=e1;i++)
    {
        printf("\nEnter edge : %d :",i);
        scanf("%d%d",&v1,&v2);
        printf("\nEnter the weight of edge %d-->%d : ",v1,v2);
        scanf("%d",&w);
        a[v1][v2]=a[v2][v1]=w;
    }
    prims();
    printf("\nAfter prims: ");
    for(i=0;i<inc;i++)
    {
       v1=e[i][0];
       v2=e[i][1];
       total+=e[i][2];
       printf("\n%c->%c(weight=%d)",v1+65,v2+65,e[i][2]);

       }
       printf("sum of  edges : %d",total);
    return 0;
}
