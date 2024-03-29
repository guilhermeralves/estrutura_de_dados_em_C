# Conceitos básicos da linguagem C
## CABEÇALHO DO PROGRAMA:

No cabeçalho de um programa em C, você geralmente inclui diversas declarações para informar o compilador sobre as bibliotecas que serão utilizadas, definir constantes, e declarar protótipos de funções. Algumas das declarações comuns no cabeçalho de um programa em C incluem:

###BIBLIOTECAS:

```
#include<stdio.h> 
#include<stdlib.h>
```

Essas bibliotecas servem para importar funções e variaveis nativas da linguagem C.

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
    



## DECLARAÇÃO DE VARIAVEIS:
    
Para declarar uma variavel em C, precisamos informar ao processador duas informações iniciais;
qual o tipo de dado essa variavel vai utilizar e o identificador ao longo do código, ou seja o nome da variavel.

a declaração de variaveis deve obedecer a seguinte sintaxe:

```
tipo variavel_1;
    
    ou 
    
int numero_1;
```

Onde no exemplo acima o "int" significa que essa variavel vai receber um valor de tipo inteiro, e o "numero_1" é o identificador dessa variavel, o nome que vai ser mencionado ao longo do código para utilização da variavel.



## DECLARAÇÃO DE CONSTANTES:

Diferente das variaveis, as constantes não mudam seu valor literal ao longo do programa, então para que o compilador em C entenda que se trata da declaração de uma constante, é colocado "#define" antes dos parametros de declaração, por exemplo:

```
#define <identificador> <Valor>

    ou

#define banana amarelo
```

Nesse caso já não é necessário colocar o ponto e virgula no final da linha, assim como não precisa informar o tipo de dado da constante pois o valor literal não pode ser mudado de forma alguma ao longo do programa.



## OPERADOR DE ATRIBUIÇÃO:

Esse operador é responsavel por armazenar um valor literal em alguma variavel( espaço de memória ) já declarada anteriormente no programa, uma informação importante é que o tipo do dado que vai ser guardado na variavel seja compativel com o tipo de dado que a variavel pode receber, por exemplo:

```
int numero_1;

numero_1 = 6;
```

Esse é um exemplo de utilização do operador de atribuição da forma correta, atribuindo valor a uma vaiavel do mesmo valor que ela pode receber, já o exemplo abaixo é uma tentativa de declarar um valor diferente ao que a variavel pode guardar:

```
int numero_1;

numero_1 = h;
```


## ENTRADA DE DADOS:

A entrada de dados serve para que o usuário possa oferecer informações ao programa, essas informações podem ser valores literais digitados a partir de um teclado, toques em telas touchScreen ou até mesmo clicks de confirmação de um mouse.

a forma mais comum e mais usada de entrada de dados em um programa, é através do teclado, para criar uma entrada de dados em C pelo teclado utilizaremos o comando "scanf", essa é a sintaxe utilizada para o scanf:

```
scanf("string de controle", &variavel);
```
Na primeira parte, temos a "string de controle" ela indicara que tipo de dado será lido, isso acontece por meio dos tipos de valor que existem:

```
%d = leitura de numeros inteiros.

%f = leitura de numeros reais.

%c = leitura de um caracter.

%s = leitura de um array de caracteres. ( string )
```

Ou seja, na string de controle é colocado o tipo de dado esperado pelo usuário, seja ele inteiro real ou caracter, através dos valores acima. Já na segunda parte do scanf, selecionamos qual variavel vai guardar o valor literal fornecido pelo usuário, mencionando a mesma pelo nome dela, exemplo:

```
scanf("Qual é o numero 1?: %d", &numero_1);
```

Uma Observação muito importante é que SEMPRE antes do nome da variavel, colocamos o simbolo da letra e comercial ( & ), pois ele serve para informar ao programa que queremos o endereço de memória daquela variavel e não o seu valor literal ele tambem é finalizado com ponto e virgula.

Exemplos:

```
int idade;

float salario;

char letra;

scanf("%d" &idade);

scanf("%f" &salario);

scanf("%c" &letra);
```
