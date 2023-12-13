/***********************************************************************
 * Module:  Couta.cpp
 * Author:  Cesar Loor
 * Modified: miércoles, 13 de diciembre de 2023 1:58:29
 * Purpose: Implementation of the class Couta
 ***********************************************************************/

#include "Couta.h"

////////////////////////////////////////////////////////////////////////
// Name:       Couta::ActualizarSaldo()
// Purpose:    Implementation of Couta::ActualizarSaldo()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Couta::ActualizarSaldo(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::DetallesdeCouta()
// Purpose:    Implementation of Couta::DetallesdeCouta()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Couta::DetallesdeCouta(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::getMontoPrincipal()
// Purpose:    Implementation of Couta::getMontoPrincipal()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Couta::getMontoPrincipal(void)
{
   return MontoPrincipal;
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::setMontoPrincipal(int newMontoPrincipal)
// Purpose:    Implementation of Couta::setMontoPrincipal()
// Parameters:
// - newMontoPrincipal
// Return:     void
////////////////////////////////////////////////////////////////////////

void Couta::setMontoPrincipal(int newMontoPrincipal)
{
   MontoPrincipal = newMontoPrincipal;
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::getMontodeInteres()
// Purpose:    Implementation of Couta::getMontodeInteres()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Couta::getMontodeInteres(void)
{
   return MontodeInteres;
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::setMontodeInteres(int newMontodeInteres)
// Purpose:    Implementation of Couta::setMontodeInteres()
// Parameters:
// - newMontodeInteres
// Return:     void
////////////////////////////////////////////////////////////////////////

void Couta::setMontodeInteres(int newMontodeInteres)
{
   MontodeInteres = newMontodeInteres;
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::getMontoTotal()
// Purpose:    Implementation of Couta::getMontoTotal()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Couta::getMontoTotal(void)
{
   return MontoTotal;
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::setMontoTotal(int newMontoTotal)
// Purpose:    Implementation of Couta::setMontoTotal()
// Parameters:
// - newMontoTotal
// Return:     void
////////////////////////////////////////////////////////////////////////

void Couta::setMontoTotal(int newMontoTotal)
{
   MontoTotal = newMontoTotal;
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::getFechadePago()
// Purpose:    Implementation of Couta::getFechadePago()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Couta::getFechadePago(void)
{
   return FechadePago;
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::setFechadePago(int newFechadePago)
// Purpose:    Implementation of Couta::setFechadePago()
// Parameters:
// - newFechadePago
// Return:     void
////////////////////////////////////////////////////////////////////////

void Couta::setFechadePago(int newFechadePago)
{
   FechadePago = newFechadePago;
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::getSaldoPendiente()
// Purpose:    Implementation of Couta::getSaldoPendiente()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Couta::getSaldoPendiente(void)
{
   return SaldoPendiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       Couta::setSaldoPendiente(int newSaldoPendiente)
// Purpose:    Implementation of Couta::setSaldoPendiente()
// Parameters:
// - newSaldoPendiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Couta::setSaldoPendiente(int newSaldoPendiente)
{
   SaldoPendiente = newSaldoPendiente;
}