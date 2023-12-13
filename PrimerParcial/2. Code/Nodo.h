/***********************************************************************
 * Module:  Nodo.h
 * Author:  Cesar Loor
 * Modified: miércoles, 13 de diciembre de 2023 1:49:00
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Nodo_h)
#define __Modelo_Proyect_P1_Nodo_h

class Nodo
{
public:
   T getDato(void);
   void setDato(T newDato);
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo* getAnterior(void);
   void setAnterior(Nodo* newAnterior);
   Nodo();
   ~Nodo();

protected:
private:
   T dato;
   Nodo* siguiente;
   Nodo* anterior;


};

#endif