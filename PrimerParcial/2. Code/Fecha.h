/***********************************************************************
 * Module:  Fecha.h
 * Author:  Cesar Loor
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:29:11
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Fecha_h)
#define __Modelo_Proyect_P1_Fecha_h

class Fecha
{
public:
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

protected:
private:
   int dia;
   int mes;
   int anio;


};

#endif