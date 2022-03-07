#include <stdio.h>
#include <stdlib.h>
long int power(b,p)
{

    if(p==0)
    {
        return 1;
    }
    return(b*(power(b,p-1)));

}

int main()
{
    int b,p;
    printf("Enter the Base and Power\n");
    scanf("%d%d",&b,&p);
    int result;
    result=power(b,p);
    printf("%d",result);
    return 0;
}
