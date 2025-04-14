#include <stdio.h>

// Questão 07:
// Desenvolver uma função recursiva que
// determine o número de caracteres comuns
// entre duas strings s1 e s2.

int q7(char s1[], char s2[], int aux, int aux2, int cont){
    if(aux< strlen(s1)){
        if (aux2<strlen(s2)){
            if(s2[aux2]!=s1[aux]){
                q7(s1,s2,aux,aux2+1,cont);
            } else {
                q7(s1,s2,aux,aux2+1,cont+1);
            }
        } else{
            q7(s1,s2,aux+1,0,cont);
        }
    } else{
        return cont;
    }
}