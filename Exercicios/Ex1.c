#include <stdio.h>

int main () {
/*
    for(int i = 1, j = 10; i <= 10 && j >= 1; i++, j-- ){
        printf("%d * %d = %d\n",i,j, i*j);
    }
*/
    for(int i = 0; i < 100; i += (i%2==0)?2:1){
        printf("%d",i);
}
}