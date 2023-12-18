/***********************************************************************
 * Module:  ListaDoble.cpp
 * Author:  Carlos Jaya
 * Modified: miercoles, 13 de diciembre de 2023 1:32:00
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/
#include <cmath>
#include "ListaDoble.h" 
#include "Nodo.h"
#include "Fecha.h"
#include <iostream>


template <typename T>
ListaDoble<T>::ListaDoble() {
    primero = nullptr;
    ultimo = nullptr;
}
template <typename T>
void ListaDoble<T>::Insertar(T _dato) {
    Nodo<T>* nuevo = new Nodo<T>(_dato);
    if (primero == nullptr) {
        primero = nuevo;
        ultimo = nuevo;
    }
    else {
        ultimo->setSiguiente(nuevo);
        nuevo->setAnterior(ultimo);
        ultimo = nuevo;
    }
}
template <typename T>
void ListaDoble<T>::Buscar(T _dato) {
    Nodo<T>* aux = primero;
    while (aux != nullptr) {
        if (aux->getDato() == _dato) {
            std::cout << "El dato " << _dato << " se encuentra en la lista" << std::endl;
            return;
        }
        aux = aux->getSiguiente();
    }
    std::cout << "El dato " << _dato << " no se encuentra en la lista" << std::endl;
}
template <typename T>
void ListaDoble<T>::Eliminar(T _dato) {
    Nodo<T>* aux = primero;
    while (aux != nullptr) {
        if (aux->getDato() == _dato) {
            if (aux == primero) {
                primero = primero->getSiguiente();
                primero->setAnterior(nullptr);
            }
            else if (aux == ultimo) {
                ultimo = ultimo->getAnterior();
                ultimo->setSiguiente(nullptr);
            }
            else {
                aux->getAnterior()->setSiguiente(aux->getSiguiente());
                aux->getSiguiente()->setAnterior(aux->getAnterior());
            }
            delete aux;
            std::cout << "El dato " << _dato << " se ha eliminado de la lista" << std::endl;
            return;
        }
        aux = aux->getSiguiente();
    }
    std::cout << "El dato " << _dato << " no se encuentra en la lista" << std::endl;
}
template <typename T>
void ListaDoble<T>::Mostrar() {
    Nodo<T>* aux = primero;
    while (aux != nullptr) {
       std::cout << aux->getDato() << " -> ";
        aux = aux->getSiguiente();
    }
    std::cout << std::endl;
}
    // Funciones para la tabla de amortización alemana


template <typename T>
void ListaDoble<T>::GenerarTablaAmortizacion(double montoPrestamo, int plazoEnMeses)
{
    // Limpiar la lista antes de generar la nueva tabla
    while (primero != nullptr) {
        Nodo<T>* temp = primero;
        primero = primero->getSiguiente();
        delete temp;
    }
    ultimo = nullptr;

    // Fijar la tasa de interés al 12%
    double tasaInteresAnual = 12.0;

    // Calcular la tasa de interés mensual
    double tasaInteresMensual = tasaInteresAnual / 12.0;

    // Calcular la cuota de amortización alemana
    double cuota = CalcularCuota(montoPrestamo, tasaInteresMensual, plazoEnMeses);

    // Fecha inicial de pago (puedes ajustarla según tus necesidades)
    Fecha fechaDePago(1, 1, 2023);

    // Generar las cuotas y agregarlas a la lista
    for (int i = 0; i < plazoEnMeses; ++i) {
        // Calcular los componentes de la cuota
        double montoInteres = montoPrestamo * tasaInteresMensual;
        double montoPrincipal = cuota - montoInteres;

        // Actualizar el saldo pendiente
        montoPrestamo -= montoPrincipal;

        // Validar y ajustar la fecha de pago
        while (!fechaDePago.fecha_valida()) {
            fechaDePago = fechaDePago.aumentar_dia_si_no_es_laborable(fechaDePago);
        }

        // Crear una nueva cuota con la fecha de pago actualizada
        Cuota nuevaCuota(montoPrincipal, montoInteres, cuota, fechaDePago, montoPrestamo);

        // Insertar la cuota en la lista
        InsertarCuota(nuevaCuota);

        // Actualizar la fecha de pago para el próximo mes
        fechaDePago = fechaDePago.aumentar_dia_si_no_es_laborable(Fecha(fechaDePago.getDia(), fechaDePago.getMes() + 1, fechaDePago.getAnio()));
        if (fechaDePago.getMes() > 12) {
            fechaDePago = Fecha(1, 1, fechaDePago.getAnio() + 1);
        }
    }
}

template <typename T>
double ListaDoble<T>::CalcularCuota(double montoPrestamo, double tasaInteresMensual, int plazoEnMeses)
{
    // Calcular la cuota de amortización alemana
    double cuota = (montoPrestamo * tasaInteresMensual) / (1 - pow(1 + tasaInteresMensual, -plazoEnMeses));

    return cuota;
}

template <typename T>
void ListaDoble<T>::InsertarCuota(Cuota cuota) {
    Nodo<T>* nuevo = new Nodo<T>(cuota);  // Utilizamos Nodo<T> en lugar de Nodo<Cuota>
    if (primero == nullptr) {
        primero = nuevo;
        ultimo = nuevo;
    } else {
        ultimo->setSiguiente(nuevo);
        nuevo->setAnterior(ultimo);
        ultimo = nuevo;
    }
}

template <typename T>
void ListaDoble<T>::MostrarTablaAmortizacion() {
    Nodo<T>* aux = primero;

    // Imprimir encabezado de la tabla
    std::cout << "---------------------------------------------------------------------------" << std::endl;
    std::cout << "Monto Principal | Monto de Interés | Monto Total | Fecha de Pago | Saldo Pendiente" << std::endl;
    std::cout << "---------------------------------------------------------------------------" << std::endl;

    // Mostrar cada cuota en la tabla
    while (aux != nullptr) {
        aux->getDato().MostrarCuota();
        aux = aux->getSiguiente();
        std::cout << std::endl;
    }

    std::cout << "---------------------------------------------------------------------------" << std::endl;
}