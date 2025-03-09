#include <stdio.h>
 
int main() {
   
    int torre, dama, bispo;

    torre = 1;
    printf("Torre:\n");

    while (torre <= 5) {
        printf("Direita\n");
        torre++;
    }

    bispo = 1;

    printf("\nBispo:\n");
    do {
        printf("Cima Direita\n");
        bispo++;
    } while (bispo <= 5);
    
    printf("\nDama:\n");

    for (dama = 1; dama <= 8; dama++) {
        printf("Esquerda\n");
    }








    return 0;
}