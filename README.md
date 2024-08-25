# Ejemplo de Manejo de Errores en C++ con Excepciones

Este repositorio contiene un ejemplo simple de manejo de errores en C++ utilizando excepciones. El código demuestra cómo manejar situaciones críticas, como la división por cero, lanzando y capturando excepciones para asegurar que el programa pueda continuar ejecutándose de manera segura.

## Descripción

El ejemplo incluye una función `dividir` que realiza una operación de división entre dos enteros. Si el divisor es cero, la función lanza una excepción de tipo `std::runtime_error`. La función `main` muestra cómo capturar esta excepción usando un bloque `try-catch`, lo que permite manejar el error de manera controlada y proporcionar un mensaje de error informativo.

## Estructura del Código

- **dividir(int a, int b)**: Función que realiza la división de dos enteros `a` y `b`. Si `b` es cero, se lanza una excepción.

- **main()**: Función principal que llama a `dividir` con diferentes valores y maneja cualquier excepción que pueda ocurrir.

### Ejemplo de Código

```cpp
#include <iostream>
#include <stdexcept>

void dividir(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Error: División por cero");
    }

    int resultado = a / b;
    std::cout << "Resultado de la división: " << resultado << std::endl;
}

int main() {
    try {
        dividir(10, 2);    // Esta llamada no provocará una excepción
        dividir(8, 0);     // Esta llamada provocará una excepción
    } catch (const std::exception& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    return 0;
}
