#include <stdio.h>

void movimentotorre() {
    int torre = 1;
    printf("Torre:\n");

    while (torre <= 5) {
        printf("Direita\n");
        torre++;
    }
}
    
void movimentobispo() {
    printf("\nBispo:\n");
    for (int bispo1 = 1; bispo1 <= 5; bispo1++) {
       for (int bispo2 = 1; bispo2 <= 1; bispo2++) {
           printf("Direita\n");
       }
       printf("Cima\n");
    }
}

void movimentodama() {
    int dama = 1;
    printf("\nDama:\n");

    while (dama <= 8) {
        printf("Esquerda\n");
        dama++;
    }
    
}

void movimentocavalo() {
    printf("\nCavalo:\n");
    for (int cavalo1 = 0; cavalo1 < 1; cavalo1++) { 
        int cavalo2 = 0;
        while (cavalo2 < 2) {  
            printf("Cima\n");
            cavalo2++;
    
            if (cavalo2 == 1) {
                continue;  
            }
        }
        printf("Direita\n");  
        break;  
    }    

}

int main() {
   
    // Declarar Variaveis

    int torre, dama;

    // Movimento da Torre

    movimentotorre();
    
    //Movimento do bispo

    movimentobispo();
    
    // Movimento da Dama

    movimentodama();

    // Movimento do cavalo
    
    movimentocavalo();

    // Retorno da função

    return 0;
}