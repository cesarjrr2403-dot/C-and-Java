#include <iostream>
#include <limits>

int main() {
    // 1. Declarar variables al principio
    int a, b, c, total;

    while (true) {
        std::cout << "Introduce el primer entero (a): ";
        if (!(std::cin >> a)) goto error_handler; 

        std::cout << "Introduce el segundo entero (b): ";
        if (!(std::cin >> b)) goto error_handler;

        std::cout << "Introduce el tercer entero (c): ";
        if (!(std::cin >> c)) goto error_handler;

        // Si las lecturas fueron correctas:
        total = a * b * c;
        std::cout << "El resultado es: " << total << std::endl;
        
        break; // Salimos del bucle si todo salio bien

        // ETIQUETA DE ERROR: Esto es lo que te faltaba
        error_handler:
        std::cout << "Error: no es un numero entero. Intentalo de nuevo.\n";
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
} // <--- Asegúrate de que esta llave exista
