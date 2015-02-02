#include <Arduino.h>

void setup();
void loop();
#line 1 "src/a440.ino"
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delayMicroseconds(4510 / 4);
  digitalWrite(13, LOW);
  delayMicroseconds(4510 / 4);

}
