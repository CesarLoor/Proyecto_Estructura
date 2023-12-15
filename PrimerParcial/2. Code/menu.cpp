/***********************************************************************
 * Module:  menu.cpp
 * Author:  Cesar Loor 
 * Modified: Viernes, 15 de diciembre de 2023 15:00:00
 * Purpose: Implementation of the function menu
 * contacto: ciloor2@espe.edu.ec 
 ***********************************************************************/
#include <iostream>
#include <conio.h>

using namespace std;

void mostrarMenu(int opcionSeleccionada) {
    system("cls"); // Limpia la pantalla

    cout << "Menu Principal\n";
    cout << "----------------\n";
    cout << (opcionSeleccionada == 1 ? "> " : "  ") << "1. Opcion 1\n";
    cout << (opcionSeleccionada == 2 ? "> " : "  ") << "2. Opcion 2\n";
    cout << (opcionSeleccionada == 3 ? "> " : "  ") << "3. Opcion 3\n";
    cout << (opcionSeleccionada == 4 ? "> " : "  ") << "4. Salir\n";
    
}