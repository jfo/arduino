void setup()
{
    pinMode(3, OUTPUT);
}

int amp = 0;
int up = true;

void loop()
{

    if (amp == 255) {
        up = false;
    } else if (amp == 0) {
        up = true;
    }

    up ? amp += 255 : amp -= 255;
    analogWrite(3, amp);
    delayMicroseconds(4545 / 2);
}
