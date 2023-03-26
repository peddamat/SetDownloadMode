#define CE_PIN 2
#define RST_PIN 4

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  
  pinMode(CE_PIN, OUTPUT);
  pinMode(RST_PIN, OUTPUT);
  digitalWrite(CE_PIN, LOW);
  digitalWrite(RST_PIN, LOW);
  delay(1000);
  digitalWrite(CE_PIN, HIGH);
  delay(100);
  digitalWrite(RST_PIN, HIGH);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);   
}
