#include <iostream>
#include <conio.h>
#include "menu.cpp"
#include "ListaDoble.h"
#include "Nodo.h"
#include "Fecha.h"

using namespace std;

int main() {
    ListaDoble<Fecha>* lista_doble =new ListaDoble<Fecha>();
    int opcionSeleccionada = manejarMenu();
    

    // Puedes hacer algo con la opción seleccionada si lo necesitas
    std::cout << "\nHas seleccionado la opcion: " << opcionSeleccionada << std::endl;

    return 0;
}
