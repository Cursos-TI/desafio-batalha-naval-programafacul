#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10]; // criando tabuleiro matriz 10x10

    // Inicializando o tabuleiro com zeros (ou outro valor se desejar)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }


    int linha_h = 2, coluna_h = 4; // Começa em C4
    int linha_v = 5, coluna_v = 7; // Começa em F7


    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};


    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }


    // Exibindo o tabuleiro com letras nas linhas
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
