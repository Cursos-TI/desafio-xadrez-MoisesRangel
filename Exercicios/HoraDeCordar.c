#include <stdio.h>

int main () {

    /*int i = 0;

    while(i <= 10){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
    }
    */

    /*
    int numero;

    do {
        printf("\nDigite um numero para para sair do programa:");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("\nO número %d é par ", numero);
        }else {
            printf("\nO número %d é impar", numero);
        }
    } while (numero % 2 != 0);

    printf("\nVocê digitou um numero par, saindo do programa...\n");
    */

    int numero;

    printf("Digite o numero da tabuada que deseja visualizar:");
    scanf("%d",&numero);

    for(int i = 0; i<=10 ;i++){
        printf("\n%d x %d = %d", numero, i, i * numero);
    }
}