const int led_vermelho = 5;  //
const int led_verde = 6;     //
const int led_amarelo = 7;
const int pin_botaoA = 2;
const int pin_botaoB = 3;
bool botaoA = false;
bool botaoB = false;
void setup() {
  pinMode(pin_botaoA, INPUT_PULLUP);
  pinMode(pin_botaoB, INPUT_PULLUP);
  pinMode(led_vermelho, OUTPUT);  //
  pinMode(led_verde, OUTPUT);     //
  pinMode(led_amarelo, OUTPUT);
  Serial.begin(115200);  // definiçao da velocidade de transmissao
}
void loop() {
  botaoA = digitalRead(pin_botaoA);
  botaoB = digitalRead(pin_botaoB);
  if (botaoA == 0 && botaoB == LOW){
    digitalWrite(led_vermelho, HIGH);}
  
  else {digitalWrite(led_vermelho, LOW);}
  
  if (botaoA == 0 || botaoB == 0){
  digitalWrite(led_verde, HIGH);}

  else {digitalWhite(led_verde, LOW);}

  if (botaoA == 0 ^ botaoB == 0){
  digitalWhite(led_amarelo, HIGH);}
  else {digitalWrite(led_amarelo, LOW);}
}
// put your main code here, to run repeatedly:
