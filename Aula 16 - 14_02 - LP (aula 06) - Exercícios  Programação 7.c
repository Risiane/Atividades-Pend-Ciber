// Exercício 7: 
int main() {
    int matriz[10][10];
    int valor = 1;
    
    // Preenchendo a matriz com números de 1 a 100
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }
    
    // Imprimindo a matriz
    printf("Matriz 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
