/***********************************************************************
 * Module:  Operaciones.h
 * Author:  PC DIGITAL
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:32:00
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Operaciones_h)
#define __Modelo_Proyect_P1_Operaciones_h

/// @brief 
class Operaciones
{
public:
   /// @brief 
   /// @param  
   virtual void insertar(void)=0;
   /// @brief 
   /// @param  
   virtual void eliminar(void)=0;
   /// @brief 
   /// @param  
   virtual void buscar(void)=0;
   /// @brief 
   /// @param  
   virtual void imprimir(void)=0;

protected:
private:

};

#endif