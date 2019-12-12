#include <SoftwareSerial.h>

#define rx 3
#define tx 2

SoftwareSerial XSERIAL = SoftwareSerial(rx, tx);

void setup()
{
    XSERIAL.begin(9600);
    Serial.begin(9600);
    int i;
    for (i = 0; i < 3; i++)
    {
        XSERIAL.println("boot time test...\n");
        delay(1000);
    }
}

void loop()
{
    char ch;
    if (Serial.available())
    {
        ch = (char)Serial.read();
        XSERIAL.print(ch);
        Serial.print(ch);
    }
}
