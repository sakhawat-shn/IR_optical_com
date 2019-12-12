#include <SoftwareSerial.h>
#define rx 2
#define tx 3

SoftwareSerial XSERIAL = SoftwareSerial(rx, tx, false);

void setup()
{
  XSERIAL.begin(9600);

  Serial.begin(9600);

  Serial.println("Message...");
}

void loop()
{
  if (XSERIAL.available())
  {
    Serial.print((char)XSERIAL.read());
  }
}
