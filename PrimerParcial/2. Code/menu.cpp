/***********************************************************************
 * Module:  menu.cpp
 * Author:  Cesar Loor and Carlos Jaya
 * Modified: Viernes, 15 de diciembre de 2023 15:00:00
 * Purpose: Implementation of the function menu
 * contacto: ciloor2@espe.edu.ec 
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include "Nodo.h"
#include "ListaDoble.h"
#include "Fecha.h"
#include "Cuota.h"
#include "Fecha.h"

void generarTablaAmortizacion();

void mostrarContenidoOpcion(int opcion) {
    switch (opcion) {
        case 1:
            std::cout << "Has seleccionado la Opcion 1. ";
            break;
        case 2:
            std::cout << "Has seleccionado la Opcion 2. ";
            break;
        case 3:
            std::cout << "Has seleccionado la opcion 3.\n";
            break;
        case 4:
            std::cout << "Saliendo del programa. ¡Hasta luego!\n";
            break;
        default:
            std::cout << "Opcion no valida. Intentalo de nuevo.\n";
            break;
    }
}

int manejarMenu() {
    int opcion = 1;
    char tecla;

    do {
        // Mostrar el menú
        std::cout <<"=== Menu ===\n";
        std::cout <<"1. Opcion 1\n";
        std::cout << "2. Opcion 2\n";
        std::cout << "3. tabla\n";
        std::cout << "4. Salir\n";
        std::cout << "============\n";

        // Mostrar la selección actual
        std::cout << "Selecciona una opcion (usa las flechas y Enter): " << opcion << "\n";

        // Capturar la tecla presionada
        tecla = _getch();

        // Lógica para actualizar la opción según las teclas de flecha
        switch (tecla) {
            case 72: // Flecha arriba
                opcion = (opcion > 1) ? opcion - 1 : 4;
                break;
            case 80: // Flecha abajo
                opcion = (opcion < 4) ? opcion + 1 : 1;
                break;
            default:
                break;
        }

        system("clear || cls");

    } while (tecla != 13);  

 

     generarTablaAmortizacion();

    mostrarContenidoOpcion(opcion);

    std::cout << "\nPresiona Enter para salir...";
    std::cin.get();

    return opcion;
}
