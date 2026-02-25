#include <iostream>
#include <limits>

int main() {
    int a, b, c, total;

    while (true) {
        std::cout << "Introduce el primer entero (a): ";
        if (!(std::cin >> a)) {
            std::cout << "Error: entrada no valida." << std::endl;
            break; // O usa return 1; para salir
        }

        // Repite la lógica para b y c...

        total = a * b * c;
        std::cout << "El resultado es: " << total << std::endl;
        break; 
    }
    return 0;
}