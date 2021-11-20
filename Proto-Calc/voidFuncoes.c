
// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <math.h>   // Biblioteca usada para realizar operações matemáticas avançadas
#include <time.h>

#include "ProtoCalc.c"
#include "voidDerivadas.c"
#include "voidFuncoes.c"
#include "voidIntegrais.c"


// 1. f(x) = k
void funcaoFx1(int x, int k){
    int x, k;
    printf("\nDigite o valor de x desejado.\t");
    buffer();
    scanf("\n%d",&x);
    printf("\nf(%d) = %d",x,k);
};

// 2. f(x) = x^k
void funcaoFx2(int x, int k){
    int x, k;
    printf("\nDigite o valor de x desejado.\t");
    buffer();
    scanf("%d",&x);
    int resultado = pow(x,k);    // potencia (variavel, expoente)
    printf("\nf(%d) = %d",x,resultado);
};

// 3. f(x) = k^x
void funcaoFx3(int x, int k){
    int x, k;
    printf("\nDigite o valor de x desejado.\t");
    buffer();
    scanf("%d",&x);
    int resultado = pow(k,x);
    printf("\nf(%d) = %d",x,resultado);
};


// 4. f(x) = ln(x)
void funcaoFx4(int x){
    int x;
    printf("\nDigite o valor de x desejado.\t");
    buffer();
    scanf("%d",&x);
    int resultado = log(x);
    printf("");
};

// 5. f(x) = 1/x
void funcaoFx5(int x){
    int x;
    printf("\nDigite o valor de x desejado.\t");
    do{
        //validador
        buffer();
        scanf("%d",&x);
        x == 0 ? exibirErro() printf("escolha outro valor diferete de 0.\n") : printf("OK");
    }while(x==0)
    printf("\nf(%d) = %d",x,1/x);
};

// 6.  f(x) = sen(x)
void funcaoFx5(int x){
    int x;
    printf("\nDigite o valor de 𝑥 desejado em graus.");
    buffer();
    scanf("%d",&x);
    int resultado = sin(x);
    printf("\nf(%d) = %d",x,resultado);
};

// 7. f(x) = cos(x)
void funcaoFx5(int x){
    int x;
    printf("\nDigite o valor de 𝑥 desejado em graus.");
    buffer();
    scanf("%d",&x);
    int resultado = cos(x);
    printf("\nf(%d) = %d",x,resultado);
};

// 8. f(x) = tg(x)
void funcaoFx5(int x){
    int x;
    printf("\nDigite o valor de 𝑥 desejado em graus.");
    buffer();
    scanf("%d",&x);
    int resultado = tan(x);
    printf("\nf(%d) = %d",x,resultado);
};