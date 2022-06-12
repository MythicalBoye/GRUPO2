
int PDState;
int PUState;
#define PD 2
#define PU 3
#define LED1 13
#define LED2 12

//********************PROTOTIPO************************

void DeclararPines ();
 
int LeerPulsadores ();

//********************CUERPO************************

void DeclararPines(){
  pinMode(PU, INPUT);
  pinMode(PD, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
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
  return (3345678);
  }}}}}
