// Definições de pinos
const int PIR_PIN = 3;
const int RELAY_PIN = 2;

void setup() {
	pinMode(PIR_PIN, INPUT);
  	pinMode(RELAY_PIN, OUTPUT);
  
  	digitalWrite(RELAY_PIN, LOW); // Relé desligado inicialmente
  
  	Serial.begin(9600);
}

void loop() {
	int movimento = digitalRead(PIR_PIN);
  
  if (movimento == HIGH) {
  	Serial.println("Movimento detectado! Abrindo a porta...");
    digitalWrite(RELAY_PIN, HIGH); // Ativa o relé (abre a porta)
    delay(5000); // Mantém a porta aberta por 5 segundos
    digitalWrite(RELAY_PIN, LOW); // Desativa o relé (fecha a porta)
    Serial.println("Porta fechada.");
  }
  
  delay(200);
}