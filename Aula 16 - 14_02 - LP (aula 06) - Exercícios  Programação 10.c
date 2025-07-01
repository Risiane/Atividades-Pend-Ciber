//Exercício 10: 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Função que verifica se três lados formam um triângulo
bool isTriangulo(int a, int b, int c) {
    return (a > abs(b - c) && a < (b + c) &&
            b > abs(a - c) && b < (a + c) &&
            c > abs(a - b) && c < (a + b));
}

int main() {
    // Testes
    printf("Triângulo (3,4,5): %s\n", isTriangulo(3, 4, 5) ? "Verdadeiro" : "Falso");
    printf("Triângulo (1,2,3): %s\n", isTriangulo(1, 2, 3) ? "Verdadeiro" : "Falso");
    printf("Triângulo (5,10,9): %s\n", isTriangulo(5, 10, 9) ? "Verdadeiro" : "Falso");
    return 0;
}

