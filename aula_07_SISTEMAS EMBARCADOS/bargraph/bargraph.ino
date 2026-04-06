int pin_sensor = A0;
int valor_sensor = 0;
int led_1 = 9;
int led_2 = 10;
int led_3 = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_sensor, INPUT);
  Serial.begin(115200);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor_sensor = analogRead(pin_sensor);
  float valor_tensao = (valor_sensor * 5.0) / 1023;
  Serial.print("valor analogico = ");
  Serial.println(valor_tensao);
  if (valor_tensao < 1) {
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
  }
  if (valor_tensao >= 1 && valor_tensao < 2) {
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
  }
  if (valor_tensao >= 2 && valor_tensao < 3) {
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, HIGH);
    digitalWrite(led_3, LOW);
  }
  if (valor_tensao >= 3 && valor_tensao < 4) {
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, HIGH);
  }
  if (valor_tensao >= 4) {
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, HIGH);
    digitalWrite(led_3, HIGH);
  }
}