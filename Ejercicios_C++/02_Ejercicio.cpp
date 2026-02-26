#include <iostream>

int main() {
    int numero;
    int suma = 0;

    std::cout << "Introduce numeros para sumar (escribe 0 para terminar): " << std::endl;
    std::cin >> numero;

    while (numero != 0) {
        suma = suma + numero;
        std::cout << "Suma actual: " << suma << std::endl;
        
        std::cout << "Introduce otro numero: ";
        std::cin >> numero; // Volvemos a pedir el dato dentro del bucle
    }

    std::cout << "Suma total final: " << suma << std::endl;
    return 0;
}