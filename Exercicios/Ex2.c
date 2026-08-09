#include <stdio.h>



void recursividade(int numero){
    if ( numero > 0){
        printf("%d \n", numero);

        recursividade(numero-1);
    }
}

int main (){
    int quantidade = 10;
    recursividade(quantidade);

}