#include <stdio.h>

void main()
{
    for (int i = 2; i <= 10; i ++)
    {
        printf("%d\n\n",i);
        for(int j = 1; j <= 10; j ++)
        {
            int resultado = i * j;
            printf("%d X %d = %d\n",i,j,resultado);
        }
        printf("\n");
    }
}
