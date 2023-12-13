/***********************************************************************
 * Module:  Validacion.cpp
 * Author:  Cesar Loor
 * Modified: miércoles, 13 de diciembre de 2023 1:36:21
 * Purpose: Implementation of the class Validacion
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string>
#include "Validacion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Validacion::IngresarDatosEnteros()
// Purpose:    Implementation of Validacion::IngresarDatosEnteros()
// Return:     int
////////////////////////////////////////////////////////////////////////
void Validacion::backSpace(char* datos, int& i) {
    if (i > 0) {
        std::cout << "\b \b";
        i--;
        datos[i] = '\0';
    }
}
int Validacion::IngresarDatosEnteros(const char* msj)
{
   char* datos = new char[10];
    char c;
    int i = 0;
    system("cls");
    std::cout << msj << std::endl;
    while ((c = getch()) != 13 && i < 9) {
        if ((c >= '0' && c <= '9') || c == 8) {
            if (c == 8) {
                backSpace(datos, i);
            } else {
                printf("%c", c);
                datos[i++] = c;
            }
        }
    }
    datos[i] = '\0';
    return atoi(datos);
}

////////////////////////////////////////////////////////////////////////
// Name:       Validacion::IngresarDatosFloat()
// Purpose:    Implementation of Validacion::IngresarDatosFloat()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Validacion::IngresarDatosFloat(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Validacion::IngresarCedula()
// Purpose:    Implementation of Validacion::IngresarCedula()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Validacion::IngresarCedula(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Validacion::ValidarCedulaReal()
// Purpose:    Implementation of Validacion::ValidarCedulaReal()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool Validacion::ValidarCedulaReal(void)
{
   // TODO : implement
}