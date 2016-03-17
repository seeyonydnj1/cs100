int led_pin =7;  //led connected to pin 7
int switch_pin=12;  // switch connected to pin 12

void setup() // setup of output and input_pullup
{
  pinMode(led_pin, OUTPUT);  //sets the digital pin as output
  pinMode(switch_pin, INPUT_PULLUP);  //sets the digital pin as input_pullup
 

}

void loop() //run over and over again

  {
  int switch_state = digitalRead(switch_pin); //find out if switch state is on or off
  
  
  
  if (switch_state)
  {
    digitalWrite(led_pin, HIGH); //turn the led on (high is the voltage level)
    delay (1000); //wait one second
  }
  else
  {
    digitalWrite(led_pin, LOW); //turn the led off(low is the voltage level)
    delay (2000); // wait two seconds
  }
  }

  

 
  


