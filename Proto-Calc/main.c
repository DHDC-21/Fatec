
// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <time.h>

#include "documentation.h"




int main(){
    setlocale(LC_ALL,"NULL");
    printf("Olá Mundo!");
    
    FIM();
};

int FIM(){
    cmdPause();
    cmdLimpar();
};