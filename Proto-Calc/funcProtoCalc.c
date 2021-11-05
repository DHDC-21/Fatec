
// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <math.h>   // Biblioteca usada para realizar operações matemáticas avançadas
#include <time.h>



/*
 *  (ABAIXO) Atalhos de comando para  o terminal.
 */
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

void validadorMenu1(int validarEntrada){
    int validarEntrada;
    do{
        printf("\n\n|==> ");
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

void validadorSubMenu(int validarEntrada){
    int validarEntrada;
    do{
        printf("\n\n|==> ");
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




/*
 *  (ABAIXO) Menus para a calculadora.
 */
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

void exibirSubMenu(void){
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
        k <= 0 ? validador = 'X' : validador = 'O'
        validador == 'X' ? 
    }while(validador =! 'O')
    scanf("%d",&k);
    return k;
};




/*
 *  (ABAIXO) As principais operações do menu principal:
 */
// 1. f(x) = k
void funcaoFx1(int x, int x){
    int x, k;
    printf("\nf(%d) = %d",x,k);
};
void derivadaFx1(int x, int k){
    int x, k;
    printf("\nf'(%d) = %d",x,k=0);
};
void integralFx1(int x, int k){
    int x, k;
    printf();
};



// 2. f(x) = x^k
void funcaoFx2(int x, int k){
    int x, k;
};

// 3. f(x) = k^x
void funcaoFx3(int x, int k){};

// 4. f(x) = ln(x)
void funcaoFx4(int x, int k){};

// 5. f(x) = 1/x
void funcaoFx5(int x, int k){};

// 6. f(x) = sen(x)
void funcaoFx6(int x, int k){};

// 7. f(x) = cos(x)
void funcaoFx7(int x, int k){};

// 8. f(x) = tg(x)
void funcaoFx8(int x, int k){};