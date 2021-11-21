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

#include "ProtoCalc.c"
#include "voidDerivadas.c"
#include "voidFuncoes.c"
#include "voidIntegrais.c"


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
int cmdLimpar(void);    // Atalho para limpar o terminal Windows.  
int cmdPause(void);     // Atalho para congelar o terminal Windows.
int exibirERRO(void);   // EXIBE o inicio de frase "ERRO" com um *beap*
void buffer(void);      // Apaga o buffer de entrada. 


void exibirMenuPrincipal(void);             // EXIBE o menu pincipal na tela.
void validadorMenu1(int validarEntrada);    // VALIDA a opção do menu principal.
void mensagemK(int k);      // EXIBE a mensagem K após selecionar as opções 1, 2 ou 3 do menu principal e recolhe o valor K.
void exibirSubMenu(void);   // EXIBE o menu secundario na tela.
void validadorSubMenu(int validarEntrada);  // VALIDA a opção selecionada no menu secundario.


// (ABAIXO) todas as funções disponíveis no projeto:
void funcaoFx1(int x, int k);   // f(x) = k
void funcaoFx2(int x, int k);   // f(x) = x^k
void funcaoFx3(int x, int k);   // f(x) = k^x
void funcaoFx4(int x);          // f(x) = ln(x)
void funcaoFx5(int x);          // f(x) = 1/x
void funcaoFx6(int x);          // f(x) = sen(x)
void funcaoFx7(int x);          // f(x) = cos(x)
void funcaoFx8(int x);          // f(x) = tg(x)


// (ABAIXO) todas as derivadas das funções acima:
void derivadaFx1(int x, int k);     // [k]' = 0
void derivadaFx2(int x, int k);     // [x^k]' = k * x^(k-1) 
void derivadaFx3(int x, int k);     // [k^x]’ = k^x * ln(|x|)
void derivadaFx4(int x);            // [ln(x)]' = 1/x
void derivadaFx5(int x);            // [1/x]' = ln(x)
void derivadaFx6(int x);            // [sen(x)]' = cos(x)
void derivadaFx7(int x);            // [cos(x)]' = sen(x)
void derivadaFx8(int x);            // [tg(x)]' = sec²(x)


// (ABAIXO) todas as integrais definidas das funções acima, onde I(a,b) = f(a) - f(b):
void integralFx1(int k);    // k dx = k * x + C
void integralFx2(int k);    // x^k dx = [x^(k+1)]/(k+1) + C
void integralFx3(int k);    // k^x dx = k^x/ln(k) + C
void integralFx4(void);     // ln(x) dx = x*[ln(x)-1] + C
void integralFx5(void);     // 1/x dx = ln(|x|) + C
void integralFx6(void);     // sen(x) dx = -cos(x) + C
void integralFx7(void);     // cos(x) dx = sen(x) + C
void integralFx8(void);     // tg(x) dx = -ln(|cos(x)|) + C