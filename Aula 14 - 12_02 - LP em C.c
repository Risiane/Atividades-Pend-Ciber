// 1- Crie um Vetor em C de 10 valores inicie com os valores de 11 até 20 e imprima na tela

#include <stdio.h>

int main() {
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        vetor[i] = 11 + i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

// 3- Crie uma matriz 10x10 inicie com os valores de 100 até 0 e imprima os elementos na ordem inversa na tela - C.

#include <stdio.h>

int main() {
    int matriz[10][10];
    int valor = 100;

    // Preenche a matriz de 100 até 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = valor--;
        }
    }

    // Imprime em ordem inversa
    for (int i = 9; i >= 0; i--) {
        for (int j = 9; j >= 0; j--) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
