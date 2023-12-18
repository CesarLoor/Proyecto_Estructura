/***********************************************************************
 * Module:  Fecha.h
 * Author:  Cesar Loor and Carlos Jaya 
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:29:11
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Fecha_h)
#define __Modelo_Proyect_P1_Fecha_h
#include "ListaDoble.h"
class Fecha{
public:
   Fecha(int d, int m, int a);
   Fecha();

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
   ListaDoble<Fecha>* dias_de_paga(Fecha dias_de_paga);
   Fecha aumentar_dia_si_no_es_laborable(Fecha fecha_de_paga);
protected:
private:
   ListaDoble<Fecha>* lista_de_Fechas_de_Paga;
   int dia;
   int mes;
   int anio;
};
#endif