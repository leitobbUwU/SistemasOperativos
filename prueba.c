#include <stdio.h>
#include <unistd.h>

int main() {
    int pid;
    FILE* file = NULL;

    pid = fork();

    if (pid == 0) {
        // Proceso hijo
        file = fopen("/dev/null", "w");  // Abrir un archivo nulo para descartar la salida
        if (file == NULL) {
            fprintf(stderr, "Error al abrir el archivo\n");
            return 1;
        }

        for (int i = 0; i < 25; i++) {
            fprintf(file, "0");
            usleep(100000);  // Espera 100 milisegundos
        }

        fclose(file);
    } else if (pid > 0) {
        // Proceso padre
        for (int i = 0; i < 25; i++) {
            printf("1");
            usleep(100000);  // Espera 100 milisegundos
        }
    } else {
        // Error al crear el proceso hijo
        fprintf(stderr, "Error al crear el proceso hijo\n");
        return 1;
    }

    return 0;
}
