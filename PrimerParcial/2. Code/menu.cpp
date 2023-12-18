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
            generarTablaAmortizacion();  // Agregamos la generación de tabla en la opción 3
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
        std::cout << "3. Generar tabla de amortizacion\n";
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

    mostrarContenidoOpcion(opcion);

    std::cout << "\nPresiona Enter para salir...";
    std::cin.get();

    return opcion;
}

void generarTablaAmortizacion() {
    // Solicitar al usuario ingresar el monto del préstamo
    double montoPrestamo;
    std::cout << "Ingrese el monto del prestamo: ";
    std::cin >> montoPrestamo;

    // Validar que el monto del préstamo sea positivo
    if (montoPrestamo <= 0) {
        std::cerr << "Error: El monto del prestamo debe ser un valor positivo." << std::endl;
        return;
    }

    // Solicitar al usuario ingresar el plazo en meses
    int plazoEnMeses;
    std::cout << "Ingrese el plazo en meses (entre 3 y 60 meses): ";
    std::cin >> plazoEnMeses;

    // Validar que el plazo esté en el rango permitido
    if (plazoEnMeses < 3 || plazoEnMeses > 60) {
        std::cerr << "Error: El plazo debe estar entre 3 y 60 meses." << std::endl;
        return;
    }

    // Crear una instancia de ListaDoble
    ListaDoble<Cuota> tablaAmortizacion;

    // Generar la tabla de amortización
    tablaAmortizacion.GenerarTablaAmortizacion(montoPrestamo, plazoEnMeses);

    // Mostrar la tabla de amortización
    tablaAmortizacion.MostrarTablaAmortizacion();
}