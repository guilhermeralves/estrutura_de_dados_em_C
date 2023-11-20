#include<stdio.h>

//As funções em c utilizam passagem de argumentos por valor ou seja, somente o valor literal é passado para a função
//que por sua vez cria uma cópia do valor recebido salvando em uma outra variavel, que morre ao final da função.
//Ponteiros podem resolver o problema de contexto quando queremos alterar uma variavel externa à função.

int somanumeros (int *numero1, int *numero2){
    printf("%x,%x\n",numero1,numero2);
    return *numero1+*numero2;
};

void main (){
    int numerao1 = 4;
    int numerao2 = 9;

    printf("%x,%x\n",&numerao1,&numerao2);
    printf("%d",somanumeros(&numerao1,&numerao2));
}

