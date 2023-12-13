/***********************************************************************
 * Module:  Validacion.h
 * Author:  Cesar Loor
 * Modified: mi�rcoles, 13 de diciembre de 2023 1:36:21
 * Purpose: Declaration of the class Validacion
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Validacion_h)
#define __Modelo_Proyect_P1_Validacion_h
#include"Fecha.h"

/// @brief 
class Validacion
{
public:
   /// @brief 
   /// @param msj 
   /// @return 
   int IngresarDatosEnteros(const char* msj);
   /// @brief 
   /// @param  
   /// @return 
   int IngresarDatosFloat(void);
   /// @brief 
   /// @param  
   /// @return 
   int IngresarCedula(void);
   /// @brief 
   /// @param  
   /// @return 
   bool ValidarCedulaReal(void);

protected:
private:
	/// @brief 
	/// @param datos 
	/// @param i 
	void backSpace(char* datos, int& i);

};

#endif