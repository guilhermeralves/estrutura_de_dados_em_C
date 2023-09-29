#include <stdio.h>

//Escreva um programa que imprima o maior numero de uma lista ou sequencia!

void main()
{
    int sequencia[10] = {5,1,8,3,9,4,6,2,0};
    int maior = sequencia[0];

    for (int i = 1;i < 10; i++)
    {
        if (sequencia[i] > maior)
        {
            maior = sequencia[i];
        }
    }
     printf("O numero maior e: %d",maior);
}
