#include <iostream>
#include <limits>

int main() {
    // 1. Declaramos las variables que vamos a usar
    int a, b, c, total;

    while (true) {
        std::cout << "Introduce el primer entero (a): ";
        if (!(std::cin >> a)) goto error_handler; 

        std::cout << "Introduce el segundo entero (b): ";
        if (!(std::cin >> b)) goto error_handler;

        std::cout << "Introduce el tercer entero (c): ";
        if (!(std::cin >> c)) goto error_handler;

        // Si llegamos aqui, el calculo se hace bien

        total = a * b * c
        std::cout << "El resultado es: " << total << std::endl;
        
        break; // Importante: rompe el bucle al terminar con exito

        // El lugar a donde salta el programa si hay un error
        error_handler:
        std::cout << "Error: No has escrito un numero. Intenta de nuevo.\n";
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}