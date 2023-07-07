#include <iostream>

int main() {
    int n;
    std::cout << "Introduce un valor entero n: ";
    std::cin >> n;
    std::cout << "Los múltiplos de 4 entre 4 y "<< n << " son: ";
    int multiplo = 4;
    while (multiplo <= n) {
	std::cout << multiplo << " ";
	multiplo += 4;
    }
    std::cout << std::endl;
    std::cout <<"Presione una tecla para continuar...";
    //Espera a que se presione una tecla antes de salir
    std::cin.ignore();
    std::cin.get();
    return 0;
}
