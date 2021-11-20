
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
                case 1:     // .Função
                    cmdPause();
                    cmdLimpar();
                    funcaoFx1(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:     // .Derivada
                    cmdPause();
                    cmdLimpar();
                    derivadaFx1(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:     // .Integral
                    cmdPause();
                    cmdLimpar();
                    integralFx1(k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:     // .Sair
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
                case 1:     // .Função
                    cmdPause();
                    cmdLimpar();
                    funcaoFx2(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:     // .Derivada
                    cmdPause();
                    cmdLimpar();
                    derivadaFx2(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:     // .Integral
                    cmdPause();
                    cmdLimpar();
                    integralFx2(k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:     // .Sair
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
                case 1:     // .Função
                    cmdPause();
                    cmdLimpar();
                    funcaoFx3(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 2:     // .Derivada
                    cmdPause();
                    cmdLimpar();
                    derivadaFx3(x,k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 3:     // .Integral
                    cmdPause();
                    cmdLimpar();
                    integralFx3(k);
                    cmdPause();
                    cmdLimpar();
                    break;
                case 4:     // .Sair
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
                case 1: // função
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                case 3: // integral
                    /* code */
                    break;
                case 4: // derivada
                    cmdLimpar();
                    printf("\nSaindo da opção 0, onde f(x) = 0");
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
                case 1: // função
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                case 3: // integral
                    /* code */
                    break;
                case 4: // derivada
                    cmdLimpar();
                    printf("\nSaindo da opção 0, onde f(x) = 0");
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
                case 1: // função
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                case 3: // integral
                    /* code */
                    break;
                case 4: // derivada
                    cmdLimpar();
                    printf("\nSaindo da opção 0, onde f(x) = 0");
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
                case 1: // função
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                case 3: // integral
                    /* code */
                    break;
                case 4: // derivada
                    cmdLimpar();
                    printf("\nSaindo da opção 0, onde f(x) = 0");
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
                case 1: // função
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                case 3: // integral
                    /* code */
                    break;
                case 4: // derivada
                    cmdLimpar();
                    printf("\nSaindo da opção 0, onde f(x) = 0");
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

int FIM(){
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