#include <stdio.h>

// Questão 03:
// Desenvolver uma função recursiva que exiba
// todos os múltiplos do número N, inferiores ou
// iguais ao valor V.

int q3(int N, int V){
    if(V%N!=0){
        q3(N,V-1);
    } else {
        if(V>N){
            q3(N, V/N);
            printf("%d ", V);
        }
        else{
            printf("%d ", V);
            return 0;
        }
    }
}
void main (){
    q3(10,100);
}