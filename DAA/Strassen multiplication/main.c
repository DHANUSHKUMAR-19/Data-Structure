#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][2],B[2][2],C[2][2];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter matrix ;2\n");
        for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    int a,b,c,d,e,f,g,h,p1,p2,p3,p4,p5,p6,p7;
    a=A[0][0];
    b=A[0][1];
    c=A[1][0];
    d=A[1][1];
    e=B[0][0];
    f=B[0][1];
    g=B[1][0];
    h=B[1][1];
    p1=a*(f-h);
    p2=h*(a+b);
    p3=e*(c+d);
    p4=d*(g-e);
    p5=(a+d)*(e+h);
    p6=(b-d)*(g+h);
    p7=(a-c)*(e+f);
    C[0][0]=p4+p5+p6-p2;
    C[0][1]=p1+p2;
    C[1][0]=p3+p4;
    C[1][1]=p1-p3+p5-p7;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
