/***********************************************************************
 * Module:  ListaDoble.h
 * Author:  PC DIGITAL
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:32:00
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/
class Cuota;

#if !defined(__Modelo_Proyect_P1_Operaciones_h)
#define __Modelo_Proyect_P1_Operaciones_h
#include"Nodo.cpp"
#include "Cuota.h"


using namespace std;
template <typename T>


class ListaDoble {
private:
    Nodo<T>* primero;
    Nodo<T>* ultimo;
public:
    
    ListaDoble<T>();
    void Insertar(T);
    void Buscar(T);
    void Eliminar(T);
    void Mostrar();

 // Funciones para la tabla de amortización alemana
    void GenerarTablaAmortizacion(double montoPrestamo, int plazoEnMeses);
    double CalcularCuota(double montoPrestamo, double tasaInteresMensual, int plazoEnMeses);
    void InsertarCuota(Cuota cuota);
    void MostrarTablaAmortizacion();
};

#endif