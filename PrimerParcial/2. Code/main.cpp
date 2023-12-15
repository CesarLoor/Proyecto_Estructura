/***********************************************************************
 * Module:  amin.cpp
 * Author:  Cesar Loor and Carlos Jaya 
 * Modified: Viernes, 15 de diciembre de 2023 15:00:00
 * Purpose: Dev the menu 
 * contacto: ciloor2@espe.edu.ec 
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include "menu.cpp"


using namespace std;

int main() {
    int opcion = 1; // Opción inicial

    do {
        mostrarMenu(opcion);

        char tecla = _getch(); // Leer la tecla presionada sin necesidad de presionar "Enter"

        switch (tecla) {
            case 72: // Flecha arriba
                opcion = (opcion > 1) ? opcion - 1 : 4;
                break;
            case 80: // Flecha abajo
                opcion = (opcion < 4) ? opcion + 1 : 1;
                break;
        }

    } while (opcion != 4);

    return 0;
}
