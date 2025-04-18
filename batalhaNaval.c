#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHA 10
#define COLUNA 10


int main() {
    // Cria o tabuleiro.

    int tabuleiro[LINHA][COLUNA];

    for(int x = 0; x < LINHA; x++) {
        for (int y = 0; y < COLUNA; y++) {
            tabuleiro[x][y] = 0;
            
        }
    }

    // Coloca os 4 navios em suas posições.

    for(int x = 0; x < LINHA; x++) {
        for(int y = 0; y < COLUNA; y++) {
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

    // Pede para usuário entrar com um valor que representa uma habilidade e armazena o valor de entrada em uma variavél.

    printf("Escolha uma habilidade: \n");
    printf("1: Habilidade em cone. \n");
    printf("2: Habilidade em octaedro. \n");
    printf("3: Habilidade em cruz. \n");

    int habilidade;

    scanf("%d", &habilidade);

    // Verifica qual habilidade foi escolida e com base nisso, a habilidade é lançada no tabuleiro.

    switch (habilidade)
    {
    case 1:
        for(int x = 0; x < LINHA; x++){
            for(int y = 0; y < COLUNA; y++){
                if(x == 0 && y == 5) {
                    tabuleiro[x][y] = tabuleiro[x][y] == 0 ? 1 : 5;
                    tabuleiro[x + 1][y] = tabuleiro[x + 1][y] == 0 ? 1 : 5;
                    tabuleiro[x + 1][y + 1] = tabuleiro[x + 1][y + 1] == 0 ? 1 : 5;
                    tabuleiro[x + 1][y - 1] = tabuleiro[x + 1][y - 1] == 0 ? 1 : 5;
                    tabuleiro[x + 2][y] = tabuleiro[x + 2][y] == 0 ? 1 : 5;
                    tabuleiro[x + 2][y + 1] = tabuleiro[x + 2][y + 1] == 0 ? 1 : 5;
                    tabuleiro[x + 2][y - 1] = tabuleiro[x + 2][y - 1] == 0 ? 1 : 5;
                    tabuleiro[x + 2][y + 2] = tabuleiro[x + 2][y + 2] == 0 ? 1 : 5;
                    tabuleiro[x + 2][y - 2] = tabuleiro[x + 2][y - 2] == 0 ? 1 : 5;
                }

                printf("%d ", tabuleiro[x][y]);
            }

            printf("\n");
        }

        break;
    case 2:
        for(int x = 0; x < LINHA; x++){
            for(int y = 0; y < COLUNA; y++){
                if(x == 5 && y == 3) {
                    tabuleiro[x][y] = tabuleiro[x][y] == 0 ? 1 : 5;
                    tabuleiro[x + 1][y] = tabuleiro[x + 1][y] == 0 ? 1 : 5;
                    tabuleiro[x + 2][y] = tabuleiro[x + 2][y] == 0 ? 1 : 5;
                    tabuleiro[x + 1][y + 1] = tabuleiro[x + 1][y + 1] == 0 ? 1 : 5;
                    tabuleiro[x + 1][y - 1] = tabuleiro[x + 1][y - 1] == 0 ? 1 : 5;
                }

                printf("%d ", tabuleiro[x][y]);
            }

            printf("\n");
        }
        
        break;
    case 3:
    for(int x = 0; x < LINHA; x++){
        for(int y = 0; y < COLUNA; y++){
            if(x == 5 && y == 7) {
                tabuleiro[x][y] = tabuleiro[x][y] == 0 ? 1 : 5;
                tabuleiro[x + 1][y] = tabuleiro[x + 1][y] == 0 ? 1 : 5;
                tabuleiro[x + 2][y] = tabuleiro[x + 2][y] == 0 ? 1 : 5;
                tabuleiro[x + 1][y + 1] = tabuleiro[x + 1][y + 1] == 0 ? 1 : 5;
                tabuleiro[x + 1][y - 1] = tabuleiro[x + 1][y - 1] == 0 ? 1 : 5;
                tabuleiro[x + 1][y + 2] = tabuleiro[x + 1][y + 2] == 0 ? 1 : 5;
                tabuleiro[x + 1][y - 2] = tabuleiro[x + 1][y - 2] == 0 ? 1 : 5;
            }

            printf("%d ", tabuleiro[x][y]);
        }

        printf("\n");
    }

        break;
    default:
        printf("Opção invalida. \n"); 

        break;
    }

    return 0;
}
