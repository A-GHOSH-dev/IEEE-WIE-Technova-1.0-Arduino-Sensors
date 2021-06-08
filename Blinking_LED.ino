 //definition digital 8 pins as pin to control the LED
int ledPin=8;

// put your setup code here, to run once
//void setup(): This is run by the Arduino once every time it starts. This is where you can configure variables and anything your Arduino needs to run.

void setup()
{
    pinMode(ledPin,OUTPUT);    
    //Set the digital 8 port mode, OUTPUT: Output mode       
    //pinMode(8, OUTPUT): This tells the Arduino to use this pin as an output, without this line, the Arduino would not know what to do with each pin. 
    //This only needs to be configured once per pin, and you only need to configure pins you're intending to use.

}

// put your main code here, to run repeatedly
//void loop(): Any code inside this loop is repeatedly run over and over again, until the the Arduino is turned off. 
//This can make larger projects more complex, but it works amazingly well for simple projects.

void loop()
{  
    digitalWrite(ledPin,HIGH); //HIGH is set to about 5V PIN8  // turn LED on
    //digitalWrite(7, HIGH): This is used to set the pin HIGH or LOW -- ON or OFF. 
    //Just like a light switch, when the pin is HIGH, the LED will be on. 
    //When the pin is LOW, the LED will be off. Inside the brackets, you need to specify some additional information for this to work correctly. 
    //Additional information is known as parameters or arguments.
    //The first (7) is the pin number. If you have connected your LED to a different pin, for example, you would change this from seven to another number. 
    //The second parameter has to be HIGH or LOW, which specifies if the LED should be turned on or off.

    
    delay(1000);               //Set the delay time, 1000 = 1S  //wait 1 second
    //delay(1000): The tells the Arduino to wait for a specified amount of time in milliseconds. 
    1000 milliseconds is equal to one second, so this will make the Arduino wait for once second.

    
    digitalWrite(ledPin,LOW);  //LOW is set to about 5V PIN8  // turn LED off
    delay(1000);               //Set the delay time, 1000 = 1S //wait 1 second
} 
//Once the LED has been turned on for one second, the Arduino then runs the same code, only it proceeds to turn the LED off and wait another second. 
Once this process has finished, the loop starts again, and the LED is once again turned on.


//https://www.tinkercad.com/things/2MwHJmZ3dPc-copy-of-lesson-1-blinking-led/editel
