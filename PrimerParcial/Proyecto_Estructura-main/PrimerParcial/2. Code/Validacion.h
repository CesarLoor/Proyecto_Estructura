/***********************************************************************
 * Module:  Validacion.h
 * Author:  Cesar Loor and Carlos Jaya
 * Create: miércoles, 13 de diciembre de 2023 1:36:21
 * Modified: Viernes, 15 de diciembre de 2023 15:10:04
 * Purpose: Declaration of the class Validacion
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Validacion_h)
#define __Modelo_Proyect_P1_Validacion_h
#include"Fecha.h"
#include <string>
#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
//holi uwu 

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
   float ingresar_reales(const char* msj);
   int borrar (char* datos, int &i);

protected:
private:
	/// @brief 
	/// @param datos 
	/// @param i 
	void backSpace(char* datos, int& i);
   std::string cedula;
   /// @brief 
   /// @param cedulaSinVerificador 
   /// @param verificador 
   /// @return 
   bool ValidarDigitoVerificador(const std::string& cedulaSinVerificador, int verificador);

};

#endif