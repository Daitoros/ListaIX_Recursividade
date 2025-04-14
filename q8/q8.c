#include <stdio.h>

// Questão 08:
// Desenvolver uma função recursiva que, dada
// uma string, exiba-a invertida.

int q8(char s[], int aux){
    if(aux<(strlen(s)-1)){
        q5(s, aux+1);
        printf("%c", s[aux]);
    } else {
        return 1;
    }
}