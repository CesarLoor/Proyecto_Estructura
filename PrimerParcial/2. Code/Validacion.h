/***********************************************************************
 * Module:  Validacion.h
 * Author:  Cesar Loor
 * Modified: miércoles, 13 de diciembre de 2023 1:36:21
 * Purpose: Declaration of the class Validacion
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Validacion_h)
#define __Modelo_Proyect_P1_Validacion_h

class Validacion
{
public:
   int IngresarDatosEnteros(void);
   int IngresarDatosFloat(void);
   int IngresarCedula(void);
   bool ValidarCedulaReal(void);

protected:
private:

};

#endif