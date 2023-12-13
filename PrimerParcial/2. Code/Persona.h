/***********************************************************************
 * Module:  Persona.h
 * Author:  Cesar Loor
 * Modified: miércoles, 13 de diciembre de 2023 1:33:02
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Persona_h)
#define __Modelo_Proyect_P1_Persona_h

class Persona
{
public:
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   int getCedula(void);
   void setCedula(int newCedula);
   Persona();
   ~Persona();

protected:
private:
   std::string Nombre;
   std::string Apellido;
   int cedula;


};

#endif