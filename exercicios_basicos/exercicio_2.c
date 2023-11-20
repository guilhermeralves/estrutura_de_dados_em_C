#include <stdio.h>

void main()
{
    //APROVAÇÃO
    //média igual ou maior a 5
    //não pode ter nenhuma nota = 0
    //não pode ter mais que 10 faltas
    //RECUPERAÇÃO
    //não pode ter mais que 10 faltas
    //média maior que 3
    //REPROVADO
    //mais que 10 faltas
    //media menor que 3

    int falta = 10;
    float nota[4] = {6.5,4,9.5,3};
    float media = (nota[0]+nota[1]+nota[2]+nota[3])/4;

    if (media >= 5 && falta <= 10 && nota[0] > 0 && nota[1] > 0 && nota[2] > 0 && nota[3] > 0){
        printf("Aluno Aprovado");
    }
    if (falta <= 10 && media >= 3 && media < 5){
        printf("Aluno de Recuperaçao");
    }
    if(falta > 10 || media < 3){
        printf("Aluno Reprovado");
    }
}