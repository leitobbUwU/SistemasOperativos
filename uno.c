#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 0; i < 50; i++) {
        printf("0");
        fflush(stdout);
        usleep(100000);  // Espera 100 milisegundos
        printf("1");
        fflush(stdout);
        usleep(100000);  // Espera 100 milisegundos
    }

    return 0;
}
