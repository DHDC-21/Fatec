
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
 * 1.   f(x) = k
 *
 * I(a,b) = f(a) - f(b)
 * I = k dx = k * x + C 
 */
void integralFx1(int k){
    int a, b, I, k;
    printf("\nDigite o valor de a e b desejado.");
    printf("\n[a]==>\t");
    buffer();
    scanf("%d",a);
    printf("\n[b]==>\t");
    buffer();
    scanf("%d",b);
    
    I = (k*a) - (k*b);

    printf("I(%d,%d) = %d",a,b,I);
};


/*
 * 2.   f(x) = x^k
 *
 * I(a,b) = f(a) - f(b)
 * I = x^k dx = [x^(k+1)]/(k+1) + C
 */
void integralFx2(int k){
    int a, b, I, k;
    
    printf("\nDigite o valor de a e b desejado.");
    printf("\n[a]==>\t");
    buffer();
    scanf("%d",a);
    printf("\n[b]==>\t");
    buffer();
    scanf("%d",b);

    I = (pow(a,(k+1))/(k+1)) - (pow(b,(k+1))/(k+1));

    printf("I(%d,%d) = %d",a,b,I);
};


/*
 * 3.   f(x) = k^x
 *
 * I(a,b) = f(a) - f(b)
 * I = k^x dx = k^x/ln(k) + C
 */
void integralFx3(int k){
    int a, b, I, k;
    
    printf("\nDigite o valor de a e b desejado.");
    printf("\n[a]==>\t");
    buffer();
    scanf("%d",a);
    printf("\n[b]==>\t");
    buffer();
    scanf("%d",b);

    I = (pow(k,a) / ln(a)) - (pow(k,b) / ln(b));

    printf("I(%d,%d) = %d",a,b,I);
};


/*
 * 4.   f(x) = ln(x)
 *
 * I(a,b) = f(a) - f(b)
 * I = ln(x) dx = x*[ln(x)-1] + C
 */]
void integralFx4(int k){
    int a, b, I, k;
    
    printf("\nDigite o valor de a e b desejado.");
    printf("\n[a]==>\t");
    buffer();
    scanf("%d",a);
    printf("\n[b]==>\t");
    buffer();
    scanf("%d",b);

    I = (a * (ln(a)-1)) - (b * (ln(b)-1));

    printf("I(%d,%d) = %d",a,b,I);
};


/*
 * 5.   f(x) = 1/x
 *
 * I(a,b) = f(a) - f(b)
 * I = 1/x dx = ln(|x|) + C
 */
void integralFx5(int k){
    int a, b, I, k;
    
    printf("\nDigite o valor de a e b desejado.");
    printf("\n[a]==>\t");
    buffer();
    scanf("%d",a);
    printf("\n[b]==>\t");
    buffer();
    scanf("%d",b);

    I = ln(|a|) - ln(|b|);

    printf("I(%d,%d) = %d",a,b,I);
};


/*
 * 6.   f(x) = sen(x)
 *
 * I(a,b) = f(a) - f(b)
 * I = sen(x) dx = -cos(x) + C
 */
void integralFx6(int k){
    int a, b, I, k;
    
    printf("\nDigite o valor de a e b desejado.");
    printf("\n[a]==>\t");
    buffer();
    scanf("%d",a);
    printf("\n[b]==>\t");
    buffer();
    scanf("%d",b);

    I = (-cos(a)) - (-cos(b));

    printf("I(%d,%d) = %d",a,b,I);
};


/*
 * 7.   f(x) = cos(x)
 *
 * I(a,b) = f(a) - f(b)
 * I = cos(x) dx = sen(x) + C
 */
void integralFx7(int k){
    int a, b, I, k;
    
    printf("\nDigite o valor de a e b desejado.");
    printf("\n[a]==>\t");
    buffer();
    scanf("%d",a);
    printf("\n[b]==>\t");
    buffer();
    scanf("%d",b);

    I = sen(a) - sen(b);

    printf("I(%d,%d) = %d",a,b,I);
};


/*
 * 8.   f(x) = tg(x)
 *
 * I(a,b) = f(a) - f(b)
 * I = tg(x) dx = -ln(|cos(x)|) + C
 */
void integralFx8(int k){
    int a, b, I, k;
    
    printf("\nDigite o valor de a e b desejado.");
    printf("\n[a]==>\t");
    buffer();
    scanf("%d",a);
    printf("\n[b]==>\t");
    buffer();
    scanf("%d",b);

    I = (-ln(|cos(a)|)) -(-ln(|cos(b)|));

    printf("I(%d,%d) = %d",a,b,I);
};