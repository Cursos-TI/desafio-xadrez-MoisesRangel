#include <stdio.h>

void moverTorre (int casas) {
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva: uma casa a menos para percorrer
    }
}

void moverRainha (int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva: uma casa a menos para percorrer
    }
}

void moverBispo (int casas) {
    if(casas > 0){
        // Loop externo: movimento vertical de uma casa diagonal (Cima)
        for (int i = 0; i < 1; i++){
            printf("Cima\n");
            // Loop interno: movimento horizontal de uma casa diagonal (Direita)
            for(int j = 0; j < 1; j++){
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1); 
    }
}

void moverCavalo (int casas){
    int casasParaCima = 2;   
    int casasParaDireita = 1; 

    for(int i = 0; i < casas; i++){
        if(i < 1){
            int j = 0;
            while(j < casas){
                if (j == casasParaCima){break;}
                printf("Cima\n");
                j++;
            }
        }
        if (i == casasParaDireita){break;}
        printf("Direita\n");
    }
}


int main() {

    int torre = 5, bispo = 5, rainha = 8, cavalo = 3;

    moverTorre(torre);

    printf("\n"); 
    moverRainha(rainha);

    printf("\n"); 
    moverBispo(bispo);

    printf("\n");
    moverCavalo(cavalo);

    return 0;
}
