const int outPin =  13;
long previousMicros = 0;

unsigned long interval = 4545/2;

void setup() {
    pinMode(outPin, OUTPUT);
}

int amp = 0;
unsigned long currentMicros;

void loop()
{
    currentMicros = micros();
    if(currentMicros - previousMicros > interval) {
        previousMicros = currentMicros;

        if (amp == HIGH) {
            amp = LOW;
        } else if (amp == LOW) {
            amp = HIGH;
        }

        digitalWrite(outPin, amp);
    }
}
