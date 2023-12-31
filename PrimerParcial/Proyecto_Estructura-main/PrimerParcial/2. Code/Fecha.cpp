/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  Cesar Loor and Carlos jaya
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:29:11
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/
#include <iostream>
#include "Fecha.h"
#include "ListaDoble.h"

Fecha::Fecha(int d, int m, int a)
{
   dia=d;
   mes=m;
   anio=a;
}

Fecha::Fecha()
{
}

int Fecha::getDia(void)
{
   return dia;
}

void Fecha::setDia(int newDia)
{
   dia = newDia;
}


int Fecha::getMes(void)
{
   return mes;
}


void Fecha::setMes(int newMes)
{
   mes = newMes;
}


int Fecha::getAnio(void)
{
   return anio;
}


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

Fecha Fecha::aumentar_dia_si_no_es_laborable(Fecha fecha_de_paga){
   Fecha fecha_nueva=fecha_de_paga;
   int dias_por_mes = 31;
      if (fecha_nueva.getMes() == 4 ||fecha_nueva.getMes() == 6 ||fecha_nueva.getMes() == 9 ||fecha_nueva.getMes() == 11) {
        dias_por_mes = 30;
      } else if (fecha_nueva.getMes() == 2) {
        dias_por_mes = es_bisiesto() ? 29 : 28;
    }

         if (fecha_nueva.es_feriado()||fecha_nueva.dia_de_la_semana()==0||fecha_nueva.dia_de_la_semana()==1){
            if (fecha_nueva.getDia()<dias_por_mes){
               fecha_nueva.setDia(fecha_nueva.getDia()+1);
               
               
               }else if(fecha_nueva.getMes()<12){
                  fecha_nueva.setDia(1);
                  fecha_nueva.setMes(fecha_nueva.getDia()+1);

               }else{
                  fecha_nueva.setDia(1);
                  fecha_nueva.setMes(1);
                  fecha_nueva.setAnio(fecha_nueva.getAnio()+1);

               }
            

         }
         aumentar_dia_si_no_es_laborable(fecha_nueva);
         return fecha_nueva;
    }


ListaDoble<Fecha>* Fecha::dias_de_paga(Fecha fecha_de_paga)
{  
   ListaDoble<Fecha>* lista_de_fechas =new ListaDoble<Fecha>();
   
   Fecha fecha_nueva(fecha_de_paga.getDia(), fecha_de_paga.getMes(), fecha_de_paga.getAnio());
   lista_de_fechas->Insertar(fecha_nueva);
   int anio_destino=getAnio()+1;
    int nuevo_dia = getDia();
    int nuevo_mes = getMes();
    int nuevo_anio = getAnio();
   while(fecha_nueva.getAnio()!=anio_destino && fecha_nueva.getMes()!=fecha_de_paga.getMes()){
      
      
      while (fecha_nueva.dia_de_la_semana() == 0 ||fecha_nueva.dia_de_la_semana() == 1 ||fecha_nueva.es_feriado()) {
      
   }
    

      fecha_nueva.setAnio(nuevo_anio);
      fecha_nueva.setMes(nuevo_mes);
      fecha_nueva.setDia(nuevo_dia);
    
    
    
}
return lista_de_fechas;
}
int Fecha::dia_de_la_semana() {
    if (!fecha_valida()) {
        std::cout << "Fecha no valida." << std::endl;
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
return false;
}

            /*Funciones para luego implementar en la tabla */
    //Ya le miro dentro de un rato
Fecha Fecha::aumentar_dia_si_no_es_laborable(Fecha fecha_valida){
    //implementar
}

ListaDoble<Fecha>* Fecha::dias_de_paga(Fecha fecha_valida){
    //implementar
}
