// Solicitação pelo Bash

// gcc gerenciador.c -o gerenciador
// ./gerenciador

// Código em C
#include <stdio.h>    // Para printf, perror
#include <dirent.h>   // Para trabalhar com diretórios

int main() {
    // Abre o diretório atual (".")
    DIR *d = opendir(".");
    if (d == NULL) {
        perror("Erro ao abrir diretório");  // Mostra erro se não conseguir abrir
        return 1;
    }

    struct dirent *dir;

    // Loop para ler todos os arquivos e pastas do diretório
    while ((dir = readdir(d)) != NULL) {
        // Verifica se é um diretório e ignora "." e ".."
        if (dir->d_type == DT_DIR && dir->d_name[0] != '.')
            printf("[DIR] %s\n", dir->d_name);
    }

    closedir(d);  // Fecha o diretório após a leitura
    return 0;
}
