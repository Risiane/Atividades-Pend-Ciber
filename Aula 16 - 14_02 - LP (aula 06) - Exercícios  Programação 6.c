// Exercício 6: 
#include <stdio.h>

void imprimir_c() {
    printf("C:\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    printf(\"Ola\\n\");\n");
    printf("    return 0;\n");
    printf("}\n");
}

int main() {
    imprimir_python();
    imprimir_c();
    return 0;
}
