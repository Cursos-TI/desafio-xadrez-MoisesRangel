#include <stdio.h>

int main() {

    // Definindo o número de movimentos possíveis para cada peça
    int torre = 5, bispo = 5, rainha = 8;
    int contadorBispo = 0, contadorRainha = 0;
    printf("*************\n");
    // Movimentos da Torre
    printf("Movimento da Torre:\n");
    for(int contadorTorre = 0; contadorTorre < torre; contadorTorre++){
        printf("Direita\n");
    }
    printf("*************\n");
    // Movimentos do Bispo
    printf("Movimento do Bispo:\n");
    while (contadorBispo < bispo){
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("*************\n");
    // Movimentos da Rainha
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < rainha);
    //Movimento do Cavalo
    printf("*************\n");
    int cavalo = 1;
    for(int contadorCavalo = 0; contadorCavalo < cavalo; contadorCavalo++){
        int contadorCavalo2 = 0;
        while(contadorCavalo2 < 2){
            printf("Baixo\n");
            contadorCavalo2++;
        }
        printf("Esquerda\n");
    }
    printf("*************\n");



    return 0;
}
