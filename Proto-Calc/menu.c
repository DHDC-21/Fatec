    
// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <time.h>

void exibirMenuPrincipal(){
    printf("================================================ \n");
    printf("\t MENU PRINCIPAL:  \n");
    printf("1. f(x) = k \n");
    printf("2. f(x) = x^k \n");
    printf("3. f(x) = k^x \n");
    printf("4. f(x) = ln(x) \n");
    printf("5. f(x) = 1/x \n");
    printf("6. f(x) = sen(x) \n");
    printf("7. f(x) = cos(x) \n");
    printf("8. f(x) = tg(x) \n");
    printf("9. Sair \n");
    printf("================================================ \n");
};
