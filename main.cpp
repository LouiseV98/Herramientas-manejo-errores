#include <iostream>
#include <stdexcept>

void dividir(int a, int b) {
    if (b == 0) {
        // Lanzar una excepción en lugar de usar 'raise'
        throw std::runtime_error("Error: Division por cero");
    }

    int resultado = a / b;
    std::cout << "Resultado de la division: " << resultado << std::endl;
}

int main() {
    try {
        dividir(10, 2);
        dividir(8, 0);  // Esto provocará una excepción
    } catch (const std::exception& e) {
        std::cerr << "Excepcion capturada: " << e.what() << std::endl;
    }

    return 0;
}
