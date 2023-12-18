/***********************************************************************
 * Module:  Fecha.h
 * Author:  Cesar Loor and Carlos Jaya 
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:29:11
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/


#if !defined(__Modelo_Proyect_P1_Fecha_h)
#define __Modelo_Proyect_P1_Fecha_h
#include "ListaDoble.h"

template <typename T>
class ListaDoble;
class Fecha {
public:
    Fecha(int d, int m, int a);
    Fecha();

    int getDia() const;
    void setDia(int newDia);
    int getMes() const;
    void setMes(int newMes);
    int getAnio() const;
    void setAnio(int newAnio);

    bool es_bisiesto() const;
    bool es_feriado() ;
    int dia_de_la_semana();
    bool fecha_valida() const;
    void MostrarFecha() const; // Agregada función para mostrar la fecha

    Fecha aumentar_dia_si_no_es_laborable(Fecha fecha_de_paga);
    ListaDoble<Fecha>* dias_de_paga(Fecha fecha_de_paga, int plazo);

private:
    int dia;
    int mes;
    int anio;
};

#endif