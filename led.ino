void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(13, HIGH);
    Serial.println("On");
    delay(2000);
    digitalWrite(13, LOW);
    Serial.println("Off");
    delay(2000);
}