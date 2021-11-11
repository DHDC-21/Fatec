
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
                    funcaoFx1(x,k);
                    break;
                case 2:     // .Derivada
                    derivadaFx1(x,k);
                    break;
                case 3:     // .Integral
                    integralFx1(k);
                    break;
                case 4:     // .Sair
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
                    funcaoFx2(x,k);
                    break;
                case 2:     // .Derivada
                    derivadaFx2(x,k);
                    break;
                case 3:     // .Integral
                    integralFx2(k);
                    break;
                case 4:     // .Sair
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
                    funcaoFx3(x,k);
                    break;
                case 2:     // .Derivada
                    derivadaFx3(x,k);
                    break;
                case 3:     // .Integral
                    integralFx3(k);
                    break;
                case 4:     // .Sair
                    break;
                }
                
            } while (caseeMenu2 =! 4);
            break;
        case 4:
            /* 4. f(x) = ln(x) */
            break;
        case 5:
            /* 5. f(x) = 1/x */
            break;
        case 6:
            /* 6. f(x) = sen(x) */
            break;
        case 7:
            /* 7. f(x) = cos(x) */
            break;
        case 8:
            /* 8. f(x) = tg(x) */
            break;
        case 9:
            /* 9. Sair */
            break;
        }
    }while(caseeMenu1=!9);
    
    FIM();

};

int FIM(){
    cmdPause();
    cmdLimpar();
};