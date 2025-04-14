#include <stdio.h>

// Questão 09:
// Desenvolver uma função recursiva que, dado
// um vetor V com quant números inteiros,
// determine se seus elementos estão dispostos
// de maneira a representar uma progressão
// aritmética.

int q09(int v[], int quant, int aux, int aux2){
    if(aux<quant-1){
        if(aux2==0){
            aux2= v[aux+1]-v[aux];
        } else{
            if(aux2!=v[aux+1]-v[aux]){
                return 0; 
             } else{
                 q09(v,quant,aux+1,aux2);
             }
        }
    }
    return 1;
}