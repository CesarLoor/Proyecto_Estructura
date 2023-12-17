/***********************************************************************
 * Module:  Fecha.h
 * Author:  Cesar Loor
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:29:11
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Fecha_h)
#define __Modelo_Proyect_P1_Fecha_h
#include "ListaDoble.cpp"
class Fecha
{
public:
   Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {};
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);
   bool es_bisiesto();
   bool es_feriado();
   int dia_de_la_semana();
   bool fecha_valida();
   Fecha dias_de_paga();

protected:
private:
   int dia;
   int mes;
   int anio;


};

#endif