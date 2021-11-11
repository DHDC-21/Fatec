
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




void derivadaFx1(int x, int k){
    int x, k;
    printf("\nDigite o valor de x desejado.");
    buffer();
    scanf("\n%d",x);
    printf("\nf'(%d) = %d",x,k=0);
};


void derivadaFx2(int x, int k){
    // f'(x) = k * x^(k-1)
    int x, k;
    printf("\nDigite o valor de x desejado.");
    buffer();
    scanf("%d",x);
    int resultado = k * pow(x,(k-1));
};


void derivadaFx3(int x, int k){
    // [k^x]’ = k^x * ln(|x|)
    int x, k;
    printf("\nDigite o valor de x desejado.");
    buffer();
    scanf("%d",x);
    int resultado = pow(k,x) * log(x); 
    printf("\nf'(%d) = %d",x,resultado);                                                                                                                 
};