int led = 7;
void setup() 
{
 //  initialize the digital pin as an output
 pinMode(led,  OUTPUT); 

}

void loop() 
{
 digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
 delay(3000);              // wait three seconds
 digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
 delay(4000);               // wait four seconds
 
 
}
