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
    O arquivo é processado em um pré-processador, onde são removidos os comentarios e a interpretação das diretivas de compilação, as quais iniciam com #.

2°- Verificação Sintática:
    Onde é visto se foi escrito de forma correta de acordo com a sintaxe padrão da linguagem de programação, no caso C.

3°- Compilação:
    O compilador é um programa que verifica se o
    programa fonte não apresenta nenhum erro de sintaxe e gera o
    programa executável. Quando o programa fonte apresenta algum
    problema, dizemos que ocorreu um “erro de compilação”. Assim, o
    programador deverá avaliar o programa fonte, para a retirada tais
    erros.

4°- Linking:
    Consiste na ligação do código objeto, gerado pelo compilador, 
    com o código das funções que estão disponíveis nas bibliotecas 
    que incluímos no nosso programa.
    

## DECLARAÇÃO DE VARIAVEIS
    
Para declarar uma variavel em C, precisamos informar ao processador duas informações iniciais;
qual o tipo de dado essa variavel vai utilizar e o identificador ao longo do código, ou seja o nome da variavel.

a declaração de variaveis deve obedecer as seguinte sintaxe:

    ```
    tipo variavel_1;
    ```
    ou 
    ```
    int numero_1;
    ```

Onde no exemplo acima o "int" significa que essa variavel vai receber um valor de tipo inteiro, e o "numero_1" é o identificador dessa variavel, o nome que vai ser mencionado ao longo do código para utilização da variavel.
