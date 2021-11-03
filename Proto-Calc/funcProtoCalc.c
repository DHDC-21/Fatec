
// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <math.h>   // Biblioteca usada para realizar operações matemáticas avançadas
#include <time.h>

void exibirMenuPrincipal(){
    printf("\n================================================");
    printf("\n\t MENU PRINCIPAL:\n");
    printf("\n1. f(x) = k");
    printf("\n2. f(x) = x^k");
    printf("\n3. f(x) = k^x");
    printf("\n4. f(x) = ln(x)");
    printf("\n5. f(x) = 1/x");
    printf("\n6. f(x) = sen(x)");
    printf("\n7. f(x) = cos(x)");
    printf("\n8. f(x) = tg(x)");
    printf("\n9. Sair");
    printf("\n================================================");
};

void exibirSubMenu(){
    printf("\n================================================");
    printf("\nSUBMENU 1 - Para a função escolhida, você pode:");
    printf("\n1. Calcular a aplicação de um valor na função f(x).");
    printf("\n2. Calcular a aplicação de um valor na derivada f'(x).");
    printf("\n3. Calcular a integral definida I(a,b).");
    printf("\n4. Voltar ao Menu anterior");
    printf("\n================================================");
};

void mensagemK(int k){
    printf("\nMENSAGEM: Você escolheu uma função que necessita de elementos para a sua construção.");
    printf("\nINSIRA O VALOR DE K DESEJADO:");
    printf("\n\n|==> ");
    int k; char validador = 'X';
    do{
        scanf("&d",k);
        if(k <= 0){
            exibirERRO();
            printf("Valor invalido, digite um número > 0.");
        } else{
            validador = 'O';
        }
    }while(validador =! 'X')
};


// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <time.h>




int cmdLimpar(){
    system("cls");
};

int cmdPause(){
    getchar();
};

int exibirERRO(){
    printf("\n\7/!\\ ERRO: ");
};

// (ABAIXO) As principais operações do menu principal:
// 1. f(x) = k
void funcFX_k(int x){
    int x, k;
    printf("\nf(%d) = k",x,k);
};

// 2. f(x) = x^k
void funcFX_(int x, int k){
    int x, k;
};

// 3. f(x) = k^x
void funcFX_(int x, int k){};

// 4. f(x) = ln(x)
void funcFX_(int x, int k){};

// 5. f(x) = 1/x
void funcFX_(int x, int k){};

// 6. f(x) = sen(x)
void funcFX_(int x, int k){};

// 7. f(x) = cos(x)
void funcFX_(int x, int k){};

// 8. f(x) = tg(x)
void funcFX_(int x, int k){};