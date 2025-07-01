// Exercício 9: 

#include <stdio.h>
#include <math.h>

// Função que calcula a circunferência do círculo
double circCirculo(int raio) {
    return 2 * M_PI * raio;
}

int main() {
    // Testes
    printf("Circunferência com raio 5: %.2f\n", circCirculo(5));
    printf("Circunferência com raio 10: %.2f\n", circCirculo(10));
    return 0;
}
