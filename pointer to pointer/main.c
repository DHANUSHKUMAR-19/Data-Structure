#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,**p1;
    int a=10;
    printf("VAlue of a is : %d\n ",a);
    p=&a;
    p1=&p;
    printf("VAlue of a is : %d\n",*p);
        printf("VAlue of a is :%d\n",**p1);
    return 0;
}
