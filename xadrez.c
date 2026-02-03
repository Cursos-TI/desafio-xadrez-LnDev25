#include <stdio.h>

int main() {

    // INICIO DO PROGRAMA - TEMA 4 - NIVEL NOVATO //

    // Torre - for; Bispo - While; Rainha - do-while

    // Torre
    printf("--- Movimento da Torre ---\n");

    for (int contador_torre = 0; contador_torre < 5; contador_torre++ ) {
        printf ("Direita\n");
    }

    // Bispo
    printf("--- Movimento da Bispo ---\n");

    int contador_bispo = 0;

    while (contador_bispo < 5) {
        printf ("Cima, Direita\n");
        contador_bispo++ ;
    }

    // Rainha
    printf("--- Movimento da Rainha ---\n");

    int contador_rainha = 0 ;

    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);

    
    // FIM DO PROGRAMA - TEMA 4 - NIVEL NOVATO //

    return 0;
}
