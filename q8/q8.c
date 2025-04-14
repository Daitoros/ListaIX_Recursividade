#include <stdio.h>
#include <string.h>
// Questão 08:
// Desenvolver uma função recursiva que, dada
// uma string, exiba-a invertida.

void q8(char s[], int aux){
    if(aux<(strlen(s))){
        q8(s, aux+1);
        printf("%c", s[aux]);
    } else {
        return;
    }
}
void main(){
    char nome[]= "Davi";

    q8(nome,0);
}