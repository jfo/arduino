void setup()
{
    for (int i = 0; i < 8; i++) {
        pinMode(i, OUTPUT);
    }
    activepin(1,4);
}

void beep() {
    int now = millis();
    while (millis() < now + 250) {
        square();
    }
}

void square() {
    for (int i = 0; i < 8; i++) {
        digitalWrite(i, HIGH);
    }
    delayMicroseconds(4510 / 4);
    for (int i = 0; i < 8; i++) {
        digitalWrite(i, LOW);
    }
    delayMicroseconds(4510 / 4);
}

int activepin(int pin, int step) {
    int pins[8] = {1,2,4,8,16,32,64,128};
    int response = pins[pin] & step;
    if (response) {
        beep();
    }
    return response;
}

void loop()
{
    // for (int i = 0; i < 256; i++) {
    //     for (int p = 0; i < 8; i++) {
    //         if (!activepin(p,i)) {
    //             digitalWrite(p, HIGH);
    //         } else {
    //             digitalWrite(p, LOW);
    //         }
    //     }
    //         delayMicroseconds((4510 / 4)/255);
    // }

    // for (int i = 255; i > 0; i--) {
    //     for (int p = 0; i < 8; i++) {
    //         if (activepin(p,i)) {
    //             digitalWrite(p, HIGH);
    //         } else {
    //             digitalWrite(p, LOW);
    //         }
    //     }
    //         delayMicroseconds((4510 / 4)/255);
    // }

}
