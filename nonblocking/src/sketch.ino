const int outPin =  13;
long previousMicros = 0;

unsigned long interval = 4545/2;

void setup() {
    pinMode(outPin, OUTPUT);
    Serial.begin(9600);
}

int amp = 0;
unsigned long currentMicros;
boolean on = false;

void loop()
{
    if (Serial.available()) {

        Serial.read();

        if (on) {
            on = false;
        } else if (!on) {
            on = true;
        }
    }

    currentMicros = micros();

    if ((currentMicros - previousMicros > interval) && on) {
        previousMicros = currentMicros;

        if (amp == HIGH) {
            amp = LOW;
        } else if (amp == LOW) {
            amp = HIGH;
        }

        digitalWrite(outPin, amp);
    }
}
