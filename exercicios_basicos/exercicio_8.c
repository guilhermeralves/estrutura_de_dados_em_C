#include <stdio.h>
//crie uma função que some dois numeros inteiros, e retorne o resultado dessa soma.

int soma_numeros (int numero_1,int numero_2){
    return numero_1 + numero_2;
}

void main()
{
    int numero_1;
    int numero_2;
    printf("Quais sao os numeros?:\n");
    scanf("%d,%d",&numero_1,&numero_2);
    int resultado = soma_numeros(numero_1,numero_2);
    printf("A soma dos numeoros e: %d",resultado);
}
