#include <stdio.h>
#include <stdlib.h>

//PARA FAZER O PROGRAMA ENTENDER LETRAS MINUSCULAS E MAIUSCULAS COMO IGUAIS
//dica: CRIAR UMA FUNÇÃO UPDOWN TODOWN PARA IGUALAR A LETRA_DIGITADA E ASSIM COMPARAR MESMO SENDO MAIUSCULO OU MINUSCULO

char maiuscula (char minuscula){
    switch(minuscula){
        case 'a':
            return 'A';
        case 'b':
            return 'B';
        case 'c':
            return 'C';
        case 'd':
            return 'D';
        case 'e':
            return 'E';
        case 'f':
            return 'F';
        case 'g':
            return 'G';
        case 'h':
            return 'H';
        case 'i':
            return 'I';
        case 'j':
            return 'J';
        case 'k':
            return 'K';
        case 'l':
            return 'L';
        case 'm':
            return 'M';
        case 'n':
            return 'N';
        case 'o':
            return 'O';
        case 'p':
            return 'P';
        case 'q':
            return 'Q';
        case 'r':
            return 'R';
        case 's':
            return 'S';
        case 't':
            return 'T';
        case 'u':
            return 'U';
        case 'v':
            return 'V';
        case 'w':
            return 'W';
        case 'x':
            return 'X';
        case 'y':
            return 'Y';
        case 'z':
            return 'Z';
        default:
            return minuscula;
    }
}

 void main(){
    printf("Bem vindo ao jogo da forca do Gui!\nPrimeiro digite a palavra do proximo jogo e uma dica relacionada a ela.\nObs: DIGITE TODAS LETRAS COM CAPS LOCK LIGADO!\n\n\n");
    char palavra[20];
    char dica[20];
    char resultado[20];
    printf("(Obs: ate 20 letras)\n\n\nPALAVRA:");
    scanf("%s",&palavra);
    printf("\nDigite uma palavra relacionada como dica:");
    scanf("%s",&dica);
    int letras = 0;
    int acertos = 0;

    while(palavra[letras] != '\0')
        {
            palavra[letras] = maiuscula(palavra[letras]);
            resultado[letras] = '_';
            letras ++;
        }
    system("pause");
    system("cls");
    char letra_tentativa[50];
    int numero_tentativa = 0;
    printf("Jogo Iniciado, voce tem 7 tentativas.\n\n");
    printf("A dica desse jogo e: ( %s )\n\n",dica);
    printf("%s",resultado);
    printf("\nA palavra escolhida tem %d letras\n\n",letras);

    while(numero_tentativa < 7)
        {
            int i = 0;
            int letra_revelada = 0;
            printf("DIGITE SUA TENTATIVA:");
            scanf("%s",&letra_tentativa);
            letra_tentativa[0] = maiuscula(letra_tentativa[0]);
            while(palavra[i] != '\0')
            {
                if(letra_tentativa[0] == palavra[i])
                    {
                        resultado[i] = letra_tentativa[0];
                        letra_revelada++;
                        acertos++;
                    }
                    i++;
            }
            printf("\nVOCE AINDA TEM %d TENTATIVAS\n",6 - numero_tentativa);
            printf("%s\n\n",resultado);
            printf("Voce encontrou %d letra(s)!\n",letra_revelada);
            numero_tentativa++;
            if (acertos == letras)
                {
                    printf("\nVOCE GANHOU O JOGO!");
                    return;
                }
        }
        printf("\n\nVOCE PERDEU O JOGO!\n");
        printf("A RESPOSTA ERA %s",palavra);
}
