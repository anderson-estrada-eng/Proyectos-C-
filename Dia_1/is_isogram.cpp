#include <iostream>//para poder escucharle y que me escuche mi computadora con std::cout y std:cin
#include <string>//Para que entienda palabras,manipule,etc
#include <cctype> // Para manejar mayúsculas/minúsculas

bool is_isogram(std::string palabra) {
    // Comparamos cada letra (i) con las siguientes (j)
    for (size_t i = 0; i < palabra.length(); ++i) {
        for (size_t j = i + 1; j < palabra.length(); ++j) {
            // Convertimos a minúsculas para que 'A' sea igual a 'a'
            if (tolower(palabra[i]) == tolower(palabra[j])) {
                return false; // ¡Se repite! No es isograma
            }
        }
    }
    return true; // Si terminó los bucles, todo está bien
}

int main() {
    std::string palabra;
    std::cout << "Dime una palabra: ";
    std::cin >> palabra;

    if (is_isogram(palabra)) {
        std::cout << "Es un isograma (True)" << std::endl;
    } else {
        std::cout << "No es un isograma (False)" << std::endl;
    }

    return 0;
}