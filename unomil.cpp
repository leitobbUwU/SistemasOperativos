#include <iostream>

int main() {
    int i = 1;
    int sumaP = 0;
    int sumaI = 0;

    while (i <= 200) {
       if (i % 2 == 0) {
           sumaP += i;
       } else {
           sumaI += i;
       }
       i++;
    }

    std::cout << "Suma de los números pares: " << sumaP << std::endl; 
    std::cout << "Suma de los números impares: " << sumaI << std::endl;

    return 0;
}
