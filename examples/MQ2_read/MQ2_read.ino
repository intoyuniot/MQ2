#include <mq2.h>

MQ2 mq2(A0);

uint32_t smokeScope;

void setup()
{
    mq2.begin();
    Serial.begin(115200);
    delay(500);
}

void loop()
{
    smokeScope = mq2.Read();
    Serial.print(smokeScope);
    Serial.print("\r\n");
    delay(1000);
}
