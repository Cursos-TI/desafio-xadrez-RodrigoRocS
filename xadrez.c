#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    //movimento da torre, enquanto seu valor for maior que 0 se move para direita.
    while (torre > 0)
    {
        printf("Direita\n"); // imprime o movimento da peça
        torre--;
    }
    //movimento do bispo enquanto seu valor for maior que 0 se move para diagonal.
    do
    {
        printf("Cima Direita\n"); // imprime o movimento da peça
        bispo--;
    } while (bispo > 0);
    
    //movimento da rainha 8 casas para a esquerda.
    for (rainha; rainha > 0; rainha--) //inicia o laço com valor 8 e decrementa 1 até chegar a 0.
    {
        printf("Esquerda\n"); // imprime o movimento da peça
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
