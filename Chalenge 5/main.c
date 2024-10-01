#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , somme ;
     printf("Entrer un nombre :");
     scanf("%d",&n);
    if( n < 0){
     printf("%d est un nombre negatif ." ,n);
     }
     somme = 0;
    while( n >= 1){
     somme += n ;
     n--;
     }
     printf("Total de la somme est : %d " , somme );

    return 0;
}
