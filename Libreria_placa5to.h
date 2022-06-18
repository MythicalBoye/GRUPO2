
int PDState;
int PUState;
#define PD 2
#define PU 3
#define LED1 13
#define LED2 12
#define ON true
#define OFF false

//********************PROTOTIPO************************

void DeclararPines ();
 
int LeerPulsadores ();

void EstadoLed(int, bool);

//********************CUERPO************************

void DeclararPines(){
  pinMode(PU, INPUT);
  pinMode(PD, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void EstadoLed(int num, bool state){
  if (num == 1)
  {
    num = 13;
  }else{
    if (num == 2)
    {
      num = 12;
    }
  }
digitalWrite(num, state);
}

int LeerPulsadores(){

PDState = digitalRead(PD);
PUState = digitalRead(PU);

  if (PDState == 1 || PUState == 0){
  return(0);
  }else{
  if(PDState == 1 || PUState == 1){
  return (1);
  }else{
  if(PDState == 0 || PUState == 0){
  return (2);
  }else{
  if (PDState == 0 || PUState == 1){
  return (3);
  }}}}}
