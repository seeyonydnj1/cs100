//seeyon goykadosh
//final project
//i made my model that unless the pedestrian presses the button they wont have as much time to cross as they would push the button.
//the times are just very short for the model. real life time would be longer.

int seconds = 100; // seconds is equal to number put in multiplied by 100

int green1 = 7; //green led connected to pin 7
int orange1 = 2;// orange led connected to pin 2
int red1 = 3; // red led connected to pin 3
int green_ped = 5; // pedestrian green led connected to pin 5
int button = 6; // pedestrian button connected to pin 6
int value = 1; // when button is not pressed loop continues





void setup()
{
  pinMode (green1, OUTPUT); // green light go
  pinMode (orange1, OUTPUT); //yellow light slow down
  pinMode (red1, OUTPUT); // red light stop
  pinMode (green_ped, OUTPUT);// green light for pedestrians
  pinMode (button, INPUT_PULLUP); //Pedestrians press this in order to make "green_ped" their green light stay on longer


}

void loop()
{
  value = digitalRead (button); //value means that it reads if the button is pressed or not
  if (value == HIGH) // if the pedestrian button is not pressed then we go through the normal loop
  {
    digitalWrite (red1, LOW); // red light is off
    digitalWrite(green1, HIGH); //green light is on
    delay (100 * seconds);//for 10 seconds
    digitalWrite(green1, LOW);//green light is then turned off
    digitalWrite(orange1, HIGH); //and then the orange(didn't have a yellow light) turns on
    delay (30 * seconds);// for 3 seconds
    digitalWrite(orange1, LOW);// then the orange light turns off
    digitalWrite (red1, HIGH); //red light turns on for cars
    digitalWrite(green_ped, HIGH);// at the same time the green light turns on for pedestrians
    delay(10 * seconds); //only for 1 second
    digitalWrite(green_ped, LOW);// the pedestrian green light turns off
    digitalWrite (red1, HIGH);// the cars red light stays on
    delay (10 *seconds);// for another 1 second. when the pedestrians see that only red is on they can hold the button to make the pedestrian green on again and this time for 10 seconds. if they dont press the button the loop continues as normal.
  }
  else //if the pedestrian is holding the button
  {
    //once they see the pedestrian green back they let go this loop finishes then the original loop continues
    digitalWrite (green1, LOW); // green is off
    digitalWrite (orange1, LOW);//orange is off
    digitalWrite (red1, HIGH); // red is on
    digitalWrite (green_ped, HIGH);// pedestrians green is on
    delay (100 * seconds); //for 10 seconds
    digitalWrite (red1, LOW);// then red turns off
    digitalWrite (green_ped, LOW);// as dose the pedestrian green
  }
}
