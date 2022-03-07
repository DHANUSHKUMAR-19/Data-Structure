#include <stdio.h>
#include <stdlib.h>

void tower(int n, char source, char temp, char destination)
{
if (n==0) return;
tower(n-1,source, destination, temp);
printf  ("Move disc %d from %c to %c\n", n, source, destination);
tower(n-1,temp,source,destination);
}

int main()
{
   int n,source='A',temp='B',destination='C';
   printf("Enter the total no of disk\n");
   scanf("%d",&n);
   tower(n,source,temp,destination);
    return 0;
}
