/***********************************************************************
 * Module:  Operaciones.h
 * Author:  Cesar Loor
 * Modified: miércoles, 13 de diciembre de 2023 1:32:00
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Operaciones_h)
#define __Modelo_Proyect_P1_Operaciones_h

class Operaciones
{
public:
   virtual void insertar(void)=0;
   virtual void eliminar(void)=0;
   virtual void buscar(void)=0;
   virtual void imprimir(void)=0;

protected:
private:

};

#endif