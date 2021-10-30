
// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <time.h>

#include "documentation.h"




int main(){
    setlocale(LC_ALL,"NULL");
    printf("Olá Mundo!");
    
    int menu01 = 0, menu02 = 0, k = 0;
    do{
        exibirMenuPrincipal();
        // %- Validador de entrada
        do
        {
            printf("\n\n|==> ");
            scanf("&d",menu01);
            if(menu01 <= 1 && menu01 >= 9){
                exibirERRO();
                printf("Opção inválida, por favor tente novamente.");
                cmdPause();
                cmdLimpar();
            }
        } while (menu01 >=1 && menu01 <=9);
        
        switch (menu01)
        {
        case 1: /* 1. f(x) = k */
            do
            {
                mensagemK(k);
                cmdPause();
                cmdLimpar();
                exibirSubMenu();
                
            } while (menu02 =! 4);
            break;
        case 2:
            /* 2. f(x) = x^k */
            break;
        case 3:
            /* 3. f(x) = k^x */
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
        
        default:
            exibirERRO();
            printf("Opção não encontrada, por favor tente novamente.");
            cmdPause();
            cmdLimpar();
            break;
        }
    }while(menu01=!9);
    
    FIM();

};

int FIM(){
    cmdPause();
    cmdLimpar();
};