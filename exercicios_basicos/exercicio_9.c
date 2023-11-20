#include <stdio.h>
#include <stdlib.h>

//Crie um programa para determinar se o numero digitado pelo usuario é par ou impar!
// o programa tem que ter a opção de testar novos numeros antes de ser finalizado, ou seja somente acabar quando o usuario decidir

 void main(){
     char testar_outro = 's';
     while(testar_outro == 's'){
        int resultado;
        printf("Digite um numero (Obs: sem virgula): \n");
        scanf("%d",&resultado);
        if ((resultado % 2) == 0){
            printf("\nO numero %i e Par.",resultado);
        }else {
            printf("\nO numero %i e impar.",resultado);
        }
        printf("\n\nDeseja Testar outro numero?\n(S = Sim or N = Nao)\n");
        scanf("%s",&testar_outro);
     }
    printf("\nObrigado por usar o programa.\n\n");
}
