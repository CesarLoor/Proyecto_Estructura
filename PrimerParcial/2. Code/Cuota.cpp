/***********************************************************************
 * Module:  Cuota.cpp
 * Author:  Cesar Loor and Carlos jaya
 * Modified: mi�rcoles, 13 de diciembre de 2023 12:35:32
 * Purpose: Implementation of the class Cuota
 ***********************************************************************/
#include "Cuota.h"
#include <iostream>

// Constructor predeterminado
Cuota::Cuota()
    : MontoPrincipal(0), MontodeInteres(0), MontoTotal(0), SaldoPendiente(0)
{
}

// Constructor con parámetros
Cuota::Cuota const(double montoPrincipal, double montoInteres, double montoTotal, Fecha fechaDePago, double saldoPendiente)
    : MontoPrincipal(montoPrincipal), MontodeInteres(montoInteres), MontoTotal(montoTotal), FechadePago(fechaDePago), SaldoPendiente(saldoPendiente)
{
}

double Cuota::getMontoPrincipal() const
{
    return MontoPrincipal;
}

void Cuota::setMontoPrincipal(double monto)
{
    MontoPrincipal = monto;
}

double Cuota::getMontoInteres() const
{
    return MontodeInteres;
}

void Cuota::setMontoInteres(double monto)
{
    MontodeInteres = monto;
}

double Cuota::getMontoTotal() const
{
    return MontoTotal;
}

void Cuota::setMontoTotal(double monto)
{
    MontoTotal = monto;
}

Fecha Cuota::getFechaDePago() const
{
    return FechadePago;
}

void Cuota::setFechaDePago(Fecha *fecha)
{
    FechadePago = fecha;
}


double Cuota::getSaldoPendiente() const
{
    return SaldoPendiente;
}

void Cuota::setSaldoPendiente(double saldo)
{
    SaldoPendiente = saldo;
}

void Cuota::MostrarCuota() const
{
    std::cout << "Monto Principal: " << MontoPrincipal << std::endl;
    std::cout << "Monto de Interés: " << MontodeInteres << std::endl;
    std::cout << "Monto Total: " << MontoTotal << std::endl;
    std::cout << "Fecha de Pago: ";
    FechadePago.MostrarFecha();  // Asumo que la clase Fecha tiene una función MostrarFecha() para mostrar la fecha
    std::cout << "Saldo Pendiente: " << SaldoPendiente << std::endl;
}
