#define ECHOpin 5 
// it defines the ECHO pin of the sensor to pin 5 of Arduino  
#define TRIGpin 6   
// we have defined the variable  
long duration; // variable for the duration of sound wave travel  
int distance; // variable for the distance measurement  
void setup()   
{  
  pinMode(TRIGpin, OUTPUT); // It sets the ECHO pin as OUTPUT  
  pinMode(ECHOpin, INPUT); // It sets the TRIG pin as INPUT  
  Serial.begin(9600); // // Serial Communication at the rate of 9600 bps  
  Serial.println("Test of the Ultrasonic Sensor HC-SR04"); // It will appear on Serial Monitor  
  Serial.println("with the Arduino UNO R3 board");  
}  
void loop()   
{  
  // It first sets the TRIG pin at LOW for 2 microseconds  
  digitalWrite(TRIGpin, LOW);  
  delayMicroseconds(4);  
  // It now sets TRIG pin at HIGH for 15 microseconds  
  digitalWrite(TRIGpin, HIGH);  
  delayMicroseconds(15);  
  digitalWrite(TRIGpin, LOW);  
  // It will read the ECHO pin and will return the time   
  duration = pulseIn(ECHOpin, HIGH);  
  // distance formula  
  distance = duration*(0.034/2); // (speed in microseconds)  
  // Speed of sound wave (340 m/s)divided by 2 (forward and backward bounce)  
  // To display the distance on Serial Monitor  
  Serial.print("Distance: ");  
  Serial.print(distance);  
  Serial.println(" cm"); //specified unit of distance  
}  
