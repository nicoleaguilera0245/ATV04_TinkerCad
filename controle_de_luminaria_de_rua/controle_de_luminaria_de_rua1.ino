// Definições de pinos
const int LDR_PIN = A0;
const int RELAY_PIN = 8;

// Definições de limiar de luz
const int THRESHOLD = 500; // Valor de corte para ligar/desligar a lâmpada

void setup() {
	pinMode(RELAY_PIN, OUTPUT);
  	digitalWrite(RELAY_PIN, LOW);
  	Serial.begin(9600);
}

void loop() {
	int ldrValue = analogRead(LDR_PIN);
  	Serial.print("LDR Value: ");
  	Serial.println(ldrValue);
  
  if (ldrValue < THRESHOLD) {
  	// Se estiver escuro
    digitalWrite(RELAY_PIN, HIGH); // Liga a lâmpada
  } else {
  	// Se estiver claro
    digitalWrite(RELAY_PIN, LOW); // Desliga a lâmpada
  }
  
  delay(500);
}