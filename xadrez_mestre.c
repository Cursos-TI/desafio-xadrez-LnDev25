#include <stdio.h>


// Função da Torre
void moverTorre(int casas_torre) {
    if (casas_torre > 0) {  
       printf("Direita\n");
       moverTorre(casas_torre - 1);
    } 
}

// Função da Rainha
void moverRainha(int casas_rainha) {
    if (casas_rainha > 0){
        printf("Esquerda\n");
        moverRainha(casas_rainha - 1);
    }
}

// Função do Bispo
void moverBispo(int casas_bispo) {

    if (casas_bispo > 0) {
        for (int vertical = 0; vertical < 1; vertical++) {
            for (int horizontal = 0; horizontal < 1; horizontal++) {
                printf("Cima, Direita\n");        
            }
        }

        moverBispo(casas_bispo - 1); 
    } 
}

// Função do Cavalo
void moverCavalo () {

    for ( int externo = 0; externo < 1; externo ++) {

        for (int interno = 0; interno < 3; interno ++ ) {

            if ( interno == 2 ) {
                printf ("Direita\n");
                break;
            }

            if ( interno < 2 ) {
                printf ("Cima\n");
                continue;
            }
        }
    }

}

    int main () {

        // Chamando a função recursiva da Torre
        printf("--- Movimento da Torre (Recursivo) ---\n");
        moverTorre(5); // Começa a magia pedindo 5 casas
        

        // Chamando a função recursiva da rainha
        printf("--- Movimento da Rainha (Recursivo) ---\n");
        moverRainha(8);


        // Chamando a função do bispo com loops e recursivo
        printf("--- Movimento do Bispo (Recursivo + Loops) ---\n");
        moverBispo(5);


        // Chamando a função do cavalo 
        printf("--- Movimento do Cavalo (Complexo) ---\n");
        moverCavalo();


        return 0;
    }
        