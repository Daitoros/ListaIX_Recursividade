#include <stdio.h>
#include <string.h>

// Questão 06:
// Dada uma string s, desenvolver uma função
// recursiva que determine se s é ou não um
// palíndromo.

int q6(char s[], int aux){
    if(aux<(strlen(s)/2)){
        if (s[aux]!= s[strlen(s) - aux - 1]){
            return 0;
        }
        else{
            q6(s,aux+1);
        }
    } else{
        return 1;
    }
}
void main(){
    char nome[10] = "arara";

    printf("%d", q6(nome, 0));
}