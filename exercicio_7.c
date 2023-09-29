#include <stdio.h>

// escreva um programa que resulte a soma dos resultados de uma lista ou sequencia!

void main()
{
    int sequencia[15] = {5,1,8,3,9,4,6,2,0,3,7,12,17,67};
    //usando for para printar a sequencia completa!
    for (int i_1 = 0;i_1 < 14;i_1++)
    {
        printf("%d, ",sequencia[i_1]);
    }
    int soma = sequencia[0];

    for(int i = 1;i < 15; i++)
    {
        soma = soma + sequencia[i];
    }
    printf("\n\nA soma dos numeros da sequencia e: %d\n",soma);
}
