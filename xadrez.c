#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void ctorre (int x){
        if(x <= 5){
        printf("Torre direita %d\n", x);
        ctorre (x + 1);
        
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    char torre, bispo, rainha;
    int bx =0;
    int by =0;
    int tx =0;
    int rx =0;
    int cx =0;
    int cy =0;
    int moverb = 5;
    int movert = 1;
    int moverr = 8;

    //printf("Quantas casas o bispo deve se mover?\n");
    //scanf("%d\n", &moverb);

    //while(bx < moverb){
            // Implementação de Movimentação do Bispo
     //   bx++;
    //    printf("Bispo direita %d\n", bx);
    //    by++;
    //    printf("Bispo cima %d\n", by);
        
    //}
    for(int x = 1, y = 1; x <= 5; x++, y++){
        printf("Bispo direita %d, cima %d\n", x, y);
    }
    //printf("O bispo se moveu %d casas na diagonal direita para cima\n", by);
    //printf("Quantas casas a Torre deve se mover?\n");
    //scanf("%d\n", &movert);

    while(tx < movert){
            // Implementação de Movimentação da Torre
        tx++;
        printf("Torre direita %d\n", tx);

    }
    printf("A torre se moveu %d casas para a direita\n", tx);
    //printf("Quantas casas a rainha deve se mover?\n");
    //scanf("%d\n", &moverr);

    while (rx < moverr){
            // Implementação de Movimentação da Rainha
        rx++;
        printf("Rainha direita %d\n", rx);
    }
    printf("A rainha se moveu %d casas para a direita\n", rx);


    //while(cy < 2){
    //        while(cx < 1){
            // Nível Aventureiro - Movimentação do Cavalo
    //    cx++;
    //    printf("Cavalo direita %d\n", cx);

    //}
    //    cy++;
    //    printf("Cavalo cima %d\n", cy);

    //}
    //printf("O cavalo se moveu em L %d vez direita e %d vezes cima\n", cx, cy);

    for(int x = 1; x <=1; x++){
            for(int y = 1; y <=2; y++){
            // Nível Aventureiro - Movimentação do Cavalo
                printf("Cavalo cima %d\n", y);

        }
        
        printf("Cavalo direita %d\n", x);
    }   
    ctorre(movert);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
