#include <stdio.h>

int main() {

    // Definindo o número de movimentos possíveis para cada peça
    int torre = 5, bispo = 5, rainha = 8;
    int contadorBispo = 0, contadorRainha = 0;

    // Movimentos da Torre
    printf("Movimento da Torre:\n");
    for(int contadorTorre = 0; contadorTorre < torre; contadorTorre++){
        printf("Direita\n");
    }

    // Movimentos do Bispo
    printf("Movimento do Bispo:\n");
    while (contadorBispo < bispo){
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Movimentos da Rainha
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < rainha);

    return 0;
}
