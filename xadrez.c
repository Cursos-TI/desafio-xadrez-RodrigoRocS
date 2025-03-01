#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// movimento da torre com função recursiva.
void torreMov(int n) {
    if(n > 0) {
        printf("Direita\n");
        torreMov(n - 1);
    }
}
// movimento da rainha com função recursiva.
void rainhaMov(int n) {
    if(n > 0) {
        printf("Esquerda\n");
        rainhaMov(n - 1);
    }
}

// movimento do bispo com função recursiva e loop aninhado.
void bispoMov(int n) {
    if(n > 0) {
        printf("Cima\n");
        for (int i = n; i > 0; i--) // loop interno imprime o movimento horizontal.
        {
            printf("Direita\n");
            break;
        }
        bispoMov(n - 1);
    }
}
// movimento do cavalo em "L" com loop aninhado e multiplas variaveis/atualização.
void cavaloMov(int n) {
    int i, j;
    
    for (i = n, j = 1; i > 1; i--, j++) {
        printf("Cima\n");
        while (j == 2)
        {
            printf("Direita\n");
            j = 0; //reseta o movimento para a direita.
        }
        
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda
    //Chama as funções para executar os movimentos das peças.
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    torreMov(5);
    printf("\n");
    rainhaMov(8);
    printf("\n");
    bispoMov(5);
    printf("\n");
    cavaloMov(3);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
