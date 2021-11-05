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

#include "funcProtoCalc.c"


/*  INICIAR pseudo-código(alpha){
 * 
 *      EXIBIR logo do projeto.
 *      APERTE qualquer tecla para proseguir.
 *      LIMPAR tela.
 *      INICIAR laço de repetição (01)
 *      {
 *          EXIBIR menu(01).
 *          VALIDAR opções para o menu(01)
 *          SELECIONAR opção(x) do menu(01)
 *          {
 *          LIMPAR tela.
 *              EXIBIR menu(02).
 *              SELECIONAR opção(x) do menu(02)
 *              {
 *              LIMPAR tela.
 *                  EXECUTAR função.
 *              }
 *          }
 *      } ENCERRAR laço de repetição (01) ao selecionar a opção(09) do menu(01) "Sair".
 *      Exibir creditos ao sair.
 * 
 *  } FIM do pseudo-código(alpha).
 * */
int cmdLimpar();    // Atalho para limpar o terminal Windows.  
int cmdPause();     // Atalho para congelar o terminal Windows.
int exibirERRO();   // EXIBE o inicio de frase "ERRO" com um *beap*

void mensagemK(int k);   // EXIBE a mensagem K após selecionar as opções 1,2 ou 3 do menu principal e recolhe o valor K.g