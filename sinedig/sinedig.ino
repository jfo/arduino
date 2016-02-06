void setup() {
  for (int i = 0; i < 8; i++)
    pinMode(i, OUTPUT);
}

void steps() {
  for (int i = 0; i < 8; i++) { 
    digitalWrite(i, HIGH); 
  }
  delay(1);
  for (int i = 0; i < 8; i++) { 
    digitalWrite(i, LOW); 
  }
  delay(1);
}

void port() {
  int x = 100;
  for (int i = 0; i < 256; i+= 1) {
    PORTD = i;
    delayMicroseconds(1250/x);
  }
  delayMicroseconds(1250/x);


  for (int i = 256; i > 0; i-=1) {
    PORTD = i;
    delayMicroseconds(1250/x);

  }
  delayMicroseconds(1250/x);

}

void port2(int x) {
  int derps[8] = { 
    2,3, 7,15,31,63,127,255          };
  for (int i = 0; i < 7; i++) {
    PORTD = derps[i];
    delayMicroseconds(x);
  }
  for (int i = 7; i > 0; i--) {
    PORTD = derps[i];
    delayMicroseconds(x);

  }
  for (int i = 0; i < 7; i++) {
    PORTD = derps[i] ^ 255;
    delayMicroseconds(x);
  }
  for (int i = 7; i > 0; i--) {
    PORTD = derps[i] ^ 255;
    delayMicroseconds(x);

  }
}

void loop() {
  port2(100);
  port2(200);
}







