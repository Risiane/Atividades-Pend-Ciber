// Exercício 4: 
#include <stdio.h>

// a) Usando uma lista (array simples)
void usar_lista() {
    int lista[100];
    for (int i = 0; i < 100; i++) {
        lista[i] = i + 1;
    }
    printf("Lista (Ordem inversa):\n");
    for (int i = 99; i >= 0; i--) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

// b) Usando um "dicionário" (struct simulando chave-valor)
typedef struct {
    int chave;
    int valor;
} Dicionario;

void usar_dicionario() {
    Dicionario dicionario[100];
    for (int i = 0; i < 100; i++) {
        dicionario[i].chave = i + 1;
        dicionario[i].valor = i + 1;
    }
    printf("Dicionário (Ordem inversa):\n");
    for (int i = 99; i >= 0; i--) {
        printf("[%d]: %d\n", dicionario[i].chave, dicionario[i].valor);
    }
}

// c) Usando uma tupla (array constante, pois C não tem tuplas diretamente)
void usar_tupla() {
    const int tupla[100] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100
    };
    printf("Tupla (Ordem inversa):\n");
    for (int i = 99; i >= 0; i--) {
        printf("%d ", tupla[i]);
    }
    printf("\n");
}

int main() {
    usar_lista();
    usar_dicionario();
    usar_tupla();
    return 0;
}
