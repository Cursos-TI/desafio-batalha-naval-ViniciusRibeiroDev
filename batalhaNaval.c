#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHA 10
#define COLUNA 10


int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // int tabuleiro[LINHA][COLUNA] = {
    //     {0,0,0,0,0,0,0,0,0,0},
    //     {0,0,0,1,1,0,0,0,0,0},
    //     {0,0,0,0,0,0,0,0,0,0},
    //     {0,0,0,0,0,0,0,0,0,0},
    //     {0,0,0,0,0,0,1,0,0,0},
    //     {0,0,0,0,0,0,1,0,0,0},
    //     {0,0,0,0,0,0,0,0,0,0},
    //     {0,0,0,0,0,0,0,0,0,0},
    //     {0,0,0,0,0,0,0,0,0,0},
    //     {0,0,0,0,0,0,0,0,0,0},
    // };


    // for(int i = 0; i < LINHA; i++) {
    //     for(int j = 0; j < COLUNA; j++) {
    //         if(tabuleiro[i][j] == 1){
    //             printf("Navio nas codernadas X: %d, Y: %d. \n", j, i);
    //         }
    //     }
    // }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int tabuleiro[LINHA][COLUNA];

    for (int x = 0; x < LINHA; x++) {
        for (int y = 0; y < COLUNA; y++) {
            tabuleiro[x][y] = 0;

        }
    }

    for (int x = 0; x < LINHA; x++) {
        for (int y = 0; y < COLUNA; y++) {
            if ((x == 3 && y == 4) || (x == 5 && y == 7)) {
                tabuleiro[x][y] = 3;
                tabuleiro[x][y + 1] = 3;
            }

            if ((x == 0 && y == 5) || (x == 8 && y == 0)) {
                tabuleiro[x + 1][y + 1] = 3;
                tabuleiro[x][y] = 3;
            }
            printf("%d ", tabuleiro[x][y]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
