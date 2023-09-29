#include <stdio.h>

//Escreva um programa que imprima o menor numero de uma lista ou sequencia!

void main()
{
   int sequencia[11] = {2,8,6,9,3,4,7,1,5,0,-1};
   int menor = sequencia[0];
    for (int i = 0;i < 11; i ++)
    {
        if (sequencia[i] < menor)
        {
            menor = sequencia[i];
        }
    }
    printf("o menor numero e: %d",menor);
}
