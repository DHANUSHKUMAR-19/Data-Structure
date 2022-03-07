#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char source,destin,aux;
    source='A';
    destin='C';
    aux='B';
    printf("Enter the Total no of Disks");
    scanf("%d",&n);
    tower(n,source,aux,destin);
    return 0;
}
void tower(int n, char source,char aux,char destin)
{
    if(n==0)
        return;
    tower(n-1,source,destin,aux);
    printf("Move disk %d from %c to %c\n",n,source,destin);
    tower(n-1,aux,source,destin);
}
