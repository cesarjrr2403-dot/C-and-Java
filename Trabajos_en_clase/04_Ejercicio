#include <iostream>

int main() {
    int secreto = 7;
    int intento;
    int oportunidades = 3;

    std::cout << "Adivina el numero secreto (del 1 al 10)." << std::endl;

    while (oportunidades > 0) {
        std::cout << "Te quedan " << oportunidades << " intentos. ¿Cual es?: ";
        std::cin >> intento;

        if (intento == secreto) {
            std::cout << "¡Ganaste! El numero era " << secreto << std::endl;
            return 0; // Terminamos el programa aquí
        } else {
            std::cout << "Incorrecto." << std::endl;
            oportunidades--; // Restamos un intento
        }
    }

    std::cout << "Perdiste. El numero era " << secreto << std::endl;
    return 0;
}