/***********************************************************************
 * Module:  Validacion.cpp
 * Author:  Cesar Loor and Carlos Jaya
 * Create: miércoles, 13 de diciembre de 2023 1:36:21
 * Modified: Viernes, 15 de diciembre de 2023 15:10:04
 * Purpose: Implementation of the class Validacion
 * contacto: ciloor2@espe.edu.ec 
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <regex>
#include <string>
#include "Validacion.h"
#include <limits>

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
int borrar(char* datos, int& i) {
    if (i > 0) {
        std::cout << "\b \b";
        i--;
        datos[i] = '\0';
        return i;
    }
    return 0;
}

float ingresar_reales(const char* msj) {
    char* datos = new char[12];
    char c;
    int i = 0;
    bool hay_punto = false;
    int posicion_punto;

    std::cout<<msj<<std::endl;

    while ((c = getch()) != 13 && i < 11) {
        if ((c >= '0' && c <= '9') || (c == '.' && !hay_punto)|| c == 8 || c == '-') {
            if(!((c == '.')&& i == 0)){
                if(!((c == '-') && i != 0)){
                    if (c == 8) {
                        i = borrar(datos, i);
                        if((i+1) == posicion_punto){
                            hay_punto = false;
                        }
                    }
                    else {
                        std::cout<<c;
                        datos[i++] = c;

                        if (c == '.') {
                            posicion_punto = i;
                            hay_punto = true;
                        }
                    }
                }
            }
        }
    }
    datos[i] = '\0';
    return atof(datos);
}

int Validacion::IngresarDatosFloat(void)
{
      float dato;
    std::cout << "Ingrese un valor decimal: ";
    while (!(std::cin >> dato))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error. Ingrese un valor decimal: ";
    }
    return dato;
}


int Validacion::IngresarCedula(void)
{
   cedula.clear(); // Limpiar cedula antes de la nueva entrada
    std::cout << "Ingrese el numero de cedula: ";
    std::cin >> cedula;
    return 0; // O cualquier valor que desees devolver
}


bool Validacion::ValidarCedulaReal(void)
{
    // Validar la longitud de la cédula (debe ser de 10 dígitos)
    if (cedula.length() != 10)
    {
        std::cout << "La cedula debe tener 10 digitos." << std::endl;
        return false;
    }

    // Validar que la cédula contenga solo dígitos
    if (!std::regex_match(cedula, std::regex("\\d+")))
    {
        std::cout << "La cedula debe contener solo numeros." << std::endl;
        return false;
    }

    // Validar el décimo dígito (provincia)
    int provincia = std::stoi(cedula.substr(0, 2));
    if (provincia < 0 || provincia > 24)
    {
        std::cout << "El codigo de provincia no es valido." << std::endl;
        return false;
    }

    // Validar el dígito verificador
    int verificador = std::stoi(cedula.substr(9, 1));
    if (!ValidarDigitoVerificador(cedula.substr(0, 9), verificador))
    {
        std::cout << "El digito verificador no es valido." << std::endl;
        return false;
    }

    // Si pasa todas las validaciones, la cédula es válida
    std::cout << "La cedula es valida." << std::endl;
    return true;
}