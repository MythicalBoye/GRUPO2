//λ Variables Globales λ//
int PDState;
int PUState;


//λ Entradas/Inputs λ//
#define PD 2
#define PU 3

#define pot1 A0 //Valor de 1K
#define pot2 A1 //Valor de 1k

//λ Salidas/Outputs λ//
#define LED1 13
#define LED2 12

//λ Estados λ//
#define ON HIGH
#define OFF LOW

//λ********************PROTOTIPO DE FUNCIONES************************λ

void DeclararPines (void);
 
int LeerPulsadores (void);

float LeerPotenciometros(void); //Lee los 2 potenciómetros y devuelve la suma de esos 2 valores

void EstadoLed(int, int); //Lee el número de led asignado y envía el valor ingresado al mismo

//********************CUERPO DE FUNCIONES************************

void DeclararPines(void){
  pinMode(PU, INPUT);
  pinMode(PD, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  for (int i = 4; i < 11 ; i++) //Declaraciones de pines digitales OPCIONALES macho de salida incluidos en la placa
  {
  pinMode(i,OUTPUT);
  }
}

void EstadoLed(int num, int state){
  if (num == 1)
  {
    digitalWrite(LED1,state);
  }
    if (num == 2)
    {
    digitalWrite(LED2,state);
    }
}

int LeerPulsadores(void){

PDState = digitalRead(PD);
PUState = digitalRead(PU);

  if (PUState == HIGH && PDState == LOW){
  return(0);
  }else{
  if(PUState == HIGH && PDState == HIGH){
  return (1);
  }else{
  if(PUState == LOW && PDState == LOW){
  return (2);
  }else{
  if (PUState == LOW && PDState == HIGH){
  return (3);
  }}}}}

  float LeerPotenciometros(){
    float val, P1, P2;
    P1 = analogRead(pot1);
    P2 = analogRead(pot2);
    val = (P1 + P2);
    return (val);
  }
