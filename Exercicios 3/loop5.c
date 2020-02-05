#include <stdio.h>

int main(){
   int i;
   int numero = 0;
 

   printf("numero:\n");
   scanf("%d", &numero);

   for( i = 1 ; i<=10 ; ++i ){
   printf("%d x %d = %d\n", i, numero , i * numero);
   }
}