// Exercício 5: 

#include <stdio.h>
#include <string.h>

void extrair_senai() {
    char original[] = "Cyber SENAI 2025";
    char extraida[6]; // Espaço para "SENAI" + '\0'
    int j = 0;

    for (int i = 0; original[i] != '\0'; i++) {
        if (strncmp(&original[i], "SENAI", 5) == 0) {
            strncpy(extraida, &original[i], 5);
            extraida[5] = '\0';
            break;
        }
    }
    
    printf("String extraída: %s\n", extraida);
}

int main() {
    extrair_senai();
    return 0;
}
