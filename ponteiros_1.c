#include<stdio.h>

//Ponteiros
//formas de printar informações sobre um ponteiro.
//Ponteiro é um tipo de variavel que tem o seu endereço de memória E em seu valor literal, guarda outro endereço de memória.

void main (){
    int *pont;

    int numero = 42;

    pont = &numero;

    printf("%x\n",&numero);
    printf("%x\n",pont);
    printf("%x\n",&pont);
    printf("%d",*pont);
}

