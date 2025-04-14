#include <stdio.h>

int funcao (int A, int B)
{
    if (A >= B)
    {
        return funcao (A-B, B);
    }
    else
    {
        return A;
    }
}

void main(){
    printf("%d", funcao(32, 6));
}