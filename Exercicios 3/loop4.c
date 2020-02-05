#include <stdio.h>

int main(){
    int number[11];
    float soma = 0;
    int i;
    float media;
    
    for ( i = 0; i < 11; i++){
        number[i] = i;
        printf(" Elemento: %d\n", number[i]);
        soma = soma + number[i];
        media = soma / 10;
    } 
        
        printf("media = %f\n ", media);

    return 0;

}