#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* proceso = popen("./uno", "r");
    if (proceso == NULL) {
        fprintf(stderr, "Error al ejecutar el proceso imprimir_ceros_unos\n");
        return 1;
    }

    printf("Presiona Enter para finalizar el programa...\n");
    getchar();

    int resultado = pclose(proceso);
    if (resultado == -1) {
        fprintf(stderr, "Error al cerrar el proceso imprimir_ceros_unos\n");
        return 1;
    }

    return 0;
}
