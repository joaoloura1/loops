#include <stdio.h>

int main(){
    int number[11];
    int soma = 0;
    int i;
    
    for ( i = 0; i < 11; i++){
        number[i] = i;
        printf(" Elemento: %d\n", number[i]);
        soma = soma + number[i];
    } 
        
        printf("total = %d\n ", soma);

    return 0;

}