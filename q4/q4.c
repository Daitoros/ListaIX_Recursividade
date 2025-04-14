#include <stdio.h>

// Questão 04:
// Fazer uma função recursiva que, dado um
// número inteiro N, exiba o mesmo na base 2
// (binária).

int q4(int N){
    if(N>=2){
        printf("%d", N%2);
        q4(N/2);
    } else{
        printf("%d", N);
        return 0;
    }
}
void main(){
    q4(10);
}