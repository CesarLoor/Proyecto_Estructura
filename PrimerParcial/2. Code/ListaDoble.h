/***********************************************************************
 * Module:  ListaDoble.h
 * Author:  PC DIGITAL
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:32:00
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Operaciones_h)
#define __Modelo_Proyect_P1_Operaciones_h

using namespace std;
template <typename T>
class ListaDoble {
private:
    Nodo<T>* primero;
    Nodo<T>* ultimo;
public:
    ListaDoble<T>();
    void Insertar(int);
    void Buscar(int);
    void Eliminar(int);
    void Mostrar();
};

#endif