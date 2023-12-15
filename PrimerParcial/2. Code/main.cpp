#include <iostream>
#include <conio.h>
#include "menu.cpp"

using namespace std;

int main() {
    int opcionSeleccionada = manejarMenu();

    // Puedes hacer algo con la opción seleccionada si lo necesitas
    std::cout << "\nHas seleccionado la opcion: " << opcionSeleccionada << std::endl;

    return 0;
}
