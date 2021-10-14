/*
 * NOME DO PROJETO: "Projeto Proto_Calculadora"
 * IDIOMA: "Português do Brasil" 
 * VERSÃO: "Alpha"
 * 
 * DEVS: "Douglas Henrique Dionysio Costa - Mogi Mirim /SP"
 * 
 * 
 * DESCRIÇÃO:
 * " - Projeto acadêmico para a disciplina de Calculo da Faculdade Tecnologica Arthur de Azevedo, Mogi Mirim /SP
 *   - O projeto consiste em uma calculadora de terminal utilizando dos conhecimentos adiquiridos em Calculo e Logica de Programação"
 */





// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <math.h>   // Biblioteca usada para realizar operações matemáticas avançadas
#include <time.h>

// (ABAIXO) Prototipação de funções em C.
#include "function.c"   // resoluções de calculo
#include "menu.c"       // menus para exibir no código principal
#include "path.c"       // atalhos para resolução de problemas simples de terminal no código 




int cmdLimpar();  // Atalho para limpar o terminal Windows.  
int cmdPause();   // Atalho para congelar o terminal Windows.
