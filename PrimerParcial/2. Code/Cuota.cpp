/***********************************************************************
 * Module:  Cuota.cpp
 * Author:  Cesar Loor
 * Modified: mi�rcoles, 13 de diciembre de 2023 12:35:32
 * Purpose: Implementation of the class Cuota
 ***********************************************************************/

#include "Cuota.h"

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::ActualizarSaldo()
// Purpose:    Implementation of Cuota::ActualizarSaldo()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Cuota::ActualizarSaldo(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::DetallesdeCouta()
// Purpose:    Implementation of Cuota::DetallesdeCouta()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Cuota::DetallesdeCouta(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::getMontoPrincipal()
// Purpose:    Implementation of Cuota::getMontoPrincipal()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Cuota::getMontoPrincipal(void)
{
   return MontoPrincipal;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::setMontoPrincipal(int newMontoPrincipal)
// Purpose:    Implementation of Cuota::setMontoPrincipal()
// Parameters:
// - newMontoPrincipal
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cuota::setMontoPrincipal(int newMontoPrincipal)
{
   MontoPrincipal = newMontoPrincipal;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::getMontodeInteres()
// Purpose:    Implementation of Cuota::getMontodeInteres()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Cuota::getMontodeInteres(void)
{
   return MontodeInteres;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::setMontodeInteres(int newMontodeInteres)
// Purpose:    Implementation of Cuota::setMontodeInteres()
// Parameters:
// - newMontodeInteres
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cuota::setMontodeInteres(int newMontodeInteres)
{
   MontodeInteres = newMontodeInteres;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::getMontoTotal()
// Purpose:    Implementation of Cuota::getMontoTotal()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Cuota::getMontoTotal(void)
{
   return MontoTotal;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::setMontoTotal(int newMontoTotal)
// Purpose:    Implementation of Cuota::setMontoTotal()
// Parameters:
// - newMontoTotal
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cuota::setMontoTotal(int newMontoTotal)
{
   MontoTotal = newMontoTotal;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::getFechadePago()
// Purpose:    Implementation of Cuota::getFechadePago()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Cuota::getFechadePago(void)
{
   return FechadePago;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::setFechadePago(int newFechadePago)
// Purpose:    Implementation of Cuota::setFechadePago()
// Parameters:
// - newFechadePago
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cuota::setFechadePago(int newFechadePago)
{
   FechadePago = newFechadePago;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::getSaldoPendiente()
// Purpose:    Implementation of Cuota::getSaldoPendiente()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Cuota::getSaldoPendiente(void)
{
   return SaldoPendiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cuota::setSaldoPendiente(int newSaldoPendiente)
// Purpose:    Implementation of Cuota::setSaldoPendiente()
// Parameters:
// - newSaldoPendiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cuota::setSaldoPendiente(int newSaldoPendiente)
{
   SaldoPendiente = newSaldoPendiente;
}