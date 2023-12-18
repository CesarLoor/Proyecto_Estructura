/***********************************************************************
 * Module:  Cuota.h
 * Author:  Cesar Loor and Carlos Jaya
 * Modified: mi�rcoles, 13 de diciembre de 2023 12:35:32
 * Purpose: Declaration of the class Cuota
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Cuota_h)
#define __Modelo_Proyect_P1_Cuota_h

#include "Fecha.h"
class Fecha;

class Cuota
{
public:
    Cuota();  // Constructor predeterminado
    Cuota(double montoPrincipal, double montoInteres, double montoTotal, Fecha fechaDePago, double saldoPendiente);  // Constructor con parámetros

    // Funciones para la tabla de amortización alemana
    double getMontoPrincipal() const;
    void setMontoPrincipal(double monto);

    double getMontoInteres() const;
    void setMontoInteres(double monto);

    double getMontoTotal() const;
    void setMontoTotal(double monto);

    Fecha getFechaDePago() const;
    void setFechaDePago(Fecha fecha);

    double getSaldoPendiente() const;
    void setSaldoPendiente(double saldo);

    void MostrarCuota() const;

private:
    double MontoPrincipal;
    double MontodeInteres;
    double MontoTotal;
    Fecha FechadePago;
    double SaldoPendiente;
};

#endif