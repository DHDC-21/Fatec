
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




/* 
 *  1.  f(x) = k
 *            [k]' = 0
 */
void derivadaFx1(int x, int k){
    int x, k;
    printf("\nDigite o valor de x desejado.\t");
    buffer();
    scanf("\n%d",x);
    printf("\nf'(%d) = %d",x,k=0);
};

/*
 *  2.  f(x) = x^k
 *            [x^k]' = k * x^(k-1) 
 */
void derivadaFx2(int x, int k){
    
    int x, k;
    printf("\nDigite o valor de x desejado.\t");
    buffer();
    scanf("%d",x);
    int resultado = k * pow(x,(k-1));
};

/*
 *  3.  f(x) = k^x
 *            [k^x]’ = k^x * ln(|x|)
 */
void derivadaFx3(int x, int k){
    int x, k;
    printf("\nDigite o valor de x desejado.\t");
    buffer();
    scanf("%d",x);
    int resultado = pow(k,x) * log(x); 
    printf("\nf'(%d) = %d",x,resultado);                                                                                                                 
};

/*
 *  4.  f(x) = ln(x)
 *            [ln(x)]' = 1/x
 */
void derivadaFx4(int x){
    int x;
    printf("\nDigite o valor de x desejado.\t");
    buffer();
    scanf("%d",x);
    printf("\nf'(%d) = %d",x,1/x);
};

/*
 *  5.  f(x) = 1/x
 *            [1/x]' = ln(x)
 */
void derivadaFx4(int x){
    int x;
    printf("\nDigite o valor de x desejado.\t");
    buffer();
    scanf("%d",x);
    int resultado = ln(x);
    printf("\nf'(%d) = %d",x,resultado);
};

/*
 *  6.  f(x) = sen(x)
 *            [sen(x)]' = cos(x)
 */
void derivadaFx4(int x){
    int x;
    printf("\nDigite o valor de x desejado em radianos:\tr");
    buffer();
    scanf("%d",x);
    int resultado = cos(x);
    printf("\nf'(%d) = %d",x,resultado);
};

/*
 *  7.  f(x) = cos(x)
 *            [cos(x)]' = sen(x)
 */
void derivadaFx4(int x){
    int x;
    printf("\nDigite o valor de x desejado em radianos:\tr");
    buffer();
    scanf("%d",x);
    int resultado = sen(x);
    printf("\nf'(%d) = %d",x,resultado);
};

/*
 *  8.  f(x) = tg(x)
 *            [tg(x)]' = sec²(x)
 */
void derivadaFx4(int x){
    int x;
    printf("\nDigite o valor de x desejado em radianos:\tr");
    buffer();
    scanf("%d",x);
    int resultado = pow(sec(x),2);
    printf("\nf'(%d) = %d",x,resultado);
};