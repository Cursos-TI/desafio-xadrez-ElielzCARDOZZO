#include <stdio.h>

// USO DAS FUNÇÕES RECURSIVAS PARA A TORRE, BISCO, CAVALO E RAINHA
void moverTorre(int casas) {
    if (casas > 0) {
        printf("\nMoveu-se para a DIREITA!\n"); //MENSAGEM DE EXIBIÇÃO DO MOVIMENTO DA PEÇA 
        moverTorre(casas - 1);
    }
}

// FUNÇÃO RECURSIVA COM LOOPS ANINHADO
void moverBispo(int casas) {
    if (casas > 0) {
        for (int i = 1; i < casas; i++) {
            printf("\nMoveu-se para CIMA!\n"); //MENSAGEM DE EXIBIÇÃO DO MOVIMENTO DA PEÇA 
            for (int j = 1; j < casas; j++) {
                printf("\nMoveu-se para DIREITA!\n"); //MENSAGEM DE EXIBIÇÃO DO MOVIMENTO DA PEÇA 
            }
        }
        moverBispo(casas - 2); 
    }
}

// FUNÇÃO RECURSIVA 
void moverRainha(int casas) {
    if (casas > 0) {
        printf("\nMoveu-se para a ESQUERDA!\n"); //MENSAGEM DE EXIBIÇÃO DO MOVIMENTO DA PEÇA 
        moverRainha(casas - 1);
    }
}

// FUNÇÃO RECURSIVA COM LOOPS COMPLEXOS 
void moverCavalo(int casas) {
    int movimento1 = 2;
    int movimento2 = 1;
    int i,j;

    for (i = 0, j = 0; i <= movimento1 || j <= movimento2; i++, j++)
        if (i < movimento1){
            printf("\nMoveu-se para CIMA!\n"); //MENSAGEM DE EXIBIÇÃO DO MOVIMENTO DA PEÇA 
        }

        if (movimento2 < j){
            printf("\nMoveu-se para DIREITA!\n"); //MENSAGEM DE EXIBIÇÃO DO MOVIMENTO DA PEÇA 
        }
    }
   

int main() {
    printf("*** DESAFIO DAS PEÇAS DE XADREZ EM C *** \n"); //PRINTAGEM DO TÍTULO 

    printf("\nA TORRE:\n"); //NOMENCLATURA DE CADA PEÇA
    moverTorre(5);

    printf("\nO BISPO:\n"); //NOMENCLATURA DE CADA PEÇA
    moverBispo(3); 

    printf("\nA RAINHA:\n"); //NOMENCLATURA DE CADA PEÇA
    moverRainha(8);

    printf("\nO CAVALO:\n"); //NOMENCLATURA DE CADA PEÇA
    moverCavalo(1);

    return 0;
}
