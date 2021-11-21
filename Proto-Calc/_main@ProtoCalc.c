
// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <math.h>   // Biblioteca usada para realizar operações matemáticas avançadas
#include <time.h>

#include "ProtoCalc.h"

 


int main(){
    setlocale(LC_ALL,"NULL");
    printf("Olá Mundo!");
    
    int caseeMenu1, caseeMenu2, k, x;
    do{
        exibirMenuPrincipal();
        validadorMenu1(caseeMenu1);
        switch (caseeMenu1)
        {
        case 1: /* 1. f(x) = k */
            do
            {
                mensagemK(k);
                cmdPause();
                cmdLimpar();
                exibirSubMenu();
                validadorSubMenu(caseeMenu2);
                switch (caseeMenu2)
                {
                case 1:
                    cmdPause();
                    cmdLimpar();
                    funcaoFx1(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:
                    cmdPause();
                    cmdLimpar();
                    derivadaFx1(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:
                    cmdPause();
                    cmdLimpar();
                    integralFx1(k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:
                    cmdLimpar();
                    printf("\nSaindo da opção 1, onde f(x) = k");
                    cmdPause();
                    cmdLimpar();
                    break;
                }
                
            } while (caseeMenu2 =! 4);
            break;
        case 2:
            /* 2. f(x) = x^k */
            do
            {
                mensagemK(k);
                cmdPause();
                cmdLimpar();
                exibirSubMenu();
                validadorSubMenu(caseeMenu2);
                switch (caseeMenu2)
                {
                case 1:
                    cmdPause();
                    cmdLimpar();
                    funcaoFx2(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:
                    cmdPause();
                    cmdLimpar();
                    derivadaFx2(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:
                    cmdPause();
                    cmdLimpar();
                    integralFx2(k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:
                    cmdLimpar();
                    printf("\nSaindo da opção 1, onde f(x) = x^k");
                    cmdPause();
                    cmdLimpar();
                    break;
                }
                
            } while (caseeMenu2 =! 4);
            break;
        case 3:
            /* 3. f(x) = k^x */
            do
            {
                mensagemK(k);
                cmdPause();
                cmdLimpar();
                exibirSubMenu();
                validadorSubMenu(caseeMenu2);
                switch (caseeMenu2)
                {
                case 1:
                    cmdPause();
                    cmdLimpar();
                    funcaoFx3(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:
                    cmdPause();
                    cmdLimpar();
                    derivadaFx3(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:
                    cmdPause();
                    cmdLimpar();
                    integralFx3(k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:
                    cmdLimpar();
                    printf("\nSaindo da opção 3, onde f(x) = k^x");
                    cmdPause();
                    cmdLimpar();
                    break;
                }
                
            } while (caseeMenu2 =! 4);
            break;
        case 4:
            /* 4. f(x) = ln(x) */
            do{
                cmdPause();
                cmdLimpar();
                exibirSubMenu();
                validadorSubMenu();
                switch (caseeMenu2)
                {
                case 1:
                    cmdPause();
                    cmdLimpar();
                    funcaoFx4(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:
                    cmdPause();
                    cmdLimpar();
                    derivaraFx4(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:
                    cmdPause();
                    cmdLimpar();
                    integralFx4();
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:
                    cmdLimpar();
                    printf("\nSaindo da opção 4, onde f(x) = ln(x)");
                    cmdPause();
                    cmdLimpar();
                    break;
            }while(caseeMenu2 =! 4);
            break;
        case 5:
            /* 5. f(x) = 1/x */
            do{
                cmdPause();
                cmdLimpar();
                exibirSubMenu();
                validadorSubMenu();
                switch (caseeMenu2)
                {
                case 1:
                    cmdPause();
                    cmdLimpar();
                    funcaoFx5(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:
                    cmdPause();
                    cmdLimpar();
                    derivadaFx5(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:
                    cmdPause();
                    cmdLimpar();
                    integralFx5();
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:
                    cmdLimpar();
                    printf("\nSaindo da opção 5, onde f(x) = 1/x");
                    cmdPause();
                    cmdLimpar();
                    break;
            }while(caseeMenu2 =! 4);
            break;
        case 6:
            /* 6. f(x) = sen(x) */
            do{
                cmdPause();
                cmdLimpar();
                exibirSubMenu();
                validadorSubMenu();
                switch (caseeMenu2)
                {
                case 1:
                    cmdPause();
                    cmdLimpar();
                    funcaoFx6(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:
                    cmdPause();
                    cmdLimpar();
                    derivadaFx6(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:
                    cmdPause();
                    cmdLimpar();
                    integralFx6();
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:
                    cmdLimpar();
                    printf("\nSaindo da opção 6, onde f(x) = sen(x)");
                    cmdPause();
                    cmdLimpar();
                    break;
            }while(caseeMenu2 =! 4);
            break;
        case 7:
            /* 7. f(x) = cos(x) */
            do{
                cmdPause();
                cmdLimpar();
                exibirSubMenu();
                validadorSubMenu();
                switch (caseeMenu2)
                {
                case 1:
                    cmdPause();
                    cmdLimpar();
                    funcaoFx7(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:
                    cmdPause();
                    cmdLimpar();
                    derivadaFx7(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:
                    cmdPause();
                    cmdLimpar();
                    integralFx7();
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:
                    cmdLimpar();
                    printf("\nSaindo da opção 7, onde f(x) = cos(x)");
                    cmdPause();
                    cmdLimpar();
                    break;
            }while(caseeMenu2 =! 4);
            break;
        case 8:
            /* 8. f(x) = tg(x) */
            do{
                cmdPause();
                cmdLimpar();
                exibirSubMenu();
                validadorSubMenu();
                switch (caseeMenu2)
                {
                case 1:
                    cmdPause();
                    cmdLimpar();
                    funcaoFx8(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:
                    cmdPause();
                    cmdLimpar();
                    derivadaFx8(x);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:
                    cmdPause();
                    cmdLimpar();
                    integralFx8();
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:
                    cmdLimpar();
                    printf("\nSaindo da opção 8, onde f(x) = tg(x)");
                    cmdPause();
                    cmdLimpar();
                    break;
            }while(caseeMenu2 =! 4);
            break;
        case 9:
            /* 9. Sair */
            printf("\n\nEncerrando o programa...")
            cmdPause();
            cmdLimpar();
            break;
        }
    }while(caseeMenu1=!9);
    
    FIM();

};

int FIM(void){
    printf("
        \nPROJETO: \tProtoCalc
        \nVERSÃO: \tAlpha
        \nIDIOMA: \tPortuguês Brasil
        \nCRÉDITOS:
        \n\t* Douglas Henrique Dionysio Costa - Mogi Mirim /SP
    ");
    cmdPause();
    cmdLimpar();
};