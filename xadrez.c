#include <stdio.h>

int main() {

    // INICIO DO PROGRAMA - TEMA 4 - NIVEL NOVATO //

    // Torre - for; Bispo - While; Rainha - do-while

    // Torre - for
    printf("--- Movimento da Torre ---\n");

    for (int contador_torre = 0; contador_torre < 5; contador_torre++ ) {
        printf ("Direita\n");
    }

    // Bispo - while
    printf("--- Movimento da Bispo ---\n");

    int contador_bispo = 0;

    while (contador_bispo < 5) {
        printf ("Cima, Direita\n");
        contador_bispo++ ;
    }

    // Rainha - do-while
    printf("--- Movimento da Rainha ---\n");

    int contador_rainha = 0 ;

    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);


    
    // FIM DO PROGRAMA - TEMA 4 - NIVEL NOVATO //



    // INICIO DO PROGRAMA - TEMA 4 - NIVEL NOVATO //

    // Cavalo - for com loops aninhados 
    printf("--- Movimento do Cavalo ---\n");

    int l_cavalo = 0 ;

    for (int contador_cavalo = 0; contador_cavalo < 2; contador_cavalo++) {
        printf("Baixo\n");
        if (contador_cavalo == 1 ) {
            while (l_cavalo < 1) {
               printf("Esquerda\n");
               l_cavalo++;
        }
    }
}
    


    // FIM DO PROGRAMA - TEMA 4 - NIVEL NOVATO //



    return 0;
}
