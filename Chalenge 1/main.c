#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n, i;

    printf("entrer un nombre :");
    scanf("%d",&n);
    i = 1;
    for( i = 10 ; i >= 1 ; i --)
        {
    printf("%d*%d=%d\n",n,i,i*n);

    }

    return 0;
}
