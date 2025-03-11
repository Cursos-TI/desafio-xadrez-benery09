#include <stdio.h>
 
int main() {
   
    // Declarar Variaveis
    int torre, dama, bispo;


    // Movimento da Torre
    torre = 1;
    printf("Torre:\n");

    while (torre <= 5) {
        printf("Direita\n");
        torre++;
    }

    bispo = 1;
    //Movimento do bispo

    printf("\nBispo:\n");
    do {
        printf("Cima Direita\n");
        bispo++;
    } while (bispo <= 5);
    
    // Movimento da Dama

    printf("\nDama:\n");

    for (dama = 1; dama <= 8; dama++) {
        printf("Esquerda\n");
    }


    printf("\nCavalo\n");

     // Declarar Variaveis

    int cavalo; 
    int cavalo2 = 0;

    // Movimento do cavalo

    for (cavalo = 0; cavalo < 1; cavalo++) {

        while (cavalo2 < 2) {
            printf("Baixo, ");
            cavalo2++;
            
        }
        printf("Esquerda\n");

    }





    return 0;
}