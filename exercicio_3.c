#include <stdio.h>

//Usando laço de repetição, printar a tabuada dos numeros indicados pelo usuário!

void main()
{
    int um,dois,tres,quatro,cinco,seis,sete,oito,nove,dez;

    int a = 0;
    int b = 0;

    printf("Qual o Primeiro Numero?:");
    scanf("%d",&a);
    printf("Qual o Segundo Número?:");
    scanf("%d",&b);

    while (a <= b)
    {
        um = 1 * a;
        printf("%d X 1 = %d\n",a,um);
        dois = 2 * a;
        printf("%d X 2 = %d\n",a,dois);
        tres = 3 * a;
        printf("%d X 3 = %d\n",a,tres);
        quatro = 4 * a;
        printf("%d X 4 = %d\n",a,quatro);
        cinco = 5 * a;
        printf("%d X 5 = %d\n",a,cinco);
        seis = 6 * a;
        printf("%d X 6 = %d\n",a,seis);
        sete = 7 * a;
        printf("%d X 7 = %d\n",a,sete);
        oito = 8 * a;
        printf("%d X 8 = %d\n",a,oito);
        nove = 9 * a;
        printf("%d X 9 = %d\n",a,nove);
        dez = 10 * a;
        printf("%d X 10 = %d\n\n",a,dez);
        a = a + 1;
    }
}
