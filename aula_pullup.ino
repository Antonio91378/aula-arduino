#define PIN_BUTTON 2
#define PIN_led 3
int i = 0;
void setup() {
  Serial.begin(115200);
  pinMode(PIN_BUTTON, INPUT_PULLUP);
  pinMode(PIN_led,OUTPUT);
  analogWrite(PIN_led, 0);
}

void loop() {
  
  delay(100);
  while (digitalRead(PIN_BUTTON) == 0) {
    while (i < 255) {
      Serial.println(digitalRead(PIN_BUTTON));
      Serial.println(i);
      analogWrite(3, i);
      i = i + 1;
      delay(10);
    }  while (i > 0) {
      analogWrite(3, i);
      i = i -1;
      delay(10);
    }
  }
}
