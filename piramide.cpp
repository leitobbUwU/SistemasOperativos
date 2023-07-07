#include <iostream>

int main() {
    int n = 6; //Numero de filas de la piramide
    for (int i = 0; i <=n; i++) {
	for (int j = i; j >= 0; j--) {
	    std::cout << "[" << i << "," << j << "J ";
	}
	std::cout << std::endl;
    }
    return 0;
}
