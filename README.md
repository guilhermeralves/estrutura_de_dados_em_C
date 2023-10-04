# Conceitos básicos da linguagem C
## IMPORTANDO BIBLIOTECAS:

Esqueleto de um programa em C contém, Declarações de bibliotecas globais como

```
#include<stdio.h> 
#include<stdlib.h>
```

## INÍCIO DO CÓDIGO:

```
int main(){}
```

Obs: Todo programa em C deve conter a função chamada "main" ela é responsavel por iniciar e finalizar o programa, dentro dela é onde colocamos todo o corpo do programa.

## IDENTAÇÃO DO CÓDIGO:

A identação é como "arrumamos" os espaços no codigo para facilitar a leitura

Exemplos:

- código sem Identação

```
int main(){printf("hello word!\n");return 0;}
```

- código com Identação

```
int main()
{
    printf("hello word!\n");
    return 0;
}
```
 
## TIPOS DE DADOS EM C

Estes são so tipos de dados em C.

### Escalares:

- char 
- int
- float
- double



## COMPILAÇÃO DO CÓDIGO:

A compilação do código possui 4 etapas:

1°- Pré-Processamento:
    o arquivo é processado em um pré-processador, onde são removidos os comentarios e a interpretação das diretivas de compilação, as quais iniciam com #.

2°- Verificação Sintática:
    onde é visto se foi escrito de forma correta de acordo com a sintaxe padrão da linguagem de programação, no caso C.

3°- Compilação:
    

4°- Link-Edição:
    