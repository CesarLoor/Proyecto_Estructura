/***********************************************************************
 * Module:  Cuota.h
 * Author:  PC DIGITAL
 * Modified: mi�rcoles, 13 de diciembre de 2023 12:35:32
 * Purpose: Declaration of the class Cuota
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Cuota_h)
#define __Modelo_Proyect_P1_Cuota_h

class Cuota
{
public:
   int ActualizarSaldo(void);
   int DetallesdeCouta(void);
   int getMontoPrincipal(void);
   void setMontoPrincipal(int newMontoPrincipal);
   int getMontodeInteres(void);
   void setMontodeInteres(int newMontodeInteres);
   int getMontoTotal(void);
   void setMontoTotal(int newMontoTotal);
   int getFechadePago(void);
   void setFechadePago(int newFechadePago);
   int getSaldoPendiente(void);
   void setSaldoPendiente(int newSaldoPendiente);

protected:
private:
   int MontoPrincipal;
   int MontodeInteres;
   int MontoTotal;
   int FechadePago;
   int SaldoPendiente;


};

#endif