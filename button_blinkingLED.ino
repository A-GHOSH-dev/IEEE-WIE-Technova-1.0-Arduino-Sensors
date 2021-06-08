int pin = 0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}
void loop()
{
  pin = digitalRead(2); 
  if(pin == HIGH)
  {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  delay(15); 
}
