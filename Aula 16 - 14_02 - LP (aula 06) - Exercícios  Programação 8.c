// Exercício 8:

#include <stdio.h>

// Função em C que imprime uma string seguida de uma linha em branco
void imprimir_com_espaco(const char *str) {
    printf("%s\n\n", str);
}

int main() {
    imprimir_com_espaco("Ola, mundo!");
    return 0;
}
