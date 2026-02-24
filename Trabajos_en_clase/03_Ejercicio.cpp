#include <iostream>

int main() {
    int tabla;
    int multiplicador = 1;

    std::cout << "De que numero quieres la tabla?: ";
    std::cin >> tabla;

    while (multiplicador <= 10) {
        std::cout << tabla << " x " << multiplicador << " = " << (tabla * multiplicador) << std::endl;
        multiplicador++; 
    }

    return 0;
}