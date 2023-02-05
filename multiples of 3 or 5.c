#include <stdio.h>
#include <stdlib.h>

int main () {
int i, soma = 0;

for(i = 0; i < 1000; i++){ // loop que vai de i ate 999
    if(i%3 == 0 || i%5 == 0){ // condiçao para reconhecer todos numeros que sejam divisiveis por 3 ou 5 
        soma = soma + i; // soma para guardar os numeros        
    }
}

printf("Resultado : %d\n", soma);  // resultado da soma 
    return 0;
}
