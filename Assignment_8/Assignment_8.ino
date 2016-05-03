// A sketch to control the NeoPixel
// seeyon goykadosh
#include <Adafruit_NeoPixel.h> //set adafruit_neopixel as part of code


  int neopix_1 = 1; //neopix contected to pin 1
  int neopix_8 = 8; //neopix connected to pin 8
  Adafruit_NeoPixel light_ring =Adafruit_NeoPixel(neopix_1,neopix_8); // sets adafruit_neopixel to refer to neopix_1 and neopix_2

void setup() 
{
  light_ring.begin(); //start the cycle
  light_ring.setPixelColor(0, light_ring.Color(255, 0, 0)); //set start of cycle to color red
  light_ring.show(); //show the color red
  
}

void loop() 
{
 light_ring.begin();
light_ring.setPixelColor(0,  light_ring.Color(255, 127, 0)); //color orange
light_ring.show(); //show the color orange
delay(1000); //wait one second

 light_ring.begin();
light_ring.setPixelColor(0,  light_ring.Color(255, 255, 0)); //color yellow
light_ring.show(); //show the color yellow
delay(1000);  //wait one second

 light_ring.begin();
light_ring.setPixelColor(0,  light_ring.Color(0, 255, 0)); //color green
light_ring.show();
delay(1000);  //wait one second

 light_ring.begin();
light_ring.setPixelColor(0,  light_ring.Color(0, 0, 255)); //color blue
light_ring.show(); //show the color blue
delay(1000);  //wait one second

 light_ring.begin();
light_ring.setPixelColor(0,  light_ring.Color(75, 0, 130));// indigo
light_ring.show(); //show the color indigo
delay(1000); //wait one second

 light_ring.begin();
light_ring.setPixelColor(0,  light_ring.Color(139, 0, 255)); //color violet
light_ring.show(); //show the color violet
delay(1000); //wait one second






}
