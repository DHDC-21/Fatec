
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


void integralFx1(int k){
    int a, b, I, k;
    printf("\nDigite o valor de a e b desejado.");
    printf("\n[a]==>\t");
    buffer();
    scanf("%d",a);
    printf("\n[b]==>\t");
    buffer();
    scanf("%d",b);
    // I(a,b) = f(a) - f(b) onde f(x)=k
    printf("I(a,b) = %d",I=k-k);