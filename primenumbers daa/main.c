#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,flag,sr,er;
    printf("enter the ending range :");
    scanf("%d%d",&sr,&er);
    for(i=sr;i<=er;i++)
    {
        flag=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\t",i);
        }

    }
    return 0;
}
