/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  Cesar Loor
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:29:11
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include "Fecha.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getDia()
// Purpose:    Implementation of Fecha::getDia()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getDia(void)
{
   return dia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setDia(int newDia)
// Purpose:    Implementation of Fecha::setDia()
// Parameters:
// - newDia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setDia(int newDia)
{
   dia = newDia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getMes()
// Purpose:    Implementation of Fecha::getMes()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getMes(void)
{
   return mes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setMes(int newMes)
// Purpose:    Implementation of Fecha::setMes()
// Parameters:
// - newMes
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setMes(int newMes)
{
   mes = newMes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getAnio()
// Purpose:    Implementation of Fecha::getAnio()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getAnio(void)
{
   return anio;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setAnio(int newAnio)
// Purpose:    Implementation of Fecha::setAnio()
// Parameters:
// - newAnio
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setAnio(int newAnio)
{
   anio = newAnio;
}