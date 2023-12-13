/***********************************************************************
 * Module:  Couta.h
 * Author:  Cesar Loor
 * Modified: miércoles, 13 de diciembre de 2023 1:58:29
 * Purpose: Declaration of the class Couta
 ***********************************************************************/

#if !defined(__Modelo_Proyect_P1_Couta_h)
#define __Modelo_Proyect_P1_Couta_h

class Couta
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