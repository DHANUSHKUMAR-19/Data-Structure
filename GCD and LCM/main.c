#include <stdio.h>
#include <stdlib.h>
int gcd1(int x,int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            return(gcd1(x-y,y));
        }
        else{
            return(gcd1(x,y-x));
        }

    }
    return x;
}
int main()
{
    int m,n,gcd;
    printf("Enter the element to find the gcd\n");
    scanf("%d%d",&m,&n);
    gcd=gcd1(m,n);
    printf("the gcd of %d and %d is %d \n",m,n,gcd);
    return 0;
}
