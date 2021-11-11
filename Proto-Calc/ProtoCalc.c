
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



//(ABAIXO) Atalhos de comando para  o terminal.
void cmdLimpar(void){
    system("cls");
};

void cmdPause(void){
    getchar();
};

void exibirERRO(void){
    printf("\n\7\/!\\ ERRO: ");
};

void buffer(void){
    fflush(stdin);
};




//  MENU PRINCIPAL:
void exibirMenuPrincipal(void){
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

void validadorMenu1(int validarEntrada){
    int validarEntrada;
    do{
        printf("\n\n|==> ");
        buffer();
        scanf("%d",&validarEntrada);
        if(validarEntrada <= 1 && validarEntrada >= 9){
            exibirERRO();
            printf("Opção inválida, por favor tente novamente.");
            cmdPause();
            cmdLimpar()
        }
    } while (validarEntrada >=1 && validarEntrada <=9);
    return validarEntrada;
};




//  MENSAGEM K:
void mensagemK(int k){
    int k; char validador = 'X';
    do{
        printf("\nMENSAGEM: Você escolheu uma função que necessita de elementos para a sua construção.");
        printf("\nINSIRA O VALOR DE K DESEJADO:");
        printf("\n\n|==> ");
        buffer();
        scanf("%d",&k);
        if (k<=0){
            validador = 'X';
            exibirERRO();
            printf("Insira outro valor onde K > 0."); 
        } else{
            validador = 'O';
            printf("\nValor inserido [%d]!",k);
        } 
    }while(validador =! 'O')
    //return k;
};




//  MENU SECUNDARIO:
void exibirSubMenu(void){
    printf("\n================================================");
    printf("\nSUBMENU 1 - Para a função escolhida, você pode:");
    printf("\n1. Calcular a aplicação de um valor na função f(x).");
    printf("\n2. Calcular a aplicação de um valor na derivada f'(x).");
    printf("\n3. Calcular a integral definida I(a,b).");
    printf("\n4. Voltar ao Menu anterior");
    printf("\n================================================");
};
void validadorSubMenu(int validarEntrada){
    int validarEntrada;
    do{
        printf("\n\n|==> ");
        buffer();
        scanf("%d",&validarEntrada);
        if(validarEntrada <= 1 && validarEntrada >= 4){
            exibirERRO();
            printf("Opção inválida, por favor tente novamente.");
            cmdPause();
            cmdLimpar()
        }
    } while (validarEntrada >=1 && validarEntrada <=9);
    return validarEntrada;
};