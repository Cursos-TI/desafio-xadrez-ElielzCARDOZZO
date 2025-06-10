#include <stdio.h>

int main() {

    // DECLARAÇÃO DA VARIÁVEL E SEU VALOR 
    int i = 0;

    // TÍTULO DO DESAFIO DAS PEÇAS DE XADREZ
    printf("*** DESAFIO DAS PEÇAS DE XADREZ EM C *** \n\n");

    
    // UTILIZAÇÃO DAS ESTRUTURA DE REPETIÇÃO FOR PARA A TORRE
    printf("A TORRE: \n");
    for (int j = 0; j < 5; j++) {
        printf("A TORRE moveu-se para a DIREITA!\n");
    }


    // UTILIZAÇÃO DAS ESTRUTURA DE REPETIÇÃO WHILE E SUA CONDICIONAL VERDADEIRA PARA A TORRE
    printf("\n O BISPO: \n");
    while (i < 5) {
        printf("O BISPO moveu-se para a CIMA, DIREITA (DIAGONAL)!\n");
        i++;
    }

    // DECLARANDO O INDÍCE NOVAMENTE POIS O SEU CONTADOR SERIA A PARTIR DO 5, NA ÚLTIMA LINHA DE COMANDO
    i = 0;

    // UTILIZAÇÃO DAS ESTRUTURA DE REPETIÇÃO DO-WHILE E SUA CONDICIONAL
    printf("\n A RAINHA: \n");
    do {
        printf("A RAINHA moveu-se para a ESQUERDA!\n\n");
        i++;
    } while (i < 8);


    // IMPLEMENTAÇÃO DA PEÇA CAVALO NO CÓDIGO EM C, ADICIONANDO DUAS CASAS A BAIXO E UMA A ESQUERDA ---
    // (DE ACORDO COM O DESAFIO DO NÍVEL AVENTUREIRO)
    printf("MOVIMENTAÇÃO DA PEÇA DE XADREZ: C A V A L O ! ! !\n");

        for (i = 0; i < 2; i++) //ESTRUTURA DE REPETIÇÃO FOR USADO PARA REPETIR DUAS CASAS ABAIXO
        {
            printf("BAIXO!\n"); //VISUALIZAÇÃO DA MENSAGEM DE LOMOCOMOÇÃO DA PEÇA CAVALO

            while (i == 1) //ESTRUTURA DE REPETIÇÃO WHILE USADO PARA REPETIR UMA CASA A ESQUERDA
            {
                printf("ESQUERDA!\n\n"); //VISUALIZAÇÃO DA MENSAGEM DE LOMOCOMOÇÃO DA PEÇA CAVALO
                i++; 
            }
            
        }

                printf("--------------------------------------------------------------------------------\n");

        for (i = 0; i < 2; i++) //ESTRUTURA DE REPETIÇÃO FOR USADO PARA REPETIR DUAS CASAS PARA CIMA
        {
            printf("CIMA!\n"); //VISUALIZAÇÃO DA MENSAGEM DE LOMOCOMOÇÃO DA PEÇA CAVALO

            while (i == 1) //ESTRUTURA DE REPETIÇÃO WHILE USADO PARA REPETIR UMA CASA A DIREITA
            {
                printf("DIREITA!\n"); //VISUALIZAÇÃO DA MENSAGEM DE LOMOCOMOÇÃO DA PEÇA CAVALO
                i++; 
            }
            
        }
    return 0;
}
