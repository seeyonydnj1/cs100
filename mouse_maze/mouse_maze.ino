// seeyon goykadosh
// mouse maze project
// mouse will follow the right wall


int ledPin_turn_left =1; //led connected to pin 1
int ledPin_turn_right =0; //led connected to pin 0
int ledPin_go_straight  =2; //led connected to pin 2
int ledPin_turn_around  =3; //led connected to pin 3
int switch_wall_right=12; // switch connected to pin 12
int switch_wall_straight=6; //switch connected to pin 6
int switch_wall_left=9; // switch connected to pin 9



void setup() 
{
  // set these 4 pins as an output
  pinMode(ledPin_turn_left, OUTPUT);
  pinMode(ledPin_turn_right, OUTPUT);
  pinMode(ledPin_go_straight, OUTPUT);
  pinMode(ledPin_turn_around, OUTPUT);
  
  //set these 3 pins as an input pullup
  pinMode(switch_wall_right, INPUT_PULLUP);
  pinMode(switch_wall_straight, INPUT_PULLUP);
  pinMode(switch_wall_left, INPUT_PULLUP);
  
  
}

void loop() 

{
  // turn led off
  digitalWrite (ledPin_turn_right, LOW);
  digitalWrite (ledPin_turn_left, LOW);
  digitalWrite (ledPin_go_straight, LOW);
  digitalWrite (ledPin_turn_around, LOW);
  
  if (digitalRead (switch_wall_right)==0)// if there is no right wall
  {
    digitalWrite (ledPin_turn_right,HIGH); //then turn right
  }
  else
  {
    if (digitalRead (switch_wall_straight)==0) // otherwise if there is no straight wall
    {digitalWrite (ledPin_go_straight, HIGH); // go straight
    }
    else
    {
      if (digitalRead (switch_wall_left)==0) //otherwise if there is no left wall
      digitalWrite (ledPin_turn_left, HIGH); // then turn left

      else
      {digitalWrite (ledPin_turn_around,HIGH); // if all walls are are there then turn around
      }
    }
    }
    
  }
  

   

  
  


