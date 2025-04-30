// Definições dos pinos
const int PIR_PIN = 2;
const int LED_PIN = 4;

void setup() {
	pinMode(PIR_PIN, INPUT);
  	pinMode(LED_PIN, OUTPUT);
  	Serial.begin(9600);
}

void loop() {
	int pirState = digitalRead(PIR_PIN);
  	
  if (pirState == HIGH) {
  	digitalWrite(LED_PIN, HIGH); // Liga o LED se detectar movimento
    Serial.println("Movimento detectado!");
  } else {
  	digitalWrite(LED_PIN, LOW); // Apaga o LED se não detectar movimento
    Serial.println("Nenhum movimento detectado.");
  }
  
  delay(500);
}