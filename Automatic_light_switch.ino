nt sensorPin = A0;
int ledPin = 9;
void setup() 
{
Serial.begin(9600);
pinMode(sensorPin, INPUT);
pinMode(ledPin, OUTPUT);
}
void loop() 
{
intsensorValue = analogRead(sensorPin);
if( sensorValue <= 300 ) // Change the value as per your requirement
{
digitalWrite(ledPin, HIGH);
Serial.print("LED ON ");
Serial.println(sensorValue);
delay(100);
}
else
{
digitalWrite(ledPin, LOW);
Serial.println("LED OFF");
}
}
