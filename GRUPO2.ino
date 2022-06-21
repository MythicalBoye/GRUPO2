/*  DESAFÍO:    
 *  Tiene que andar este programa. No se le puede agregar NADA a ESTE archivo.
 *  Se presiona el PUL1 y prende LED 1 / Se presiona el PUL2 y prende LED 2.
 */

#include "Libreria_placa5to.h"
 
void setup() {
  DeclararPines(); //FUNCIÓN TIPO 1
}

void loop() {
  int Pul_Activado = LeerPulsadores();  //FUNCIÓN TIPO 2
  //1 = se presiona PUL1 / 2 = se presiona PUL2 / 0= PUL1 Y PUL2 / X = LIBRE

    switch (Pul_Activado){              //EstadoLed( , ) FUNCIÓN TIPO 3
    case  0: EstadoLed(1,ON); EstadoLed(2,ON);    
             break;
    case  1: EstadoLed(1,ON);
             break;
    case  2: EstadoLed(2,ON);
             break;
    default: EstadoLed(1,OFF); EstadoLed(2,OFF);
             break;
    }
  delay(1000);
}
