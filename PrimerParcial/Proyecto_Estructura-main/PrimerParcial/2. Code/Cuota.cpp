/***********************************************************************
 * Module:  Cuota.cpp
 * Author:  Cesar Loor and Carlos jaya
 * Modified: mi�rcoles, 13 de diciembre de 2023 12:35:32
 * Purpose: Implementation of the class Cuota
 ***********************************************************************/

#include "Cuota.h"

int Cuota::ActualizarSaldo(void){
   //implementar
}

int Cuota::DetallesdeCouta(void){
   //implementar
}


int Cuota::getMontoPrincipal(void)
{
   return MontoPrincipal;
}

void Cuota::setMontoPrincipal(int newMontoPrincipal)
{
   MontoPrincipal = newMontoPrincipal;
}

int Cuota::getMontodeInteres(void)
{
   return MontodeInteres;
}


void Cuota::setMontodeInteres(int newMontodeInteres)
{
   MontodeInteres = newMontodeInteres;
}


int Cuota::getMontoTotal(void)
{
   return MontoTotal;
}


void Cuota::setMontoTotal(int newMontoTotal)
{
   MontoTotal = newMontoTotal;
}


int Cuota::getFechadePago(void)
{
   return FechadePago;
}



void Cuota::setFechadePago(int newFechadePago)
{
   FechadePago = newFechadePago;
}


int Cuota::getSaldoPendiente(void)
{
   return SaldoPendiente;
}


void Cuota::setSaldoPendiente(int newSaldoPendiente)
{
   SaldoPendiente = newSaldoPendiente;
}