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

bool Fecha::es_bisiesto() {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

bool Fecha::fecha_valida() {
    
    if (mes < 1 || mes > 12)
        return false;

    
    int dias_por_mes = 31;

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias_por_mes = 30;
    } else if (mes == 2) {
        dias_por_mes = es_bisiesto() ? 29 : 28;
    }
    
    if (dia >= 1 && dia <= dias_por_mes){

        return true;
    }else{
        return false;
    }
    
}

Fecha Fecha::dias_de_paga()
{
   int dian,mesn,anion;
   if(dia_de_la_semana()==0)
    return Fecha(dian,mesn,anion);
}

int Fecha::dia_de_la_semana() {
    if (!fecha_valida()) {
        std::cout << "Invalid date." << std::endl;
        return 7;
    }
    if (mes == 1) {
        mes = 13;
        anio--;
    }
    if (mes == 2) {
        mes = 14;
        anio--;
    }
    int q = dia;
    int m = mes;
    int k = anio % 100;
    int j = anio / 100;
    int h
        = q + 13 * (m + 1) / 5 + k + k / 4 + 
                              j / 4 + 5 * j;
    h = h % 7;
    
    return h;
}


bool Fecha::es_feriado(){
    if (anio==2023){
        if (mes==1&&dia==2 || mes==2&&dia==20 || mes==2&&dia==21 || mes==4&&dia==7 || mes==5&&dia==1 || mes==5&&dia==26 || mes==8&&dia==11 || mes==10 && dia==9 || mes==11&&dia==2 || mes==11&&dia==3 || mes==12&&dia==25){

            return true;
        }


    }else if (anio==2024){
        if (mes==1&&dia==1 || mes==2&&dia==12 || mes==2&&dia==13 || mes==3&&dia==29 || mes==5&&dia==3 || mes==5&&dia==24 || mes==8&&dia==9 || mes==10 && dia==11 || mes==11&&dia==1 || mes==11&&dia==4 || mes==12&&dia==25){

            return true;
        }


    }else if (anio==2025){
        if (mes==1&&dia==1 || mes==3&&dia==3 || mes==3&&dia==4 || mes==4&&dia==18 || mes==5&&dia==2 || mes==5&&dia==23 || mes==8&&dia==11 || mes==10 && dia==10 || mes==11&&dia==4 || mes==11&&dia==3 || mes==12&&dia==25){

            return true;
        }
}else if (anio==2026){
        if (mes==1&&dia==1 || mes==2&&dia==16 || mes==2&&dia==17 || mes==4&&dia==3 || mes==5&&dia==1 || mes==5&&dia==25 || mes==8&&dia==10 || mes==10 && dia==9 || mes==11&&dia==2 || mes==11&&dia==3 || mes==12&&dia==25){

            return true;
        }
}else if (anio==2027){
        if (mes==1&&dia==1 || mes==2&&dia==8 || mes==2&&dia==9 || mes==3&&dia==26 || mes==4&&dia==30 || mes==5&&dia==24 || mes==8&&dia==9 || mes==10 && dia==8 || mes==11&&dia==1 || mes==11&&dia==2 || mes==12&&dia==25){

            return true;
        }
}else if (anio==2028){
        if (mes==1&&dia==1 || mes==2&&dia==28 || mes==2&&dia==29 || mes==4&&dia==14 || mes==5&&dia==1 || mes==5&&dia==26 || mes==8&&dia==11 || mes==10 && dia==9 || mes==11&&dia==2 || mes==11&&dia==3 || mes==12&&dia==25){

            return true;
        }
}else if (anio==2029){
        if (mes==1&&dia==1 || mes==2&&dia==13 || mes==2&&dia==12 || mes==3&&dia==30 || mes==4&&dia==30 || mes==5&&dia==25 || mes==8&&dia==10 || mes==10 && dia==8 || mes==11&&dia==1 || mes==11&&dia==2 || mes==12&&dia==25){

            return true;
        }
}else if (anio==2030){
        if (mes==1&&dia==1 || mes==3&&dia==4 || mes==3&&dia==5 || mes==4&&dia==19 || mes==5&&dia==3 || mes==5&&dia==24 || mes==8&&dia==9 || mes==10 && dia==11 || mes==11&&dia==2 || mes==11&&dia==3 || mes==12&&dia==25){

            return true;
        }
}else{
    return false;
}
}